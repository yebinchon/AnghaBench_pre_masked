
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_2__ {scalar_t__ revision; } ;
typedef TYPE_1__ rep_ref_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
  svn_revnum_t VAR_2 = (*(const rep_ref_t *const *)VAR_0)->revision;
  svn_revnum_t VAR_3 = (*(const rep_ref_t *const *)VAR_1)->revision;

  if (VAR_2 < VAR_3)
    return -1;
  return (VAR_2 > VAR_3 ? 1 : 0);
}
