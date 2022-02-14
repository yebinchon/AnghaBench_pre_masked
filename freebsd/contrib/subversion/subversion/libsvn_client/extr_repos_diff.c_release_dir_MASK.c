
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct dir_baton {scalar_t__ users; int pool; struct dir_baton* parent_baton; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(struct dir_baton *VAR_1)
{
  FUNC_1(VAR_1->users > 0);

  VAR_1->users--;
  if (VAR_1->users)
     return VAR_0;

  {
    struct dir_baton *VAR_2 = VAR_1->parent_baton;

    FUNC_2(VAR_1->pool);

    if (VAR_2 != ((void*)0))
      FUNC_0(FUNC_3(VAR_2));
  }

  return VAR_0;
}
