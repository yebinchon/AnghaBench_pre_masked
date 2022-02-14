
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* data; int len; int is_atom; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_skel_t *
FUNC_1(const char *VAR_5,
              apr_size_t VAR_6,
              apr_pool_t *VAR_7)
{
  const char *VAR_8 = VAR_5;
  const char *VAR_9 = VAR_5 + VAR_6;
  svn_skel_t *VAR_10;




  if (VAR_5 >= VAR_9 || VAR_1[(unsigned char) *VAR_5] != VAR_2)
    return ((void*)0);


  while (++VAR_5 < VAR_9
         && VAR_1[(unsigned char) *VAR_5] != VAR_4
         && VAR_1[(unsigned char) *VAR_5] != VAR_3)
    ;


  VAR_10 = FUNC_0(VAR_7, sizeof(*VAR_10));
  VAR_10->is_atom = VAR_0;
  VAR_10->data = VAR_8;
  VAR_10->len = VAR_5 - VAR_8;

  return VAR_10;
}
