
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ svn_membuf_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,char const*,int ,int ,int ,TYPE_1__*) ;

svn_error_t*
FUNC_2(const char **VAR_2,
                   const char *VAR_3, apr_size_t VAR_4,
                   svn_membuf_t *VAR_5)
{
  apr_size_t VAR_6;
  FUNC_0(FUNC_1(&VAR_6, VAR_3, VAR_4, VAR_0, VAR_0, VAR_5));
  *VAR_2 = (const char*)(VAR_5->data);
  return VAR_1;
}
