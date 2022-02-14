
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int *,int) ;

__attribute__((used)) static int
FUNC_1(unsigned VAR_2, uint64_t *VAR_3)
{
 uint64_t VAR_4, VAR_5;
 uint64_t VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = 1;
 VAR_7 = 3;
 VAR_5 = 0;

 for (;;) {
  VAR_4 = (VAR_5 * VAR_7) + (VAR_6 * VAR_1);

  VAR_8 = FUNC_0(VAR_2, ((void*)0), VAR_4);
  if (VAR_8 != 0) {
   if (VAR_6 == 1 && VAR_7 == 1) {
    *VAR_3 = VAR_5 + VAR_1;
    return (0);
   }
   if (VAR_6 > 1)
    VAR_6 /= 2;
   if (VAR_7 > 1)
    VAR_7--;
   continue;
  }
  if (VAR_5 == VAR_4) {
   VAR_6 = 1;
   continue;
  }
  VAR_5 = VAR_4;
  VAR_6++;
 }

 return (VAR_0);
}
