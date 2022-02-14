
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_set {int qs_err_task; int qs_err_taskq; } ;
struct nicvf {struct queue_set* qs; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicvf*,int ,int ) ;
 int FUNC_1 (struct nicvf*,int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct nicvf *VAR_2 = (struct nicvf *)VAR_1;
 struct queue_set *VAR_3 = VAR_2->qs;


 FUNC_1(VAR_2, VAR_0, 0);
 FUNC_2(VAR_3->qs_err_taskq, &VAR_3->qs_err_task);
 FUNC_0(VAR_2, VAR_0, 0);

}
