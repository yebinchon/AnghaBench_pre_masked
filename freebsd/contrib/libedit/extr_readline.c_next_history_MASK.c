
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HistEvent ;
typedef int HIST_ENTRY ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

HIST_ENTRY *
FUNC_2(void)
{
 HistEvent VAR_4;

 if (VAR_3 >= VAR_2)
  return ((void*)0);

 if (FUNC_1(VAR_1, &VAR_4, VAR_0) != 0)
  return ((void*)0);

 VAR_3++;
 return FUNC_0();
}
