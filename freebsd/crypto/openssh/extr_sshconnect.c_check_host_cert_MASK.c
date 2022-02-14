
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sshkey {TYPE_1__* cert; } ;
struct TYPE_2__ {int critical; } ;


 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sshkey const*,int,int ,char const*,char const**) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0, const struct sshkey *VAR_1)
{
 const char *VAR_2;

 if (FUNC_2(VAR_1, 1, 0, VAR_0, &VAR_2) != 0) {
  FUNC_0("%s", VAR_2);
  return 0;
 }
 if (FUNC_1(VAR_1->cert->critical) != 0) {
  FUNC_0("Certificate for %s contains unsupported "
      "critical options(s)", VAR_0);
  return 0;
 }
 return 1;
}
