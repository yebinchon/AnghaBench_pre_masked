
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int shard_rev; int pack_file; int fs; int proto_p2l_index; int proto_l2p_index; } ;
typedef TYPE_1__ pack_context_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,char const*,char const*,int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char const**,int ,int *) ;
 int FUNC_4 (char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(pack_context_t *VAR_2,
                   apr_pool_t *VAR_3)
{
  const char *VAR_4;
  const char *VAR_5;


  FUNC_0(FUNC_3(&VAR_4,
                               VAR_2->proto_l2p_index, VAR_3));
  FUNC_0(FUNC_3(&VAR_5,
                               VAR_2->proto_p2l_index, VAR_3));


  FUNC_0(FUNC_2(VAR_2->proto_l2p_index, VAR_3));
  FUNC_0(FUNC_2(VAR_2->proto_p2l_index, VAR_3));


  FUNC_0(FUNC_1(VAR_2->fs, VAR_2->pack_file,
                                    VAR_4,
                                    VAR_5,
                                    VAR_2->shard_rev,
                                    VAR_3));


  FUNC_0(FUNC_4(VAR_4, VAR_0, VAR_3));
  FUNC_0(FUNC_4(VAR_5, VAR_0, VAR_3));

  return VAR_1;
}
