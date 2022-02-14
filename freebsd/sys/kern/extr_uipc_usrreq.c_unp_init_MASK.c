
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int FUNC_5 (int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (char*) ;
 int VAR_5 ;
 int * FUNC_9 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_12(void)
{





 VAR_14 = FUNC_9("unpcb", sizeof(struct unpcb), ((void*)0), ((void*)0),
     ((void*)0), ((void*)0), VAR_1, 0);
 if (VAR_14 == ((void*)0))
  FUNC_8("unp_init");
 FUNC_10(VAR_14, VAR_3);
 FUNC_11(VAR_14, "kern.ipc.maxsockets limit reached");
 FUNC_0(VAR_4, VAR_15,
     ((void*)0), VAR_0);
 FUNC_2(&VAR_8);
 FUNC_2(&VAR_12);
 FUNC_2(&VAR_13);
 FUNC_3(&VAR_7);
 FUNC_5(VAR_5, &VAR_10, 0, VAR_9, ((void*)0));
 FUNC_4(&VAR_6, 0, VAR_11, ((void*)0));
 FUNC_7();
 FUNC_6();
}
