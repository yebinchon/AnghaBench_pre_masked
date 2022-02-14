
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockf_entry {scalar_t__ lf_async_task; } ;
struct lockf {int dummy; } ;


 int FUNC_0 (struct lockf_entry*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct lockf_entry*) ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (struct lockf_entry*) ;

__attribute__((used)) static void
FUNC_4(struct lockf *VAR_3, struct lockf_entry *VAR_4)
{





 FUNC_0(VAR_4, VAR_0);




 if (VAR_4->lf_async_task) {
  FUNC_2(VAR_2, VAR_4->lf_async_task);
 } else {
  FUNC_3(VAR_4);
 }
}
