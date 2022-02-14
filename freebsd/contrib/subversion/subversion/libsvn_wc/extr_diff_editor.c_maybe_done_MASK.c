
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct dir_baton_t {int pool; struct dir_baton_t* parent_baton; int users; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(struct dir_baton_t *VAR_1)
{
  VAR_1->users--;

  if (!VAR_1->users)
    {
      struct dir_baton_t *VAR_2 = VAR_1->parent_baton;

      FUNC_1(VAR_1->pool);

      if (VAR_2 != ((void*)0))
        FUNC_0(FUNC_2(VAR_2));
    }

  return VAR_0;
}
