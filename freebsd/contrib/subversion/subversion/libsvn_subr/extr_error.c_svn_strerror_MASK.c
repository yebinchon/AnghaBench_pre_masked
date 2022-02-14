
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_errno_t ;
struct TYPE_3__ {scalar_t__ errcode; int * errdesc; } ;
typedef TYPE_1__ err_defn ;
typedef scalar_t__ apr_status_t ;
typedef int apr_size_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int ) ;
 char* FUNC_2 (scalar_t__,char*,int ) ;
 TYPE_1__* VAR_0 ;

char *
FUNC_3(apr_status_t VAR_1, char *VAR_2, apr_size_t VAR_3)
{
  const err_defn *VAR_4;

  for (VAR_4 = VAR_0; VAR_4->errdesc != ((void*)0); ++VAR_4)
    if (VAR_4->errcode == (svn_errno_t)VAR_1)
      {
        FUNC_1(VAR_2, FUNC_0(VAR_4->errdesc), VAR_3);
        return VAR_2;
      }

  return FUNC_2(VAR_1, VAR_2, VAR_3);
}
