
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_token_map_t ;
struct TYPE_3__ {int db; int s3stmt; } ;
typedef TYPE_1__ svn_sqlite__stmt_t ;
typedef int svn_error_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,int,char const*,int,int ) ;
 char* FUNC_2 (int const*,int) ;

svn_error_t *
FUNC_3(svn_sqlite__stmt_t *VAR_2,
                       int VAR_3,
                       const svn_token_map_t *VAR_4,
                       int VAR_5)
{
  const char *VAR_6 = FUNC_2(VAR_4, VAR_5);

  FUNC_0(FUNC_1(VAR_2->s3stmt, VAR_3, VAR_6, -1, VAR_0),
             VAR_2->db);
  return VAR_1;
}
