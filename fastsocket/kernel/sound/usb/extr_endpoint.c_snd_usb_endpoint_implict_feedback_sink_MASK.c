
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usb_endpoint {scalar_t__ type; int pipe; TYPE_1__* sync_master; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct snd_usb_endpoint *VAR_1)
{
 return VAR_1->sync_master &&
  VAR_1->sync_master->type == VAR_0 &&
  VAR_1->type == VAR_0 &&
  FUNC_0(VAR_1->pipe);
}
