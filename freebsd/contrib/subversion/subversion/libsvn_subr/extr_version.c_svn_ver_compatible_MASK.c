
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* tag; scalar_t__ major; scalar_t__ minor; scalar_t__ patch; } ;
typedef TYPE_1__ svn_version_t ;
typedef int svn_boolean_t ;


 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*) ;

svn_boolean_t FUNC_1(const svn_version_t *VAR_0,
                                 const svn_version_t *VAR_1)
{
  if (VAR_1->tag[0] != '\0')

    return FUNC_0(VAR_0, VAR_1);
  else if (VAR_0->tag[0] != '\0')


    return (VAR_0->major == VAR_1->major
            && VAR_0->minor == VAR_1->minor
            && VAR_0->patch > VAR_1->patch);



  return (VAR_0->major == VAR_1->major
          && VAR_0->minor <= VAR_1->minor);
}
