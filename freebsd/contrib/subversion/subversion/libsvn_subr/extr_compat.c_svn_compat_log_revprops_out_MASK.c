
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int apr_hash_t ;


 int FUNC_0 (TYPE_1__ const**,TYPE_1__ const**,TYPE_1__ const**,int *) ;

void
FUNC_1(const char **VAR_0, const char **VAR_1,
                            const char **VAR_2, apr_hash_t *VAR_3)
{
  const svn_string_t *VAR_4, *VAR_5, *VAR_6;
  FUNC_0(&VAR_4, &VAR_5, &VAR_6,
                                     VAR_3);

  *VAR_0 = VAR_4 ? VAR_4->data : ((void*)0);
  *VAR_1 = VAR_5 ? VAR_5->data : ((void*)0);
  *VAR_2 = VAR_6 ? VAR_6->data : ((void*)0);
}
