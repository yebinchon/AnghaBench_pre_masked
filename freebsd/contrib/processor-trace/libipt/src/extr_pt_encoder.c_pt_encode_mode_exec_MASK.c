
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int exec; } ;
struct TYPE_5__ {TYPE_1__ bits; int leaf; } ;
struct TYPE_6__ {TYPE_2__ mode; } ;
struct pt_packet {TYPE_3__ payload; int type; } ;
struct pt_encoder {int dummy; } ;
typedef enum pt_exec_mode { ____Placeholder_pt_exec_mode } pt_exec_mode ;


 int VAR_0 ;
 int FUNC_0 (struct pt_encoder*,struct pt_packet*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

int FUNC_2(struct pt_encoder *VAR_2, enum pt_exec_mode VAR_3)
{
 struct pt_packet VAR_4;

 VAR_4.type = VAR_0;
 VAR_4.payload.mode.leaf = VAR_1;
 VAR_4.payload.mode.bits.exec = FUNC_1(VAR_3);

 return FUNC_0(VAR_2, &VAR_4);
}
