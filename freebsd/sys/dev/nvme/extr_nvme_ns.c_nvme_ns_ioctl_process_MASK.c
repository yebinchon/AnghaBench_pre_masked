
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct nvme_namespace {int cdev; } ;
typedef int caddr_t ;


 int FUNC_0 (int ,int ,int ,int,struct thread*) ;

int
FUNC_1(struct nvme_namespace *VAR_0, u_long VAR_1, caddr_t VAR_2,
    int VAR_3, struct thread *VAR_4)
{
 return (FUNC_0(VAR_0->cdev, VAR_1, VAR_2, VAR_3, VAR_4));
}
