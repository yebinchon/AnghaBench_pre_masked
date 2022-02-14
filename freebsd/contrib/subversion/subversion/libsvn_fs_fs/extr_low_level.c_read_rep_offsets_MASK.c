
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_7__ {scalar_t__ revision; int txn_id; } ;
typedef TYPE_2__ representation_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int ,char*) ;
 int * FUNC_2 (int *,char const*) ;
 int * FUNC_3 (int const*) ;
 TYPE_1__* FUNC_4 (int const*,int *) ;
 int * FUNC_5 (TYPE_2__**,int ,int *,int *) ;
 int FUNC_6 (char*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(representation_t **VAR_2,
                 char *VAR_3,
                 const svn_fs_id_t *VAR_4,
                 apr_pool_t *VAR_5,
                 apr_pool_t *VAR_6)
{
  svn_error_t *VAR_7
    = FUNC_5(VAR_2,
                                      FUNC_6(VAR_3,
                                                                VAR_6),
                                      VAR_5,
                                      VAR_6);
  if (VAR_7)
    {
      const svn_string_t *VAR_8;
      const char *VAR_9;

      VAR_8 = FUNC_4(VAR_4, VAR_6);
      VAR_9 = FUNC_1(VAR_6,
                           FUNC_0("While reading representation offsets "
                             "for node-revision '%s':"),
                           VAR_4 ? VAR_8->data : "(null)");

      return FUNC_2(VAR_7, VAR_9);
    }

  if ((*VAR_2)->revision == VAR_0)
    if (VAR_4)
      (*VAR_2)->txn_id = *FUNC_3(VAR_4);

  return VAR_1;
}
