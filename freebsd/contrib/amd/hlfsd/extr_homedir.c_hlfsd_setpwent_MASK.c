
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct passwd {int dummy; } ;
struct TYPE_2__ {char* pw_name; char* pw_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ,int) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void)
{
  if (!VAR_5) {
    FUNC_3();
    return;
  }

  VAR_3 = FUNC_0(VAR_5, "r");
  if (!VAR_3) {
    FUNC_2(VAR_0, "unable to read passwd file %s: %m", VAR_5);
    return;
  }
  FUNC_2(VAR_1, "reading password entries from file %s", VAR_5);

  VAR_4 = 0;
  FUNC_1((char *) &VAR_2, 0, sizeof(struct passwd));
  VAR_2.pw_name = (char *) &VAR_7;
  VAR_2.pw_dir = (char *) &VAR_6;
}
