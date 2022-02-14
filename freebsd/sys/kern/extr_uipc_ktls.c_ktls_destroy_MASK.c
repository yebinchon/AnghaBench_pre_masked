
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rm_priotracker {int dummy; } ;
struct ktls_session {TYPE_1__* be; } ;
struct TYPE_2__ {int use_count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ktls_session*) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct rm_priotracker*) ;
 int FUNC_2 (int *,struct rm_priotracker*) ;
 int FUNC_3 (int ,struct ktls_session*) ;

void
FUNC_4(struct ktls_session *VAR_3)
{
 struct rm_priotracker VAR_4;

 FUNC_0(VAR_3);
 if (VAR_3->be != ((void*)0) && VAR_0) {
  FUNC_1(&VAR_1, &VAR_4);
  VAR_3->be->use_count--;
  FUNC_2(&VAR_1, &VAR_4);
 }
 FUNC_3(VAR_2, VAR_3);
}
