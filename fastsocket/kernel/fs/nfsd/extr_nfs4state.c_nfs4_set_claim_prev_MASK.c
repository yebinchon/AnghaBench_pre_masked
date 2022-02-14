
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfsd4_open {TYPE_2__* op_stateowner; } ;
struct TYPE_4__ {int so_confirmed; TYPE_1__* so_client; } ;
struct TYPE_3__ {int cl_firststate; } ;



__attribute__((used)) static void
FUNC_0(struct nfsd4_open *VAR_0)
{
 VAR_0->op_stateowner->so_confirmed = 1;
 VAR_0->op_stateowner->so_client->cl_firststate = 1;
}
