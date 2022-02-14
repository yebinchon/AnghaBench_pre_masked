
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* val; } ;
struct statfs {TYPE_1__ f_fsid; } ;
struct stat {int dummy; } ;


 int FUNC_0 (char const*,struct stat*) ;
 scalar_t__ FUNC_1 (char const*,struct statfs*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, struct statfs *VAR_1)
{
 struct statfs VAR_2;
 struct stat VAR_3;

 if (FUNC_0(VAR_0, &VAR_3) != 1)
  return (-1);
 if (FUNC_1(VAR_0, &VAR_2) < 0)
  return (-1);
 if ((VAR_2.f_fsid.val[0] != VAR_1->f_fsid.val[0]) ||
     (VAR_2.f_fsid.val[1] != VAR_1->f_fsid.val[1]))
  return (0);
 return (1);
}
