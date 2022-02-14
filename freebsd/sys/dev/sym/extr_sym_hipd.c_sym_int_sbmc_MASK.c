
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef TYPE_1__* hcb_p ;
struct TYPE_4__ {int scsi_mode; int path; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5 (hcb_p VAR_2)
{
 u_char VAR_3 = FUNC_0 (VAR_1) & VAR_0;




 FUNC_4(VAR_2->path);
 FUNC_1("SCSI BUS mode change from %s to %s.\n",
  FUNC_3(VAR_2->scsi_mode), FUNC_3(VAR_3));





 FUNC_2 (VAR_2, 2);
}
