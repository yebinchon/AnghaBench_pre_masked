
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static inline int FUNC_4(int *VAR_0)
{
 int VAR_1;

 if (FUNC_2())
  VAR_1 = 3;
 else if (FUNC_1())
  VAR_1 = 2;
 else if (FUNC_3())
  VAR_1 = 1;
 else
  VAR_1 = 0;

 if (VAR_0[VAR_1])
  return -1;

 VAR_0[VAR_1]++;
 FUNC_0();

 return VAR_1;
}
