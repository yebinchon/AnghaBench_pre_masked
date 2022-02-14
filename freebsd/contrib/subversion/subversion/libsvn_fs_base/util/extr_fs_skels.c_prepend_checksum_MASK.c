
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_skel_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int kind; int digest; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (char*) ;


 int * FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (char*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_skel_t *VAR_3,
                 svn_checksum_t *VAR_4,
                 apr_pool_t *VAR_5)
{
  svn_skel_t *VAR_6 = FUNC_1(VAR_5);

  switch (VAR_4->kind)
    {
    case 129:
      FUNC_3(FUNC_2(VAR_4->digest,
                                           VAR_0, VAR_5),
                        VAR_6);
      FUNC_3(FUNC_4("md5", VAR_5), VAR_6);
      break;

    case 128:
      FUNC_3(FUNC_2(VAR_4->digest,
                                           VAR_1, VAR_5),
                        VAR_6);
      FUNC_3(FUNC_4("sha1", VAR_5), VAR_6);
      break;

    default:
      return FUNC_0("checksum");
    }
  FUNC_3(VAR_6, VAR_3);

  return VAR_2;
}
