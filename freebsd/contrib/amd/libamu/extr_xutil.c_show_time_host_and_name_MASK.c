
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;
typedef int nsecs ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,struct timespec*) ;
 scalar_t__ FUNC_4 (int *) ;
 char* FUNC_5 (scalar_t__*) ;
 int FUNC_6 (int ,char*,char*,char*,char*,int ,long,char*) ;
 int VAR_3 ;
 int FUNC_7 (char*,int,char*,int ) ;

__attribute__((used)) static void
FUNC_8(int VAR_4)
{
  static time_t VAR_5 = 0;
  static char *VAR_6 = ((void*)0);
  time_t VAR_7;



  char VAR_8[11];
  char *VAR_9;

  VAR_8[0] = '\0';
    VAR_7 = FUNC_4(((void*)0));

  if (VAR_7 != VAR_5) {
    VAR_6 = FUNC_5(&VAR_7);
    VAR_5 = VAR_7;
  }

  switch (VAR_4) {
  case 133:
    VAR_9 = "fatal:";
    break;
  case 134:
    VAR_9 = "error:";
    break;
  case 129:
    VAR_9 = "user: ";
    break;
  case 128:
    VAR_9 = "warn: ";
    break;
  case 132:
    VAR_9 = "info: ";
    break;
  case 135:
    VAR_9 = "debug:";
    break;
  case 131:
    VAR_9 = "map:  ";
    break;
  case 130:
    VAR_9 = "stats:";
    break;
  default:
    VAR_9 = "hmm:  ";
    break;
  }
  FUNC_6(VAR_3, "%15.15s%s %s %d[%ld]/%s ",
   VAR_6 + 4, VAR_8, FUNC_0(),
   FUNC_1(),
   (long) VAR_2,
   VAR_9);
}
