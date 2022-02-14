
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int *,char*) ;
 int * FUNC_6 (TYPE_1__ const**,TYPE_1__ const**,int *,int ,int ,int,int ,int *,int ,int *,int *) ;
 int FUNC_7 (int *,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const svn_string_t **VAR_6,
         svn_ra_session_t *VAR_7,
         svn_boolean_t VAR_8,
         apr_pool_t *VAR_9)
{
  svn_error_t *VAR_10;
  svn_boolean_t VAR_11;
  const svn_string_t *VAR_12;

  FUNC_0(FUNC_7(VAR_7, &VAR_11,
                                VAR_2,
                                VAR_9));
  if (! VAR_11)
    {



      VAR_10 = FUNC_4(
              VAR_1, ((void*)0),
              FUNC_1("Target server does not support atomic revision property "
                "edits; consider upgrading it to 1.7 or using an external "
                "locking program"));
      FUNC_5(VAR_5, VAR_10, "svnsync: ");
      FUNC_3(VAR_10);
    }

  VAR_10 = FUNC_6(VAR_6, &VAR_12, VAR_7,
                                     VAR_0, VAR_8,
                                     10 , VAR_4, ((void*)0),
                                     VAR_3, ((void*)0), VAR_9);
  if (!VAR_10 && VAR_12)
    {
      return FUNC_2(VAR_9,
                                FUNC_1("Stole lock previously held by '%s'\n"),
                                VAR_12->data);
    }
  return VAR_10;
}
