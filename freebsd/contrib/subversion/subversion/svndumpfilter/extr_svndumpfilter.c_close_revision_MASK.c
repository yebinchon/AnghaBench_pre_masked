
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct revision_baton_t {int writing_begun; } ;


 int * VAR_0 ;
 int * FUNC_0 (struct revision_baton_t*) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1)
{
  struct revision_baton_t *VAR_2 = VAR_1;


  if (! VAR_2->writing_begun)
    return FUNC_0(VAR_2);
  else
    return VAR_0;
}
