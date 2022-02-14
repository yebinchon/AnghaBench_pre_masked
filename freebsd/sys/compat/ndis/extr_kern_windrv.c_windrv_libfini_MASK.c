
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpu_cc_ent {int ctx; } ;
struct drvdb_ent {int ctx; } ;
struct TYPE_4__ {int dro_drivername; } ;
struct TYPE_3__ {int dro_drivername; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 struct fpu_cc_ent* FUNC_2 (int *) ;
 int FUNC_3 (struct fpu_cc_ent*,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 struct fpu_cc_ent* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct fpu_cc_ent*,int ) ;
 int VAR_10 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_11 ;
 int FUNC_12 (int *,int ,int *,int *) ;
 int VAR_12 ;

int
FUNC_13(void)
{
 struct drvdb_ent *VAR_13;

 struct fpu_cc_ent *VAR_14;


 FUNC_10(&VAR_2);
 while(FUNC_5(&VAR_1) != ((void*)0)) {
  VAR_13 = FUNC_5(&VAR_1);
  FUNC_6(&VAR_1, VAR_10);
  FUNC_8(VAR_13, VAR_0);
 }
 FUNC_11(&VAR_2);

 FUNC_4(&VAR_5.dro_drivername);
 FUNC_4(&VAR_4.dro_drivername);

 FUNC_9(&VAR_2);






 while ((VAR_14 = FUNC_2(&VAR_8)) != ((void*)0)) {
  FUNC_3(VAR_14, VAR_3);
  FUNC_7(VAR_14->ctx);
  FUNC_8(VAR_14, VAR_0);
 }
 FUNC_9(&VAR_9);

 VAR_14 = FUNC_2(&VAR_6);
 FUNC_1(VAR_14 == ((void*)0), ("busy fpu context list is not empty"));
 FUNC_9(&VAR_7);

 return (0);
}
