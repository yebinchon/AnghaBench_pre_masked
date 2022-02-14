
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_ra_svn__list_t ;
struct TYPE_4__ {int expiration_date; int creation_date; int path; int comment; int owner; int token; } ;
typedef TYPE_1__ svn_lock_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int const*,char*,int *,int *,int *,int *,char const**,char const**) ;
 int FUNC_4 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_5(const svn_ra_svn__list_t *VAR_1,
                               apr_pool_t *VAR_2,
                               svn_lock_t **VAR_3)
{
  const char *VAR_4, *VAR_5;
  *VAR_3 = FUNC_2(VAR_2);
  FUNC_0(FUNC_3(VAR_1, "ccc(?c)c(?c)", &(*VAR_3)->path,
                                  &(*VAR_3)->token, &(*VAR_3)->owner,
                                  &(*VAR_3)->comment, &VAR_4, &VAR_5));
  (*VAR_3)->path = FUNC_1((*VAR_3)->path, VAR_2);
  FUNC_0(FUNC_4(&(*VAR_3)->creation_date, VAR_4, VAR_2));
  if (VAR_5)
    FUNC_0(FUNC_4(&(*VAR_3)->expiration_date, VAR_5, VAR_2));
  return VAR_0;
}
