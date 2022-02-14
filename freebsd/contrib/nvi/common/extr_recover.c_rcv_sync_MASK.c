
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_23__ {scalar_t__ (* sync ) (TYPE_6__*,int ) ;} ;
struct TYPE_22__ {int rcv_path; int rcv_mpath; TYPE_6__* db; } ;
struct TYPE_21__ {TYPE_1__* gp; TYPE_3__* ep; } ;
struct TYPE_20__ {int (* scr_busy ) (TYPE_2__*,char*,int ) ;} ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EXF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_4 (TYPE_2__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *,int) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*) ;
 int FUNC_9 (TYPE_2__*,int ,int *) ;
 int FUNC_10 (TYPE_2__*,int ,int ,char*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int,int ) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int,char*) ;
 int FUNC_15 (TYPE_2__*,char*,char*) ;
 scalar_t__ FUNC_16 (TYPE_6__*,int ) ;
 int FUNC_17 (TYPE_2__*,char*,int ) ;
 int FUNC_18 (TYPE_2__*,char*,int ) ;
 int FUNC_19 (char*) ;

int
FUNC_20(
 SCR *VAR_12,
 u_int VAR_13)
{
 EXF *VAR_14;
 int VAR_15, VAR_16;
 char *VAR_17, *VAR_18;


 VAR_14 = VAR_12->ep;
 if (VAR_14 == ((void*)0) || !FUNC_1(VAR_14, VAR_4))
  return (0);


 if (FUNC_1(VAR_14, VAR_2)) {
  if (VAR_14->db->sync(VAR_14->db, VAR_11)) {
   FUNC_0(VAR_14, VAR_4 | VAR_3);
   FUNC_10(VAR_12, VAR_5,
       VAR_14->rcv_path, "060|File backup failed: %s");
   return (1);
  }


  if (FUNC_3(VAR_9))
   FUNC_2(VAR_14, VAR_3);


  if (FUNC_3(VAR_7))
   FUNC_13(VAR_12, VAR_14->rcv_mpath);
 }
 VAR_16 = 0;
 if (FUNC_3(VAR_10)) {
  if (FUNC_11(VAR_12, VAR_6, 0))
   goto err;
  VAR_17 = FUNC_4(VAR_12, VAR_6);
  if ((VAR_18 = FUNC_8(VAR_17, "vi.XXXXXX")) == ((void*)0)) {
   FUNC_9(VAR_12, VAR_5, ((void*)0));
   goto err;
  }
  if ((VAR_15 = FUNC_15(VAR_12, VAR_18, VAR_17)) == -1) {
   FUNC_7(VAR_18);
   goto err;
  }
  VAR_12->gp->scr_busy(VAR_12,
      "061|Copying file for recovery...", VAR_1);
  if (FUNC_12(VAR_12, VAR_15, VAR_14->rcv_path) ||
      FUNC_5(VAR_15) || FUNC_14(VAR_12, 1, VAR_18)) {
   (void)FUNC_19(VAR_18);
   (void)FUNC_5(VAR_15);
   VAR_16 = 1;
  }
  FUNC_7(VAR_18);
  VAR_12->gp->scr_busy(VAR_12, ((void*)0), VAR_0);
 }
 if (0) {
err: VAR_16 = 1;
 }


 if (FUNC_3(VAR_8) && FUNC_6(VAR_12, ((void*)0), 1))
  VAR_16 = 1;

 return (VAR_16);
}
