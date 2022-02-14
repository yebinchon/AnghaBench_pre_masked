
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int,int ,int*) ;
 int * FUNC_2 (int,int ,int) ;
 int VAR_9 ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int ,int ,int ,int ,int ,int ,int ) ;

void
FUNC_9(void)
{
 u_long VAR_24;

 FUNC_5(&VAR_8, "allproc");
 FUNC_5(&VAR_23, "proctree");
 FUNC_3(&VAR_16, "p_peers", ((void*)0), VAR_0);
 FUNC_3(&VAR_22, "procid", ((void*)0), VAR_0);
 FUNC_0(&VAR_7);
 VAR_14 = FUNC_1(VAR_9 / 4, VAR_1, &VAR_12);
 VAR_13 = (VAR_12 + 1) / 64;
 if (VAR_13 > 0)
  VAR_13--;
 VAR_15 = FUNC_2(sizeof(*VAR_15) * (VAR_13 + 1),
     VAR_1, VAR_2 | VAR_3);
 for (VAR_24 = 0; VAR_24 < VAR_13 + 1; VAR_24++)
  FUNC_6(&VAR_15[VAR_24], "pidhash", VAR_4);
 VAR_11 = FUNC_1(VAR_9 / 4, VAR_1, &VAR_10);
 VAR_21 = FUNC_8("PROC", FUNC_4(),
     VAR_17, VAR_18, VAR_20, VAR_19,
     VAR_5, VAR_6);
 FUNC_7();
}
