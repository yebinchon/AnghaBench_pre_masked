
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sshkey {int dummy; } ;
struct TYPE_2__ {int add_keys_to_agent; } ;


 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (int,struct sshkey const*,char*,int ,int,int ) ;
 int FUNC_5 (int*) ;

void
FUNC_6(char *VAR_1, const struct sshkey *VAR_2,
    char *VAR_3, char *VAR_4)
{
 int VAR_5 = -1, VAR_6;

 if (VAR_0.add_keys_to_agent == 0)
  return;

 if ((VAR_6 = FUNC_5(&VAR_5)) != 0) {
  FUNC_3("no authentication agent, not adding key");
  return;
 }

 if (VAR_0.add_keys_to_agent == 2 &&
     !FUNC_0("Add key %s (%s) to agent?", VAR_1, VAR_3)) {
  FUNC_3("user denied adding this key");
  FUNC_1(VAR_5);
  return;
 }

 if ((VAR_6 = FUNC_4(VAR_5, VAR_2, VAR_3, 0,
     (VAR_0.add_keys_to_agent == 3), 0)) == 0)
  FUNC_2("identity added to agent: %s", VAR_1);
 else
  FUNC_2("could not add identity to agent: %s (%d)", VAR_1, VAR_6);
 FUNC_1(VAR_5);
}
