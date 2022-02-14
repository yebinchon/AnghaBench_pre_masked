
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int * FUNC_1 (int,int,int ,int *,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(void)
{
 if (VAR_3 != ((void*)0))
  FUNC_2(VAR_3);

 if ((VAR_3 = FUNC_1(VAR_2 * 10,
     VAR_2 * 10, VAR_1, ((void*)0), VAR_4)) == ((void*)0))
  FUNC_0(VAR_0, "timer_start(%u): %m", VAR_2);
}
