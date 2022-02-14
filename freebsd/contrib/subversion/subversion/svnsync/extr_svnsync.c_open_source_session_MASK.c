
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_ra_session_t ;
typedef int svn_ra_callbacks2_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 TYPE_1__* FUNC_3 (int *,int ) ;
 int FUNC_4 (char const**,int ,int *) ;
 int FUNC_5 (int **,int *,char const*,int ,int *,void*,int *,int *) ;
 int FUNC_6 (int *,int ,int **,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_ra_session_t **VAR_5,
                    svn_string_t **VAR_6,
                    const char *VAR_7,
                    svn_ra_session_t *VAR_8,
                    svn_ra_callbacks2_t *VAR_9,
                    apr_hash_t *VAR_10,
                    void *VAR_11,
                    apr_pool_t *VAR_12)
{
  apr_hash_t *VAR_13;
  svn_string_t *VAR_14, *VAR_15;

  FUNC_0(FUNC_6(VAR_8, 0, &VAR_13, VAR_12));

  VAR_14 = FUNC_3(VAR_13, VAR_1);
  VAR_15 = FUNC_3(VAR_13, VAR_2);
  *VAR_6 = FUNC_3(VAR_13, VAR_3);

  if (! VAR_14 || ! VAR_15 || ! *VAR_6)
    return FUNC_2
      (VAR_0, ((void*)0),
       FUNC_1("Destination repository has not been initialized"));



  if (! VAR_7)
    FUNC_0(FUNC_4(&VAR_7, VAR_14->data,
                                          VAR_12));


  FUNC_0(FUNC_5(VAR_5, ((void*)0), VAR_7, VAR_15->data,
                       VAR_9, VAR_11, VAR_10, VAR_12));

  return VAR_4;
}
