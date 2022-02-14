
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigev_node {scalar_t__ sn_id; int sn_value; int (* sn_func ) (int ,struct aiocb*) ;} ;
struct aiocb {int dummy; } ;
typedef int (* aio_func ) (int ,struct aiocb*) ;



__attribute__((used)) static void
FUNC_0(struct sigev_node *VAR_0)
{
 aio_func VAR_1 = VAR_0->sn_func;

 VAR_1(VAR_0->sn_value, (struct aiocb *)VAR_0->sn_id);
}
