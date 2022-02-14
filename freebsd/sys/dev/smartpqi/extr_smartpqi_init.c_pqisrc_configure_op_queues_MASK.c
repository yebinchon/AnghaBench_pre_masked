
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ max_outstanding_io; scalar_t__ max_io_for_scsi_ml; } ;
typedef TYPE_1__ pqisrc_softstate_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(pqisrc_softstate_t *VAR_2)
{
 int VAR_3 = VAR_1;



 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3) {
  FUNC_0("Failed to send report pqi dev capability request : %d\n",
    VAR_3);
  goto err_out;
 }


 VAR_2->max_io_for_scsi_ml = VAR_2->max_outstanding_io - VAR_0;


 FUNC_2(VAR_2);

 FUNC_1("OUT\n");
 return VAR_3;

err_out:
 FUNC_1("OUT failed\n");
 return VAR_3;
}
