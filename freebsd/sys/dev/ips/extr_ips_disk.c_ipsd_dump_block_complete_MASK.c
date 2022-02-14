
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int value; } ;
struct TYPE_6__ {int data_dmamap; int data_dmatag; TYPE_1__ status; } ;
typedef TYPE_2__ ips_command_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(ips_command_t *VAR_1)
{

 if (FUNC_0(VAR_1))
  FUNC_3("ipsd_dump completion error= 0x%x\n",
      VAR_1->status.value);

 FUNC_1(VAR_1->data_dmatag, VAR_1->data_dmamap,
     VAR_0);
 FUNC_2(VAR_1->data_dmatag, VAR_1->data_dmamap);
}
