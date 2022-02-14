
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct autofs_request {int ar_wildcards; int ar_done; int ar_in_progress; int ar_error; int ar_path; int ar_id; } ;
struct TYPE_2__ {int sc_lock; int sc_cv; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3, int VAR_4)
{
 struct autofs_request *VAR_5;

 VAR_5 = VAR_3;

 FUNC_2(&VAR_1->sc_lock);
 FUNC_0("request %d for %s timed out after %d seconds",
     VAR_5->ar_id, VAR_5->ar_path, VAR_2);



 VAR_5->ar_error = VAR_0;
 VAR_5->ar_wildcards = 1;
 VAR_5->ar_done = 1;
 VAR_5->ar_in_progress = 0;
 FUNC_1(&VAR_1->sc_cv);
 FUNC_3(&VAR_1->sc_lock);
}
