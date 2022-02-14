
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tag; int patch; int minor; int major; } ;
typedef TYPE_1__ svn_version_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,char const*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__ const*,TYPE_1__ const*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const svn_version_t *VAR_2, const char *VAR_3)
{
  const svn_version_t *VAR_4 = FUNC_2();
  if (!FUNC_3(VAR_4, VAR_2))
    return FUNC_1(VAR_0, ((void*)0),
                             FUNC_0("Mismatched RA version for '%s':"
                               " found %d.%d.%d%s,"
                               " expected %d.%d.%d%s"),
                             VAR_3,
                             VAR_4->major, VAR_4->minor,
                             VAR_4->patch, VAR_4->tag,
                             VAR_2->major, VAR_2->minor,
                             VAR_2->patch, VAR_2->tag);

  return VAR_1;
}
