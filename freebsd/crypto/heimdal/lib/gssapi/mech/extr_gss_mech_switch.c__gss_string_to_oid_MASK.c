
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gss_OID ;
struct TYPE_3__ {size_t length; char* elements; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (size_t) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int
FUNC_2(const char* VAR_2, gss_OID VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 size_t VAR_7;
 const char *VAR_8, *VAR_9;
 char *VAR_10;

 VAR_3->length = 0;
 VAR_3->elements = ((void*)0);





 VAR_4 = 0;
 for (VAR_8 = VAR_2; VAR_8; VAR_8 = VAR_9) {
  VAR_9 = FUNC_1(VAR_8, '.');
  if (VAR_9) VAR_9 = VAR_9 + 1;
  VAR_4++;
 }





 if (VAR_4 < 2)
  return (VAR_0);






 VAR_10 = 0;
 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  VAR_7 = 0;
  for (VAR_8 = VAR_2, VAR_6 = 0; VAR_8; VAR_8 = VAR_9, VAR_6++) {
   unsigned int VAR_11 = 0;




   VAR_9 = FUNC_1(VAR_8, '.');
   if (VAR_9) VAR_9 = VAR_9 + 1;





   while (*VAR_8 && *VAR_8 != '.') {
    VAR_11 = 10 * VAR_11 + (*VAR_8 - '0');
    VAR_8++;
   }
   if (VAR_6 == 0) {
    if (VAR_10)
     *VAR_10 = VAR_11 * 40;
   } else if (VAR_6 == 1) {
    if (VAR_10) {
     *VAR_10 += VAR_11;
     VAR_10++;
    }
    VAR_7++;
   } else if (VAR_6 >= 2) {



    unsigned int VAR_12;
    unsigned int VAR_13;

    VAR_13 = 0;
    for (VAR_12 = VAR_11; VAR_12; VAR_12 >>= 7)
     VAR_13++;
    if (VAR_13 == 0) VAR_13 = 1;
    while (VAR_13) {
     if (VAR_10) {
      int VAR_14 = 7*(VAR_13-1);

      *VAR_10 = (VAR_11 >> VAR_14) & 0x7f;
      if (VAR_13 != 1)
       *VAR_10 |= 0x80;
      VAR_10++;
     }
     VAR_7++;
     VAR_13--;
    }
   }
  }
  if (!VAR_10) {
   VAR_10 = FUNC_0(VAR_7);
   if (!VAR_10)
    return (VAR_1);
   VAR_3->length = VAR_7;
   VAR_3->elements = VAR_10;
  }
 }

 return (0);
}
