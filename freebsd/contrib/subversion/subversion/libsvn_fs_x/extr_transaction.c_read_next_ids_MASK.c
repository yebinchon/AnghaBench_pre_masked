
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_fs_x__txn_id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const**,char const*) ;
 int * FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (TYPE_1__**,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(apr_uint64_t *VAR_2,
              apr_uint64_t *VAR_3,
              svn_fs_t *VAR_4,
              svn_fs_x__txn_id_t VAR_5,
              apr_pool_t *VAR_6)
{
  svn_stringbuf_t *VAR_7;
  const char *VAR_8;
  FUNC_0(FUNC_5(&VAR_7,
                                 FUNC_4(VAR_4, VAR_5,
                                                             VAR_6),
                                 VAR_6));



  VAR_8 = VAR_7->data;
  *VAR_2 = FUNC_2(&VAR_8, VAR_8);
  if (*VAR_8 != ' ')
    return FUNC_3(VAR_0, ((void*)0),
                            FUNC_1("next-id file corrupt"));

  ++VAR_8;
  *VAR_3 = FUNC_2(&VAR_8, VAR_8);
  if (*VAR_8 != '\n')
    return FUNC_3(VAR_0, ((void*)0),
                            FUNC_1("next-id file corrupt"));

  return VAR_1;
}
