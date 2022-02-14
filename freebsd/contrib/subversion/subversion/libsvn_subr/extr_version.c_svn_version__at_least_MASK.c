
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int major; int minor; int patch; scalar_t__* tag; } ;
typedef TYPE_1__ svn_version_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;

svn_boolean_t
FUNC_0(const svn_version_t *VAR_2,
                      int VAR_3,
                      int VAR_4,
                      int VAR_5)
{

  if (VAR_2->major < VAR_3)
    return VAR_0;
  if (VAR_2->major > VAR_3)
    return VAR_1;


  if (VAR_2->minor < VAR_4)
    return VAR_0;
  if (VAR_2->minor > VAR_4)
    return VAR_1;



  if (VAR_2->patch < VAR_5)
    return VAR_0;
  if (VAR_2->patch > VAR_5)
    return VAR_1;




  if (VAR_2->tag && VAR_2->tag[0])
    return VAR_0;

  return VAR_1;
}
