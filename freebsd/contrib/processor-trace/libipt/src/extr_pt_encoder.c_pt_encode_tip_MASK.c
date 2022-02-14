
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int ipc; int ip; } ;
struct TYPE_4__ {TYPE_1__ ip; } ;
struct pt_packet {TYPE_2__ payload; int type; } ;
struct pt_encoder {int dummy; } ;
typedef enum pt_ip_compression { ____Placeholder_pt_ip_compression } pt_ip_compression ;


 int VAR_0 ;
 int FUNC_0 (struct pt_encoder*,struct pt_packet*) ;

int FUNC_1(struct pt_encoder *VAR_1, uint64_t VAR_2,
    enum pt_ip_compression VAR_3)
{
 struct pt_packet VAR_4;

 VAR_4.type = VAR_0;
 VAR_4.payload.ip.ip = VAR_2;
 VAR_4.payload.ip.ipc = VAR_3;

 return FUNC_0(VAR_1, &VAR_4);
}
