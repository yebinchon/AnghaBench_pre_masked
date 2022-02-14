
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_4__ {int number; int change_set; } ;
struct TYPE_5__ {TYPE_1__ id; int kind; int name; } ;
typedef TYPE_2__ svn_fs_x__dirent_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_byte_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char const*,int*) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_x__dirent_t *VAR_2,
                  svn_stream_t *VAR_3,
                  apr_pool_t *VAR_4)
{
  apr_size_t VAR_5;
  apr_size_t VAR_6 = FUNC_3(VAR_2->name);






  apr_byte_t *VAR_7 = FUNC_1(VAR_4,
                                  VAR_6 + 2 + 2 * VAR_1);


  apr_byte_t *VAR_8 = VAR_7;


  FUNC_2(VAR_8, VAR_2->name, VAR_6 + 1);
  VAR_8 += VAR_6 + 1;


  VAR_8 = FUNC_5(VAR_8, VAR_2->kind);


  VAR_8 = FUNC_4(VAR_8, VAR_2->id.change_set);
  VAR_8 = FUNC_5(VAR_8, VAR_2->id.number);


  VAR_5 = VAR_8 - VAR_7;
  FUNC_0(FUNC_6(VAR_3, (const char *)VAR_7, &VAR_5));

  return VAR_0;
}
