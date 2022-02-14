
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int ,int,int,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 VAR_2 = FUNC_3(&VAR_1, FUNC_2(), -1, -1, 0);

 if (VAR_2 < 0 && VAR_3 == VAR_0)
  FUNC_1("No CONFIG_PERF_EVENTS=y kernel support configured?\n");
 else
  FUNC_0(VAR_2 < 0);
}
