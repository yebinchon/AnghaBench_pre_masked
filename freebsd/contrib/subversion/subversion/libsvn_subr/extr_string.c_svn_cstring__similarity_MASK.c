
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* data; void* len; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_membuf_t ;
typedef int apr_size_t ;


 void* FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int *,int *) ;

apr_size_t
FUNC_2(const char *VAR_0, const char *VAR_1,
                        svn_membuf_t *VAR_2, apr_size_t *VAR_3)
{
  svn_string_t VAR_4, VAR_5;
  VAR_4.data = VAR_0;
  VAR_4.len = FUNC_0(VAR_0);
  VAR_5.data = VAR_1;
  VAR_5.len = FUNC_0(VAR_1);
  return FUNC_1(&VAR_4, &VAR_5, VAR_2, VAR_3);
}
