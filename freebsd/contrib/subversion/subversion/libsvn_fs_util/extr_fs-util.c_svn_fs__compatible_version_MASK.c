
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* tag; scalar_t__ patch; } ;
typedef TYPE_1__ svn_version_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_9__ {int major; int minor; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 TYPE_1__* FUNC_2 (int *,TYPE_3__*,int) ;
 char* FUNC_3 (int *,int ) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (TYPE_1__**,char const*,int *) ;

svn_error_t *
FUNC_6(svn_version_t **VAR_6,
                           apr_hash_t *VAR_7,
                           apr_pool_t *VAR_8)
{
  svn_version_t *VAR_9;
  const char *VAR_10;




  VAR_10 = FUNC_3(VAR_7, VAR_0);
  if (VAR_10)
    {
      FUNC_0(FUNC_5(&VAR_9,
                                                VAR_10, VAR_8));
      FUNC_1(VAR_9,
                      FUNC_4()->major,
                      FUNC_4()->minor);
    }
  else
    {
      VAR_9 = FUNC_2(VAR_8, FUNC_4(), sizeof(*VAR_9));
    }



  if (FUNC_3(VAR_7, VAR_1))
    FUNC_1(VAR_9, 1, 3);
  else if (FUNC_3(VAR_7, VAR_2))
    FUNC_1(VAR_9, 1, 4);
  else if (FUNC_3(VAR_7, VAR_3))
    FUNC_1(VAR_9, 1, 5);
  else if (FUNC_3(VAR_7, VAR_4))
    FUNC_1(VAR_9, 1, 7);



  VAR_9->patch = 0;
  VAR_9->tag = "";


  *VAR_6 = VAR_9;
  return VAR_5;
}
