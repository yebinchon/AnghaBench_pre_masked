
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecore_atomic_t ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_4(ecore_atomic_t *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_2);
 for (;;) {
  if (FUNC_3(VAR_5 - VAR_3 < VAR_4))
   return VAR_0;

  VAR_6 = FUNC_0((VAR_2), VAR_5, VAR_5 - VAR_3);
  if (FUNC_2(VAR_6 == VAR_5))
   break;
  VAR_5 = VAR_6;
 }

 return VAR_1;
}
