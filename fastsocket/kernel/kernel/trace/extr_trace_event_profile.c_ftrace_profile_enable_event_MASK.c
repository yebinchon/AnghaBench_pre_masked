
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_event_call {int (* profile_enable ) (struct ftrace_event_call*) ;int profile_count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct ftrace_event_call*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_6(struct ftrace_event_call *VAR_5)
{
 char *VAR_6;
 int VAR_7 = -VAR_0;

 if (FUNC_2(&VAR_5->profile_count))
  return 0;

 if (!VAR_2) {
  VAR_6 = (char *)FUNC_0(VAR_1);
  if (!VAR_6)
   goto fail_buf;

  FUNC_4(VAR_3, VAR_6);

  VAR_6 = (char *)FUNC_0(VAR_1);
  if (!VAR_6)
   goto fail_buf_nmi;

  FUNC_4(VAR_4, VAR_6);
 }

 VAR_7 = VAR_5->profile_enable(VAR_5);
 if (!VAR_7) {
  VAR_2++;
  return 0;
 }

fail_buf_nmi:
 if (!VAR_2) {
  FUNC_3(VAR_4);
  FUNC_3(VAR_3);
  VAR_4 = ((void*)0);
  VAR_3 = ((void*)0);
 }
fail_buf:
 FUNC_1(&VAR_5->profile_count);

 return VAR_7;
}
