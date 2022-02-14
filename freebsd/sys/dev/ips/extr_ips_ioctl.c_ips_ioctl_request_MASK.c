
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_7__ {int command_buffer; } ;
typedef TYPE_1__ ips_user_request ;
typedef int ips_softc_t ;
struct TYPE_8__ {int readwrite; struct TYPE_8__* command_buffer; int datasize; } ;
typedef TYPE_2__ ips_ioctl_t ;
typedef int ips_generic_cmd ;
typedef int int32_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_1__*) ;
 void* FUNC_3 (int,int ,int ) ;

int FUNC_4(ips_softc_t *VAR_6, u_long VAR_7, caddr_t VAR_8, int32_t VAR_9){
 int VAR_10 = VAR_0;
 ips_ioctl_t *VAR_11;
 ips_user_request *VAR_12;
 switch(VAR_7){
 case 128:
  VAR_12 = (ips_user_request *)VAR_8;
  VAR_11 = FUNC_3(sizeof(ips_ioctl_t), VAR_4, VAR_5);
  VAR_11->command_buffer = FUNC_3(sizeof(ips_generic_cmd),
      VAR_4, VAR_5);
  if(FUNC_0(VAR_12->command_buffer,
      VAR_11->command_buffer, sizeof(ips_generic_cmd))){
   FUNC_1(VAR_11->command_buffer, VAR_4);
   FUNC_1(VAR_11, VAR_4);
   break;
  }
  VAR_11->readwrite = VAR_2 | VAR_3;
  VAR_11->datasize = VAR_1;
  VAR_10 = FUNC_2(VAR_6, VAR_11, VAR_12);
  FUNC_1(VAR_11->command_buffer, VAR_4);
  FUNC_1(VAR_11, VAR_4);
  break;
 }

 return VAR_10;
}
