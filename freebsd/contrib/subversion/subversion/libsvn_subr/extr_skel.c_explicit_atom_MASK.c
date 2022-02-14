
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
 int FUNC_1 (char const*,int,char const**,int) ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static svn_skel_t *
FUNC_2(const char *VAR_3,
              apr_size_t VAR_4,
              apr_pool_t *VAR_5)
{
  const char *VAR_6 = VAR_3 + VAR_4;
  const char *VAR_7;
  apr_size_t VAR_8;
  svn_skel_t *VAR_9;


  VAR_8 = FUNC_1(VAR_3, VAR_6 - VAR_3, &VAR_7, VAR_6 - VAR_3);
  VAR_3 = VAR_7;


  if (! VAR_3)
    return ((void*)0);


  if (VAR_3 >= VAR_6 || VAR_1[(unsigned char) *VAR_3] != VAR_2)
    return ((void*)0);
  VAR_3++;


  if (VAR_6 - VAR_3 < VAR_8)
    return ((void*)0);


  VAR_9 = FUNC_0(VAR_5, sizeof(*VAR_9));
  VAR_9->is_atom = VAR_0;
  VAR_9->data = VAR_3;
  VAR_9->len = VAR_8;

  return VAR_9;
}
