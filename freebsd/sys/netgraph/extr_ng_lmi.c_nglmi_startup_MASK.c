
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
struct TYPE_3__ {int local_seq; int node; int handle; scalar_t__ liv_per_full; scalar_t__ livs; scalar_t__ seq_retries; scalar_t__ remote_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,int ,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_1(sc_p VAR_2)
{
 VAR_2->remote_seq = 0;
 VAR_2->local_seq = 1;
 VAR_2->seq_retries = 0;
 VAR_2->livs = VAR_2->liv_per_full - 1;

 FUNC_0(&VAR_2->handle, VAR_2->node, ((void*)0), VAR_1, VAR_0, ((void*)0), 0);
}
