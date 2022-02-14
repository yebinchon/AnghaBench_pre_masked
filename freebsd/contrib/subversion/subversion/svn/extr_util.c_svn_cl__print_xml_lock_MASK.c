
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_3__ {scalar_t__ creation_date; scalar_t__ expiration_date; int comment; int owner; int token; } ;
typedef TYPE_1__ svn_lock_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int **,int *,char*,int ) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int **,int *,char*) ;
 int FUNC_3 (int **,int *,int ,char*,int ) ;
 int VAR_1 ;

void
FUNC_4(svn_stringbuf_t **VAR_2,
                       const svn_lock_t *VAR_3,
                       apr_pool_t *VAR_4)
{

  FUNC_3(VAR_2, VAR_4, VAR_1, "lock", VAR_0);


  FUNC_0(VAR_2, VAR_4, "token", VAR_3->token);


  FUNC_0(VAR_2, VAR_4, "owner", VAR_3->owner);


  FUNC_0(VAR_2, VAR_4, "comment", VAR_3->comment);


  FUNC_0(VAR_2, VAR_4, "created",
                           FUNC_1(VAR_3->creation_date, VAR_4));


  if (VAR_3->expiration_date != 0)
    FUNC_0(VAR_2, VAR_4, "expires",
                             FUNC_1(VAR_3->expiration_date, VAR_4));


  FUNC_2(VAR_2, VAR_4, "lock");
}
