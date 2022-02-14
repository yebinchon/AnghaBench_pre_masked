
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int proto_l2p_index; int reps; int fs; int dir_props; int file_props; int changes; } ;
typedef TYPE_1__ pack_context_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const**,int ,int ,int *,int *) ;
 int FUNC_3 (char const*,char const*,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char const**,int ,int *) ;
 int FUNC_6 (int ,int ,int *,int *) ;
 int FUNC_7 (char const*,int ,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(pack_context_t *VAR_3,
                apr_pool_t *VAR_4)
{
  apr_pool_t *VAR_5 = FUNC_8(VAR_4);
  const char *VAR_6;
  const char *VAR_7;
  apr_off_t VAR_8 = 0;



  FUNC_1(VAR_3->reps, VAR_3->changes);
  FUNC_1(VAR_3->reps, VAR_3->file_props);
  FUNC_1(VAR_3->reps, VAR_3->dir_props);


  FUNC_0(FUNC_2(&VAR_6,
                                               VAR_3->fs,
                                               VAR_3->reps,
                                               VAR_4, VAR_5));


  FUNC_0(FUNC_5(&VAR_7, VAR_3->proto_l2p_index,
                               VAR_5));

  FUNC_0(FUNC_4(VAR_3->proto_l2p_index, VAR_5));
  FUNC_0(FUNC_3(VAR_6, VAR_7, VAR_5));
  FUNC_0(FUNC_7(VAR_6, VAR_1, VAR_5));
  FUNC_0(FUNC_6(VAR_3->proto_l2p_index, VAR_0, &VAR_8,
                           VAR_5));


  FUNC_9(VAR_5);

  return VAR_2;
}
