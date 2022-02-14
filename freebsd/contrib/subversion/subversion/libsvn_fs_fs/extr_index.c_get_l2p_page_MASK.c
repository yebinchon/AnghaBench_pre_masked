
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
struct TYPE_8__ {int l2p_stream; } ;
typedef TYPE_1__ svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
struct TYPE_9__ {scalar_t__ offset; int entry_count; scalar_t__ size; } ;
typedef TYPE_2__ l2p_page_table_entry_t ;
struct TYPE_10__ {int entry_count; scalar_t__* offsets; } ;
typedef TYPE_3__ l2p_page_t ;
typedef scalar_t__ apr_uint64_t ;
typedef size_t apr_uint32_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int * FUNC_8 (int ,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_9(l2p_page_t **VAR_2,
             svn_fs_fs__revision_file_t *VAR_3,
             svn_fs_t *VAR_4,
             svn_revnum_t VAR_5,
             l2p_page_table_entry_t *VAR_6,
             apr_pool_t *VAR_7)
{
  apr_uint32_t VAR_8;
  l2p_page_t *VAR_9 = FUNC_2(VAR_7, sizeof(*VAR_9));
  apr_uint64_t VAR_10 = 0;


  FUNC_0(FUNC_3(VAR_3, VAR_4, VAR_5));
  FUNC_7(VAR_3->l2p_stream, VAR_6->offset);


  VAR_9->entry_count = VAR_6->entry_count;
  VAR_9->offsets = FUNC_2(VAR_7, VAR_9->entry_count
                                           * sizeof(*VAR_9->offsets));


  for (VAR_8 = 0; VAR_8 < VAR_9->entry_count; ++VAR_8)
    {
      apr_uint64_t VAR_11 = 0;
      FUNC_0(FUNC_5(&VAR_11, VAR_3->l2p_stream));
      VAR_10 += FUNC_4(VAR_11);
      VAR_9->offsets[VAR_8] = VAR_10 - 1;
    }



  if ( FUNC_6(VAR_3->l2p_stream)
      != VAR_6->offset + VAR_6->size)
    return FUNC_8(VAR_0, ((void*)0),
                FUNC_1("L2P actual page size does not match page table value."));

  *VAR_2 = VAR_9;

  return VAR_1;
}
