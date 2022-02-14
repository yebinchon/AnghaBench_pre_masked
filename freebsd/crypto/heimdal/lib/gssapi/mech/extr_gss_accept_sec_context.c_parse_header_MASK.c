
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* gss_buffer_t ;
typedef TYPE_2__* gss_OID ;
struct TYPE_6__ {unsigned char length; unsigned char* elements; } ;
struct TYPE_5__ {unsigned char* value; size_t length; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static OM_uint32
FUNC_0(const gss_buffer_t VAR_2, gss_OID VAR_3)
{
 unsigned char *VAR_4 = VAR_2->value;
 size_t VAR_5 = VAR_2->length;
 size_t VAR_6, VAR_7;





 if (VAR_5 == 0)
  return (VAR_1);

 VAR_4++;
 VAR_5--;





 if (VAR_5 == 0)
  return (VAR_1);
 if ((*VAR_4 & 0x80) == 0) {
  VAR_6 = *VAR_4;
  VAR_4++;
  VAR_5--;
 } else {
  VAR_7 = *VAR_4 & 0x7f;
  VAR_4++;
  VAR_5--;
  if (VAR_5 < VAR_7)
      return (VAR_1);
  VAR_6 = 0;
  while (VAR_7) {
      VAR_6 = (VAR_6 << 8) | *VAR_4;
      VAR_4++;
      VAR_5--;
      VAR_7--;
  }
 }
 if (VAR_6 != VAR_5)
  return (VAR_1);





 if (VAR_5 < 2 || *VAR_4 != 0x06)
  return (VAR_1);
 if ((VAR_4[1] & 0x80) || VAR_4[1] > (VAR_5 - 2))
  return (VAR_1);
 VAR_3->length = VAR_4[1];
 VAR_4 += 2;
 VAR_5 -= 2;
 VAR_3->elements = VAR_4;

 return VAR_0;
}
