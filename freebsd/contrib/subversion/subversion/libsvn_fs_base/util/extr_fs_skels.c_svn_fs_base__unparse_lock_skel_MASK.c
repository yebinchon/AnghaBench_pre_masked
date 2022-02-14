
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_skel_t ;
struct TYPE_3__ {char* comment; char* owner; char* token; char* path; scalar_t__ is_dav_comment; scalar_t__ creation_date; scalar_t__ expiration_date; } ;
typedef TYPE_1__ svn_lock_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,int *) ;
 char* FUNC_6 (scalar_t__,int *) ;

svn_error_t *
FUNC_7(svn_skel_t **VAR_1,
                               const svn_lock_t *VAR_2,
                               apr_pool_t *VAR_3)
{
  svn_skel_t *VAR_4;


  VAR_4 = FUNC_2(VAR_3);


  if (VAR_2->expiration_date)
    FUNC_4(FUNC_5(
                          FUNC_6(VAR_2->expiration_date, VAR_3),
                          VAR_3), VAR_4);
  else
    FUNC_4(FUNC_3(((void*)0), 0, VAR_3), VAR_4);


  FUNC_4(FUNC_5(
                        FUNC_6(VAR_2->creation_date, VAR_3),
                        VAR_3), VAR_4);


  if (VAR_2->is_dav_comment)
    FUNC_4(FUNC_5("1", VAR_3), VAR_4);
  else
    FUNC_4(FUNC_5("0", VAR_3), VAR_4);


  if (VAR_2->comment)
    FUNC_4(FUNC_5(VAR_2->comment, VAR_3), VAR_4);
  else
    FUNC_4(FUNC_3(((void*)0), 0, VAR_3), VAR_4);


  FUNC_4(FUNC_5(VAR_2->owner, VAR_3), VAR_4);


  FUNC_4(FUNC_5(VAR_2->token, VAR_3), VAR_4);


  FUNC_4(FUNC_5(VAR_2->path, VAR_3), VAR_4);


  FUNC_4(FUNC_5("lock", VAR_3), VAR_4);


  if (! FUNC_0(VAR_4))
    return FUNC_1("lock");

  *VAR_1 = VAR_4;
  return VAR_0;
}
