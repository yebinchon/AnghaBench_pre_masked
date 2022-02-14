
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct cam_sim {int dummy; } ;
struct cam_path {int dummy; } ;
struct cam_devq {int dummy; } ;
typedef TYPE_1__* hcb_p ;
struct TYPE_7__ {struct cam_sim* sim; struct cam_path* path; int device; int mtx; int intr; int irq_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int,int *,int ,TYPE_1__*,int *) ;
 struct cam_sim* FUNC_3 (int ,int ,char*,TYPE_1__*,int ,int *,int,int ,struct cam_devq*) ;
 int FUNC_4 (struct cam_sim*,int ) ;
 int FUNC_5 (struct cam_sim*) ;
 struct cam_devq* FUNC_6 (int ) ;
 int FUNC_7 (struct cam_devq*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_12 (struct cam_sim*,int ,int ) ;
 scalar_t__ FUNC_13 (struct cam_path**,int *,int ,int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ,struct cam_sim*,struct cam_path*) ;

__attribute__((used)) static int FUNC_15(hcb_p VAR_15)
{
 struct cam_devq *VAR_16 = ((void*)0);
 struct cam_sim *VAR_17 = ((void*)0);
 struct cam_path *VAR_18 = ((void*)0);
 int VAR_19;




 VAR_19 = FUNC_2(VAR_15->device, VAR_15->irq_res,
   VAR_6 | VAR_7 | VAR_8,
   ((void*)0), VAR_13, VAR_15, &VAR_15->intr);
 if (VAR_19) {
  FUNC_9(VAR_15->device, "bus_setup_intr() failed: %d\n",
         VAR_19);
  goto fail;
 }




 VAR_16 = FUNC_6(VAR_9);
 if (!VAR_16)
  goto fail;




 VAR_17 = FUNC_3(VAR_11, VAR_14, "sym", VAR_15,
   FUNC_8(VAR_15->device),
   &VAR_15->mtx, 1, VAR_10, VAR_16);
 if (!VAR_17)
  goto fail;

 FUNC_0();

 if (FUNC_12(VAR_17, VAR_15->device, 0) != VAR_3)
  goto fail;
 VAR_15->sim = VAR_17;
 VAR_17 = ((void*)0);

 if (FUNC_13(&VAR_18, ((void*)0),
       FUNC_5(VAR_15->sim), VAR_4,
       VAR_1) != VAR_2) {
  goto fail;
 }
 VAR_15->path = VAR_18;




 if (FUNC_14(VAR_0, VAR_12, VAR_15->sim, VAR_18) !=
     VAR_2)
  goto fail;







 FUNC_11 (VAR_15, 0);

 FUNC_1();

 return 1;
fail:
 if (VAR_17)
  FUNC_4(VAR_17, VAR_5);
 if (VAR_16)
  FUNC_7(VAR_16);

 FUNC_1();

 FUNC_10(VAR_15);

 return 0;
}
