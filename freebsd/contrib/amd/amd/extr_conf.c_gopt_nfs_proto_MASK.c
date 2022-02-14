
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nfs_proto; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,char*,char const*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_2)
{
  if (FUNC_0(VAR_2, "udp") || FUNC_0(VAR_2, "tcp")) {
    VAR_0.nfs_proto = FUNC_2(VAR_2);
    return 0;
  }
  FUNC_1(VAR_1, "conf: illegal nfs_proto \"%s\"\n", VAR_2);
  return 1;
}
