
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int encod; } ;
struct TYPE_6__ {TYPE_1__ md2; } ;
struct TYPE_7__ {TYPE_2__ opt; int MD2; } ;
typedef TYPE_3__ ct_chan_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char) ;

void FUNC_1 (ct_chan_t *VAR_2, int VAR_3)
{
 VAR_2->opt.md2.encod = VAR_3 ? VAR_1 : VAR_0;
 FUNC_0 (VAR_2->MD2, *(unsigned char*)&VAR_2->opt.md2);
}
