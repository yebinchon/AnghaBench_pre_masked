
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* gss_buffer_t ;
typedef TYPE_2__* gss_OID ;
struct TYPE_8__ {int length; unsigned char* elements; } ;
struct TYPE_7__ {int length; unsigned char* value; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 unsigned char* FUNC_1 (size_t) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;

OM_uint32
FUNC_3(const gss_buffer_t VAR_2, gss_OID VAR_3,
    gss_buffer_t VAR_4)
{
 unsigned char *VAR_5;
 size_t VAR_6, VAR_7;
 size_t VAR_8, VAR_9;
 int VAR_10;

 FUNC_0(VAR_4);





 VAR_5 = ((void*)0);
 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  VAR_6 = 0;




  if (VAR_5)
   *VAR_5++ = 0x60;
  VAR_6++;






  if (VAR_3->length > 127)
   return (VAR_1);

  VAR_7 = 2 + VAR_3->length + VAR_2->length;




  if (VAR_7 < 128) {
   if (VAR_5)
    *VAR_5++ = VAR_7;
   VAR_6++;
  } else {
   VAR_9 = 1;
   if (VAR_7 >= 0x100)
    VAR_9++;
   if (VAR_7 >= 0x10000)
    VAR_9++;
   if (VAR_7 >= 0x1000000)
    VAR_9++;
   if (VAR_5)
    *VAR_5++ = VAR_9 | 0x80;
   VAR_6++;
   VAR_8 = VAR_7 << 8*(4 - VAR_9);
   while (VAR_9) {
    if (VAR_5)
     *VAR_5++ = (VAR_8 >> 24);
    VAR_8 <<= 8;
    VAR_6++;
    VAR_9--;
   }
  }





  if (VAR_5)
   *VAR_5++ = 0x06;
  VAR_6++;
  if (VAR_5)
   *VAR_5++ = VAR_3->length;
  VAR_6++;
  if (VAR_5) {
   FUNC_2(VAR_5, VAR_3->elements, VAR_3->length);
   VAR_5 += VAR_3->length;
  }
  VAR_6 += VAR_3->length;

  if (VAR_5) {
   FUNC_2(VAR_5, VAR_2->value, VAR_2->length);
   VAR_5 += VAR_2->length;
  }
  VAR_6 += VAR_2->length;

  if (VAR_10 == 0) {
   VAR_4->length = VAR_6;
   VAR_4->value = FUNC_1(VAR_6);
   if (!VAR_4->value)
    return (VAR_1);
   VAR_5 = VAR_4->value;
  }
 }

 return (VAR_0);
}
