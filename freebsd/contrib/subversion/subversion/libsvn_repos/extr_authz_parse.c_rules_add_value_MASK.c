
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
typedef int svn_error_t ;
struct TYPE_4__ {scalar_t__ in_aliases; scalar_t__ in_groups; } ;
typedef TYPE_1__ ctor_baton_t ;


 int * FUNC_0 (TYPE_1__* const,int *,int *,int *) ;
 int * FUNC_1 (TYPE_1__* const,int *,int *) ;
 int * FUNC_2 (void*,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0, svn_stringbuf_t *VAR_1,
                svn_stringbuf_t *VAR_2, svn_stringbuf_t *VAR_3)
{
  ctor_baton_t *const VAR_4 = VAR_0;

  if (VAR_4->in_groups)
    return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);

  if (VAR_4->in_aliases)
    return FUNC_1(VAR_4, VAR_2, VAR_3);

  return FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
}
