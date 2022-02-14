
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nfs_vers; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,char const*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2)
{
  int VAR_3 = FUNC_0(VAR_2);

  if (VAR_3 == 2 || VAR_3 == 3 || VAR_3 == 4) {
    VAR_0.nfs_vers = VAR_3;
    return 0;
  }
  FUNC_1(VAR_1, "conf: illegal nfs_vers \"%s\"\n", VAR_2);
  return 1;
}
