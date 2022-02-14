
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fbt_probe_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int *,int ,int *,int *,int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ,int ,int ,int,char*) ;
 int FUNC_4 (int,int ,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_19)
{

 VAR_9 = FUNC_3(&VAR_10, 0, VAR_6, VAR_2, 0600,
     "dtrace/fbt");


 if (VAR_18 == 0)
  VAR_18 = VAR_1;


 VAR_17 = VAR_18 - 1;


 VAR_16 =
     FUNC_4(VAR_18 * sizeof (fbt_probe_t *), VAR_3, VAR_4 | VAR_5);

 VAR_7 = VAR_11;
 FUNC_0(VAR_13);

 if (FUNC_1("fbt", &VAR_8, VAR_0,
     ((void*)0), &VAR_15, ((void*)0), &VAR_12) != 0)
  return;


 FUNC_2(VAR_14, ((void*)0));
}
