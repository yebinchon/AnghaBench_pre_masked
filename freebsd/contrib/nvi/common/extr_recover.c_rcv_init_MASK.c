
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_19__ {scalar_t__ (* sync ) (TYPE_6__*,int ) ;} ;
struct TYPE_18__ {int rcv_path; TYPE_6__* db; int * rcv_mpath; } ;
struct TYPE_17__ {TYPE_1__* gp; TYPE_3__* ep; } ;
struct TYPE_16__ {int (* scr_busy ) (TYPE_2__*,char*,int ) ;} ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EXF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int ,char*) ;
 int FUNC_6 (TYPE_2__*,int ,int ,char*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ,int *) ;
 int FUNC_8 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_9 (TYPE_6__*,int ) ;
 int FUNC_10 (TYPE_2__*,char*,int ) ;
 int FUNC_11 (TYPE_2__*,char*,int ) ;

int
FUNC_12(SCR *VAR_9)
{
 EXF *VAR_10;
 recno_t VAR_11;

 VAR_10 = VAR_9->ep;


 FUNC_0(VAR_10, VAR_2);


 if (!FUNC_1(VAR_10, VAR_3))
  return (0);


 FUNC_0(VAR_10, VAR_3);


 if (VAR_10->rcv_mpath == ((void*)0)) {

  if (FUNC_7(VAR_9, 0, ((void*)0)))
   goto err;


  if (FUNC_4(VAR_9, &VAR_11))
   goto err;


  VAR_9->gp->scr_busy(VAR_9,
      "057|Copying file for recovery...", VAR_1);
  if (VAR_10->db->sync(VAR_10->db, VAR_6)) {
   FUNC_6(VAR_9, VAR_5, VAR_10->rcv_path,
       "058|Preservation failed: %s");
   VAR_9->gp->scr_busy(VAR_9, ((void*)0), VAR_0);
   goto err;
  }
  VAR_9->gp->scr_busy(VAR_9, ((void*)0), VAR_0);
 }


 (void)FUNC_3(VAR_10->rcv_path, VAR_7 | VAR_8);


 FUNC_2(VAR_10, VAR_3);
 return (0);

err: FUNC_5(VAR_9, VAR_4,
     "059|Modifications not recoverable if the session fails");
 return (1);
}
