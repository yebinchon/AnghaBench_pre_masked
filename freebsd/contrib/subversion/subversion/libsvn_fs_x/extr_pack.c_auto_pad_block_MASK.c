
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ size; int * items; scalar_t__ item_count; scalar_t__ fnv1_checksum; int type; int offset; } ;
typedef TYPE_2__ svn_fs_x__p2l_entry_t ;
struct TYPE_10__ {int block_size; } ;
typedef TYPE_3__ svn_fs_x__data_t ;
typedef int svn_error_t ;
struct TYPE_11__ {int pack_offset; int proto_p2l_index; int pack_file; TYPE_1__* fs; } ;
typedef TYPE_4__ pack_context_t ;
typedef int apr_pool_t ;
typedef scalar_t__ const apr_off_t ;
struct TYPE_8__ {TYPE_3__* fsap_data; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,TYPE_2__*,int *) ;
 int FUNC_4 (int ,scalar_t__ const,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(pack_context_t *VAR_2,
               apr_pool_t *VAR_3)
{
  svn_fs_x__data_t *VAR_4 = VAR_2->fs->fsap_data;



  const apr_off_t VAR_5 = FUNC_0(VAR_4->block_size / 50, 512);



  apr_off_t VAR_6 = FUNC_2(VAR_2);

  if (VAR_6 < VAR_5)
    {


      svn_fs_x__p2l_entry_t VAR_7;

      VAR_7.offset = VAR_2->pack_offset;
      VAR_7.size = VAR_6;
      VAR_7.type = VAR_0;
      VAR_7.fnv1_checksum = 0;
      VAR_7.item_count = 0;
      VAR_7.items = ((void*)0);

      FUNC_1(FUNC_4(VAR_2->pack_file, VAR_6, VAR_3));
      FUNC_1(FUNC_3
                  (VAR_2->proto_p2l_index, &VAR_7, VAR_3));
      VAR_2->pack_offset += VAR_6;
    }

  return VAR_1;
}
