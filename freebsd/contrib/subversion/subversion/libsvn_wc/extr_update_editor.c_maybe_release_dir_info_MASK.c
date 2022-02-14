
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct dir_baton {int pool; struct dir_baton* parent_baton; int ref_count; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(struct dir_baton *VAR_1)
{
  VAR_1->ref_count--;

  if (!VAR_1->ref_count)
    {
      struct dir_baton *VAR_2 = VAR_1->parent_baton;

      FUNC_1(VAR_1->pool);

      if (VAR_2)
        FUNC_0(FUNC_2(VAR_2));
    }

  return VAR_0;
}
