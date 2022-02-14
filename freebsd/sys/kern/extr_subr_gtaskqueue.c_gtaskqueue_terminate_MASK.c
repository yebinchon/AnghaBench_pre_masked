
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct gtaskqueue {scalar_t__ tq_tcount; scalar_t__ tq_callouts; } ;


 int FUNC_0 (struct gtaskqueue*,struct thread**,char*) ;
 int FUNC_1 (struct gtaskqueue*) ;

__attribute__((used)) static void
FUNC_2(struct thread **VAR_0, struct gtaskqueue *VAR_1)
{

 while (VAR_1->tq_tcount > 0 || VAR_1->tq_callouts > 0) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1, VAR_0, "gtq_destroy");
 }
}
