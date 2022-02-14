
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct perf_session {int dummy; } ;


 struct thread* FUNC_0 (struct perf_session*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct thread*,char*) ;

__attribute__((used)) static struct thread *FUNC_3(struct perf_session *VAR_0)
{
 struct thread *VAR_1 = FUNC_0(VAR_0, 0);

 if (VAR_1 == ((void*)0) || FUNC_2(VAR_1, "swapper")) {
  FUNC_1("problem inserting idle task.\n");
  VAR_1 = ((void*)0);
 }

 return VAR_1;
}
