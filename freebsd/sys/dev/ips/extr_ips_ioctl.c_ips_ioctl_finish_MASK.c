
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int value; } ;
struct TYPE_10__ {int readwrite; TYPE_1__ status; int dmamap; int dmatag; } ;
typedef TYPE_3__ ips_ioctl_t ;
struct TYPE_9__ {int value; } ;
struct TYPE_11__ {TYPE_6__* sc; TYPE_2__ status; int command_dmamap; TYPE_3__* arg; } ;
typedef TYPE_4__ ips_command_t ;
struct TYPE_12__ {int command_dmatag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_6__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(ips_command_t *VAR_4)
{
 ips_ioctl_t *VAR_5 = VAR_4->arg;
 if(VAR_5->readwrite & VAR_2){
  FUNC_0(VAR_5->dmatag, VAR_5->dmamap,
    VAR_0);
 } else if(VAR_5->readwrite & VAR_3){
  FUNC_0(VAR_5->dmatag, VAR_5->dmamap,
    VAR_1);
 }
 FUNC_0(VAR_4->sc->command_dmatag, VAR_4->command_dmamap,
   VAR_1);
 FUNC_1(VAR_5->dmatag, VAR_5->dmamap);
 VAR_5->status.value = VAR_4->status.value;
 FUNC_2(VAR_4->sc, VAR_4);
}
