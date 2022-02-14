
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int datasize; int data_buffer; int dmamap; int dmatag; int command_buffer; } ;
typedef TYPE_1__ ips_ioctl_t ;
typedef int ips_generic_cmd ;
struct TYPE_6__ {int callback; int command_buffer; TYPE_1__* arg; } ;
typedef TYPE_2__ ips_command_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(ips_command_t *VAR_2)
{
 ips_ioctl_t *VAR_3 = VAR_2->arg;
 FUNC_1(VAR_2->command_buffer, VAR_3->command_buffer,
  sizeof(ips_generic_cmd));
 VAR_2->callback = VAR_1;
 FUNC_0(VAR_3->dmatag, VAR_3->dmamap,
   VAR_3->data_buffer,VAR_3->datasize,
   VAR_0, VAR_2, 0);
 return 0;
}
