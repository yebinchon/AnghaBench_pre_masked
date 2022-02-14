
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int number; int revision; } ;
struct TYPE_11__ {scalar_t__ fnv1_checksum; TYPE_2__ item; int type; scalar_t__ size; int offset; } ;
typedef TYPE_3__ svn_fs_fs__p2l_entry_t ;
typedef int svn_error_t ;
struct TYPE_12__ {int pack_offset; int proto_p2l_index; int pack_file; TYPE_1__* fs; } ;
typedef TYPE_4__ pack_context_t ;
struct TYPE_13__ {int block_size; } ;
typedef TYPE_5__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
struct TYPE_9__ {TYPE_5__* fsap_data; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,TYPE_3__*,int *) ;
 int FUNC_4 (int ,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(pack_context_t *VAR_4,
               apr_off_t VAR_5,
               apr_pool_t *VAR_6)
{
  fs_fs_data_t *VAR_7 = VAR_4->fs->fsap_data;



  const apr_off_t VAR_8 = FUNC_0(VAR_7->block_size / 50, 512);



  apr_off_t VAR_9 = FUNC_2(VAR_4);

  if (VAR_9 < VAR_5 && VAR_9 < VAR_8)
    {


      svn_fs_fs__p2l_entry_t VAR_10;

      VAR_10.offset = VAR_4->pack_offset;
      VAR_10.size = VAR_9;
      VAR_10.type = VAR_1;
      VAR_10.item.revision = VAR_2;
      VAR_10.item.number = VAR_0;
      VAR_10.fnv1_checksum = 0;

      FUNC_1(FUNC_4(VAR_4->pack_file, VAR_9, VAR_6));
      FUNC_1(FUNC_3(
                   VAR_4->proto_p2l_index, &VAR_10, VAR_6));
      VAR_4->pack_offset += VAR_9;
    }

  return VAR_3;
}
