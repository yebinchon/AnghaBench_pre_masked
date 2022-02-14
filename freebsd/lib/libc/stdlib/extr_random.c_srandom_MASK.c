
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 int * VAR_6 ;
 int * VAR_7 ;

void
FUNC_2(unsigned int VAR_8)
{
 int VAR_9, VAR_10;

 VAR_7[0] = (uint32_t)VAR_8;
 if (VAR_5 == VAR_1)
  VAR_10 = VAR_0;
 else {
  for (VAR_9 = 1; VAR_9 < VAR_3; VAR_9++)
   VAR_7[VAR_9] = FUNC_0(VAR_7[VAR_9 - 1]);
  VAR_2 = &VAR_7[VAR_4];
  VAR_6 = &VAR_7[0];
  VAR_10 = 10 * VAR_3;
 }
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  (void)FUNC_1();
}
