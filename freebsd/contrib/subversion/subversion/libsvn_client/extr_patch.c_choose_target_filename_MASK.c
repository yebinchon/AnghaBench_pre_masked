
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* old_filename; char const* new_filename; scalar_t__ operation; } ;
typedef TYPE_1__ svn_patch_t ;
typedef scalar_t__ apr_size_t ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ VAR_0 ;
 char const* FUNC_2 (char const*,int *) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static const char *
FUNC_4(const svn_patch_t *VAR_1)
{
  apr_size_t VAR_2;
  apr_size_t VAR_3;

  if (FUNC_0(VAR_1->old_filename, "/dev/null") == 0)
    return VAR_1->new_filename;
  if (FUNC_0(VAR_1->new_filename, "/dev/null") == 0)
    return VAR_1->old_filename;




  if (VAR_1->operation == VAR_0)
    return VAR_1->old_filename;

  VAR_2 = FUNC_3(VAR_1->old_filename);
  VAR_3 = FUNC_3(VAR_1->new_filename);

  if (VAR_2 == VAR_3)
    {
      VAR_2 = FUNC_1(FUNC_2(VAR_1->old_filename, ((void*)0)));
      VAR_3 = FUNC_1(FUNC_2(VAR_1->new_filename, ((void*)0)));

      if (VAR_2 == VAR_3)
        {
          VAR_2 = FUNC_1(VAR_1->old_filename);
          VAR_3 = FUNC_1(VAR_1->new_filename);
        }
    }

  return (VAR_2 < VAR_3) ? VAR_1->old_filename : VAR_1->new_filename;
}
