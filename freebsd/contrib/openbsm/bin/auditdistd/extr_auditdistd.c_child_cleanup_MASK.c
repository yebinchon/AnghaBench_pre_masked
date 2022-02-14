
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adist_host {scalar_t__ adh_role; scalar_t__ adh_worker_pid; int * adh_conn; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct adist_host *VAR_1)
{

 if (VAR_1->adh_conn != ((void*)0)) {
  FUNC_0(VAR_1->adh_role == VAR_0);
  FUNC_1(VAR_1->adh_conn);
  VAR_1->adh_conn = ((void*)0);
 }
 VAR_1->adh_worker_pid = 0;
}
