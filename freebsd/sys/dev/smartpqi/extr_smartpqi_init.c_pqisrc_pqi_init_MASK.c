
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int ctrl_in_pqi_mode; scalar_t__ intr_type; int ctrl_online; scalar_t__ max_outstanding_io; int taglist; } ;
typedef TYPE_1__ pqisrc_softstate_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int *) ;
 int FUNC_14 (TYPE_1__*,scalar_t__) ;
 int FUNC_15 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_16 (TYPE_1__*) ;

int FUNC_17(pqisrc_softstate_t *VAR_5)
{
 int VAR_6 = VAR_4;

 FUNC_1("IN\n");


 VAR_6 = FUNC_7(VAR_5);
 if(VAR_6) {
  FUNC_0("failed to switch to pqi\n");
                goto err_out;
 }

 FUNC_2(VAR_5, VAR_0);
 VAR_5->ctrl_in_pqi_mode = 1;


 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6) {
  FUNC_0("Failed to get processor config from OS %d\n",
   VAR_6);
  goto err_out;
 }

 VAR_5->intr_type = VAR_2;


 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6) {
  FUNC_0("Failed to get interrupt config from OS %d\n",
   VAR_6);
  goto err_out;
 }




 if (VAR_1 == VAR_5->intr_type) {
  FUNC_8(VAR_5, 1);
  FUNC_16(VAR_5);
 }


 VAR_6 = FUNC_10(VAR_5);
 if(VAR_6) {
                FUNC_0("Failed to configure admin queue\n");
                goto err_admin_queue;
     }





 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6 == VAR_3) {
                FUNC_0("Failed to allocate rcb \n");
                goto err_rcb;
     }


 VAR_6 = FUNC_15(VAR_5,&VAR_5->taglist,
    VAR_5->max_outstanding_io);
 if (VAR_6) {
  FUNC_0("Failed to allocate memory for request id q : %d\n",
   VAR_6);
  goto err_taglist;
 }

 VAR_6 = FUNC_9(VAR_5);
 if (VAR_6) {
   FUNC_0("Failed to configure op queue\n");
   goto err_config_opq;
 }


 VAR_6 = FUNC_11(VAR_5);
 if(VAR_6) {
                FUNC_0("Failed to create op queue\n");
                VAR_6 = VAR_3;
                goto err_create_opq;
        }

 VAR_5->ctrl_online = 1;

 FUNC_1("OUT\n");
 return VAR_6;

err_create_opq:
err_config_opq:
 FUNC_13(VAR_5,&VAR_5->taglist);
err_taglist:
 FUNC_14(VAR_5, VAR_5->max_outstanding_io + 1);
err_rcb:
 FUNC_12(VAR_5);
err_admin_queue:
 FUNC_3(VAR_5);
err_out:
 FUNC_1("OUT failed\n");
 return VAR_3;
}
