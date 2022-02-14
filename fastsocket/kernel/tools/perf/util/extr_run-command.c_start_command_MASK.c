
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int in; int out; int err; scalar_t__ pid; int * argv; scalar_t__ perf_cmd; int (* preexec_cb ) () ;scalar_t__* env; scalar_t__ dir; scalar_t__ stdout_to_stderr; scalar_t__ no_stdout; scalar_t__ no_stderr; scalar_t__ no_stdin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char*,int ,scalar_t__,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char* const*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (int*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (scalar_t__,char) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 (scalar_t__) ;

int FUNC_17(struct child_process *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 int VAR_9[2], VAR_10[2], VAR_11[2];






 VAR_6 = !VAR_5->no_stdin && VAR_5->in < 0;
 if (VAR_6) {
  if (FUNC_11(VAR_9) < 0) {
   if (VAR_5->out > 0)
    FUNC_1(VAR_5->out);
   return -VAR_3;
  }
  VAR_5->in = VAR_9[1];
 }

 VAR_7 = !VAR_5->no_stdout
  && !VAR_5->stdout_to_stderr
  && VAR_5->out < 0;
 if (VAR_7) {
  if (FUNC_11(VAR_10) < 0) {
   if (VAR_6)
    FUNC_2(VAR_9);
   else if (VAR_5->in)
    FUNC_1(VAR_5->in);
   return -VAR_3;
  }
  VAR_5->out = VAR_10[0];
 }

 VAR_8 = !VAR_5->no_stderr && VAR_5->err < 0;
 if (VAR_8) {
  if (FUNC_11(VAR_11) < 0) {
   if (VAR_6)
    FUNC_2(VAR_9);
   else if (VAR_5->in)
    FUNC_1(VAR_5->in);
   if (VAR_7)
    FUNC_2(VAR_10);
   else if (VAR_5->out)
    FUNC_1(VAR_5->out);
   return -VAR_3;
  }
  VAR_5->err = VAR_11[0];
 }

 FUNC_9(((void*)0));
 VAR_5->pid = FUNC_10();
 if (!VAR_5->pid) {
  if (VAR_5->no_stdin)
   FUNC_5(0);
  else if (VAR_6) {
   FUNC_4(VAR_9[0], 0);
   FUNC_2(VAR_9);
  } else if (VAR_5->in) {
   FUNC_4(VAR_5->in, 0);
   FUNC_1(VAR_5->in);
  }

  if (VAR_5->no_stderr)
   FUNC_5(2);
  else if (VAR_8) {
   FUNC_4(VAR_11[1], 2);
   FUNC_2(VAR_11);
  }

  if (VAR_5->no_stdout)
   FUNC_5(1);
  else if (VAR_5->stdout_to_stderr)
   FUNC_4(2, 1);
  else if (VAR_7) {
   FUNC_4(VAR_10[1], 1);
   FUNC_2(VAR_10);
  } else if (VAR_5->out > 1) {
   FUNC_4(VAR_5->out, 1);
   FUNC_1(VAR_5->out);
  }

  if (VAR_5->dir && FUNC_0(VAR_5->dir))
   FUNC_3("exec %s: cd to %s failed (%s)", VAR_5->argv[0],
       VAR_5->dir, FUNC_14(VAR_4));
  if (VAR_5->env) {
   for (; *VAR_5->env; VAR_5->env++) {
    if (FUNC_13(*VAR_5->env, '='))
     FUNC_12((char*)*VAR_5->env);
    else
     FUNC_16(*VAR_5->env);
   }
  }
  if (VAR_5->preexec_cb)
   VAR_5->preexec_cb();
  if (VAR_5->perf_cmd) {
   FUNC_6(VAR_5->argv);
  } else {
   FUNC_7(VAR_5->argv[0], (char *const*) VAR_5->argv);
  }
  FUNC_8(127);
 }

 if (VAR_5->pid < 0) {
  int VAR_12 = VAR_4;
  if (VAR_6)
   FUNC_2(VAR_9);
  else if (VAR_5->in)
   FUNC_1(VAR_5->in);
  if (VAR_7)
   FUNC_2(VAR_10);
  else if (VAR_5->out)
   FUNC_1(VAR_5->out);
  if (VAR_8)
   FUNC_2(VAR_11);
  return VAR_12 == VAR_0 ?
   -VAR_1 :
   -VAR_2;
 }

 if (VAR_6)
  FUNC_1(VAR_9[0]);
 else if (VAR_5->in)
  FUNC_1(VAR_5->in);

 if (VAR_7)
  FUNC_1(VAR_10[1]);
 else if (VAR_5->out)
  FUNC_1(VAR_5->out);

 if (VAR_8)
  FUNC_1(VAR_11[1]);

 return 0;
}
