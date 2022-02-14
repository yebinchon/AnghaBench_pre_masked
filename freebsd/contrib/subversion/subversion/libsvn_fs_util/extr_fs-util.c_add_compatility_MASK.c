
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int major; int minor; } ;
typedef TYPE_1__ svn_version_t ;



__attribute__((used)) static void
FUNC_0(svn_version_t *VAR_0,
                int VAR_1,
                int VAR_2)
{
  if ( VAR_0->major > VAR_1
      || (VAR_0->major == VAR_1 && VAR_0->minor > VAR_2))
    {
      VAR_0->major = VAR_1;
      VAR_0->minor = VAR_2;
    }
}
