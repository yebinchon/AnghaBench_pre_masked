
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_cache {int len; scalar_t__ value; } ;
typedef int option_stored ;
struct TYPE_2__ {char* format; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (unsigned char*,scalar_t__,unsigned char) ;
 int FUNC_1 (int*,int ,int) ;

unsigned
FUNC_2(unsigned char *VAR_1, int VAR_2, struct tree_cache **VAR_3,
    unsigned char *VAR_4, int VAR_5, int VAR_6,
    int VAR_7, int VAR_8)
{
 int VAR_9 = 0, VAR_10[256], VAR_11, VAR_12, VAR_13;


 FUNC_1(VAR_10, 0, sizeof(VAR_10));





 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {

  int VAR_14 = VAR_4[VAR_11];
  int VAR_15;





  int VAR_16;


  if (!VAR_3[VAR_14]) {
   continue;
  }





  if (VAR_10[VAR_14])
   continue;
  VAR_10[VAR_14] = 1;


  VAR_16 = VAR_3[VAR_14]->len;


  if (VAR_8 && VAR_0[VAR_14].format[0] == 't') {
   VAR_16++;
   VAR_13 = 1;
  } else
   VAR_13 = 0;
  VAR_12 = 0;

  VAR_15 = VAR_9;
  while (VAR_16) {
   unsigned char VAR_17 = VAR_16 > 255 ? 255 : VAR_16;






   if (VAR_9 < VAR_6 &&
       VAR_9 + VAR_17 > VAR_6)
    VAR_17 = VAR_6 - VAR_9;
   else if (VAR_9 < VAR_7 &&
       VAR_9 + VAR_17 > VAR_7)
    VAR_17 = VAR_7 - VAR_9;





   if (VAR_9 + 2 + VAR_17 > VAR_2) {
    VAR_9 = VAR_15;
    break;
   }


   VAR_1[VAR_9] = VAR_14;
   VAR_1[VAR_9 + 1] = VAR_17;
   if (VAR_13 && VAR_17 == VAR_16) {
    FUNC_0(VAR_1 + VAR_9 + 2,
        VAR_3[VAR_14]->value + VAR_12, VAR_17 - 1);
    VAR_1[VAR_9 + 2 + VAR_17 - 1] = 0;
   } else
    FUNC_0(VAR_1 + VAR_9 + 2,
        VAR_3[VAR_14]->value + VAR_12, VAR_17);
   VAR_16 -= VAR_17;
   VAR_12 += VAR_17;
   VAR_9 += 2 + VAR_17;
  }
 }
 return (VAR_9);
}
