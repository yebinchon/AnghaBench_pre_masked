
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;


 int FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;

void
FUNC_3 (void)
{

  FUNC_2 (FUNC_1 ("remotedevice", VAR_1,
      VAR_6, (char *) &VAR_5.device,
      "Set device for remote serial I/O.\nThis device is used as the serial port when debugging using remote\ntargets.", &VAR_2),


       &VAR_3);

  FUNC_0 ("remote <command>", VAR_0, VAR_4,
    "Send a command to the remote monitor.");

}
