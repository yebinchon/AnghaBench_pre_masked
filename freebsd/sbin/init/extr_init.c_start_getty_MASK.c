
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int term ;
typedef int sigset_t ;
struct TYPE_4__ {scalar_t__ se_started; scalar_t__ se_nspace; int se_device; int * se_getty_argv; int se_type; scalar_t__ se_window; } ;
typedef TYPE_1__ session_t ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int *,char**) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,int ,int) ;
 scalar_t__ FUNC_12 (scalar_t__*) ;
 int FUNC_13 (char*,int ,scalar_t__) ;

__attribute__((used)) static pid_t
FUNC_14(session_t *VAR_6)
{
 pid_t VAR_7;
 sigset_t VAR_8;
 time_t VAR_9 = FUNC_12((time_t *) 0);
 int VAR_10 = 0;
 char VAR_11[64], *VAR_12[2];

 if (VAR_9 >= VAR_6->se_started &&
     VAR_9 - VAR_6->se_started < VAR_2) {
  if (++VAR_6->se_nspace > VAR_0) {
   VAR_6->se_nspace = 0;
   VAR_10 = 1;
  }
 } else
  VAR_6->se_nspace = 0;




 if ((VAR_7 = FUNC_3()) == -1) {
  FUNC_1("can't fork for getty on port %s: %m", VAR_6->se_device);
  return -1;
 }

 if (VAR_7)
  return VAR_7;

 if (VAR_10) {
  FUNC_13("getty repeating too quickly on port %s, sleeping %d secs",
      VAR_6->se_device, VAR_1);
  FUNC_7((unsigned) VAR_1);
 }

 if (VAR_6->se_window) {
  FUNC_9(VAR_6);
  FUNC_7(VAR_5);
 }

 FUNC_5(&VAR_8);
 FUNC_6(VAR_4, &VAR_8, ((void*)0));




 if (VAR_6->se_type) {

  FUNC_10(VAR_11, "TERM=");
  FUNC_11(VAR_11, VAR_6->se_type, sizeof(VAR_11));
  VAR_12[0] = VAR_11;
  VAR_12[1] = ((void*)0);
 } else
  VAR_12[0] = ((void*)0);
 FUNC_2(VAR_6->se_getty_argv[0], VAR_6->se_getty_argv, VAR_12);
 FUNC_8("can't exec getty '%s' for port %s: %m",
  VAR_6->se_getty_argv[0], VAR_6->se_device);
 FUNC_0(1);
}
