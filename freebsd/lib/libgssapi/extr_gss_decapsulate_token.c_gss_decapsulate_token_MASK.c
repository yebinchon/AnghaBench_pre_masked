
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* gss_buffer_t ;
struct TYPE_8__ {unsigned char length; unsigned char* elements; } ;
typedef TYPE_2__ gss_OID_desc ;
typedef int gss_OID ;
struct TYPE_7__ {unsigned char* value; size_t length; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 unsigned char* FUNC_2 (size_t) ;
 int FUNC_3 (unsigned char*,unsigned char*,size_t) ;

OM_uint32
FUNC_4(const gss_buffer_t VAR_3, gss_OID VAR_4,
    gss_buffer_t VAR_5)
{
 unsigned char *VAR_6 = VAR_3->value;
 size_t VAR_7 = VAR_3->length;
 size_t VAR_8, VAR_9;
 gss_OID_desc VAR_10;

 FUNC_0(VAR_5);




 if (VAR_7 == 0 || *VAR_6 != 0x60)
  return (VAR_1);
 VAR_6++;
 VAR_7--;





 if (VAR_7 == 0)
  return (VAR_1);
 if ((*VAR_6 & 0x80) == 0) {
  VAR_8 = *VAR_6;
  VAR_6++;
  VAR_7--;
 } else {
  VAR_9 = *VAR_6 & 0x7f;
  VAR_6++;
  VAR_7--;
  if (VAR_7 < VAR_9)
   return (VAR_1);
  VAR_8 = 0;
  while (VAR_9) {
   VAR_8 = (VAR_8 << 8) | *VAR_6;
   VAR_6++;
   VAR_7--;
   VAR_9--;
  }
 }
 if (VAR_8 != VAR_7)
  return (VAR_1);





 if (VAR_7 < 2 || *VAR_6 != 0x06)
  return (VAR_1);
 if ((VAR_6[1] & 0x80) || VAR_6[1] > (VAR_7 - 2))
  return (VAR_1);
 VAR_10.length = VAR_6[1];
 VAR_6 += 2;
 VAR_7 -= 2;
 VAR_10.elements = VAR_6;

 if (!FUNC_1(&VAR_10, VAR_4))
  return (VAR_2);

 VAR_6 += VAR_10.length;
 VAR_7 -= VAR_10.length;

 VAR_5->length = VAR_7;
 VAR_5->value = FUNC_2(VAR_7);
 if (!VAR_5->value)
  return (VAR_1);
 FUNC_3(VAR_5->value, VAR_6, VAR_7);

 return (VAR_0);
}
