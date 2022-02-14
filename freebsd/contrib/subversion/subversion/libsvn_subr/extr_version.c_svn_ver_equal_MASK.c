
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ major; scalar_t__ minor; scalar_t__ patch; int tag; } ;
typedef TYPE_1__ svn_version_t ;
typedef int svn_boolean_t ;


 scalar_t__ FUNC_0 (int ,int ) ;

svn_boolean_t FUNC_1(const svn_version_t *VAR_0,
                            const svn_version_t *VAR_1)
{
  return (VAR_0->major == VAR_1->major
          && VAR_0->minor == VAR_1->minor
          && VAR_0->patch == VAR_1->patch
          && 0 == FUNC_0(VAR_0->tag, VAR_1->tag));
}
