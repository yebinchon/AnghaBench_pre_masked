
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_entry {int rt_state; int rt_ifp; int rt_spares; int rt_gate; int rt_mask; int rt_dst; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,char const*,char*) ;
 int FUNC_2 (char,int *) ;
 int * VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 char* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;

void
FUNC_7(const char * VAR_2, struct rt_entry *VAR_3)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_3();
 (void)FUNC_1(VAR_0, "%s    %-35s ",
        VAR_2,
        FUNC_5(VAR_3->rt_dst, VAR_3->rt_mask, VAR_3->rt_gate));
 FUNC_4(VAR_3->rt_spares, 0,0,0,0,FUNC_0(VAR_3->rt_state,VAR_3->rt_ifp));
 FUNC_6(VAR_1, VAR_3->rt_state, 0);
 (void)FUNC_2('\n',VAR_0);
}
