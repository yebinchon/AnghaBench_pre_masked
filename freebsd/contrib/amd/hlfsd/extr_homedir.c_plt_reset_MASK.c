
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid2home_t ;
struct passwd {int dummy; } ;
typedef scalar_t__ pid_t ;
struct TYPE_4__ {char* home; char* uname; scalar_t__ child; void* uid; } ;
struct TYPE_3__ {char* username; char* home; void* uid; } ;


 void* VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 struct passwd* FUNC_2 () ;
 int FUNC_3 () ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 char* VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int
FUNC_4(void)
{
  int VAR_7;

  FUNC_3();
  if (FUNC_2() == (struct passwd *) ((void*)0)) {
    FUNC_1();
    return -1;
  }
  FUNC_1();

  VAR_2 = (uid2home_t *) ((void*)0);

  if (VAR_3 > 0)
    for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
      if (VAR_4[VAR_7].home) {
 FUNC_0(VAR_4[VAR_7].home);
 VAR_4[VAR_7].home = (char *) ((void*)0);
      }
      VAR_4[VAR_7].uid = VAR_0;
      VAR_4[VAR_7].child = (pid_t) 0;
      VAR_4[VAR_7].uname = (char *) ((void*)0);
      if (VAR_6[VAR_7].username) {
 FUNC_0(VAR_6[VAR_7].username);
 VAR_6[VAR_7].username = (char *) ((void*)0);
      }
      VAR_6[VAR_7].uid = VAR_0;
      VAR_6[VAR_7].home = (char *) ((void*)0);
    }
  VAR_1 = 0;

  if (VAR_5)
    FUNC_0(VAR_5);

  return 0;
}
