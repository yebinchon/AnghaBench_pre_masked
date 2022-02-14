
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct dir_baton_t {scalar_t__ users; int pool; struct dir_baton_t* pb; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(struct dir_baton_t *VAR_1)
{
  VAR_1->users--;

  if (VAR_1->users == 0)
    {
      struct dir_baton_t *VAR_2 = VAR_1->pb;

      FUNC_1(VAR_1->pool);

      if (VAR_2)
        FUNC_0(FUNC_2(VAR_2));
    }

  return VAR_0;
}
