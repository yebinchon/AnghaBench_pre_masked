
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
typedef int node_p ;
typedef int hook_p ;
struct TYPE_4__ {int handle; int seqRetries; int remote_seq; int local_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__* const,int ) ;
 int FUNC_1 (TYPE_1__* const,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int *,int,void (*) (int ,int ,void*,int),void*,int ) ;

__attribute__((used)) static void
FUNC_3(node_p VAR_4, hook_p VAR_5, void *VAR_6, int VAR_7)
{
 const sc_p VAR_8 = VAR_6;

 FUNC_1(VAR_8, VAR_0, VAR_8->local_seq, VAR_8->remote_seq);
 if (VAR_8->seqRetries++ > 1)
  FUNC_0(VAR_8, VAR_2);
 FUNC_2(&VAR_8->handle, VAR_4, ((void*)0), (VAR_3 * VAR_1),
     &FUNC_3, (void *)VAR_8, 0);
}
