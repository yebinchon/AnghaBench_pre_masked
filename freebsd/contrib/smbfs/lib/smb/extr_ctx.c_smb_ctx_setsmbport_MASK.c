
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_ctx {int ct_smbtcpport; TYPE_1__* ct_nb; } ;
struct TYPE_2__ {int nb_smbtcpport; } ;


 int VAR_0 ;

int
FUNC_0(struct smb_ctx *VAR_1, int VAR_2)
{
 if (VAR_2 < 1 || VAR_2 > 0xffff)
  return VAR_0;
 VAR_1->ct_smbtcpport = VAR_2;
 VAR_1->ct_nb->nb_smbtcpport = VAR_2;
 return 0;
}
