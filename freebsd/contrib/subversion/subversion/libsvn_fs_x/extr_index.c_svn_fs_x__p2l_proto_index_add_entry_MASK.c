
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; scalar_t__ size; size_t type; size_t fnv1_checksum; size_t item_count; TYPE_2__* items; } ;
typedef TYPE_1__ svn_fs_x__p2l_entry_t ;
struct TYPE_5__ {scalar_t__ change_set; size_t number; } ;
typedef TYPE_2__ svn_fs_x__id_t ;
typedef int svn_error_t ;
typedef size_t apr_uint64_t ;
typedef int apr_pool_t ;
typedef size_t apr_int32_t ;
typedef int apr_file_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (int *,size_t,int *) ;

svn_error_t *
FUNC_3(apr_file_t *VAR_2,
                                    const svn_fs_x__p2l_entry_t *VAR_3,
                                    apr_pool_t *VAR_4)
{
  apr_uint64_t VAR_5;
  apr_int32_t VAR_6;







  FUNC_1(VAR_3->offset >= 0);
  FUNC_1(VAR_3->size >= 0);




  FUNC_0(FUNC_2(VAR_2, VAR_3->offset,
                                      VAR_4));
  FUNC_0(FUNC_2(VAR_2, VAR_3->size,
                                      VAR_4));
  FUNC_0(FUNC_2(VAR_2, VAR_3->type,
                                      VAR_4));
  FUNC_0(FUNC_2(VAR_2, VAR_3->fnv1_checksum,
                                      VAR_4));
  FUNC_0(FUNC_2(VAR_2, VAR_3->item_count,
                                      VAR_4));


  for (VAR_6 = 0; VAR_6 < VAR_3->item_count; ++VAR_6)
    {
      const svn_fs_x__id_t *VAR_7 = &VAR_3->items[VAR_6];







      FUNC_1( VAR_7->change_set >= 0
                     || VAR_7->change_set == VAR_0);


      VAR_5 = VAR_7->change_set == VAR_0
               ? 0
               : ((apr_uint64_t)VAR_7->change_set + 1);

      FUNC_0(FUNC_2(VAR_2, VAR_5,
                                          VAR_4));
      FUNC_0(FUNC_2(VAR_2, VAR_7->number,
                                          VAR_4));
    }


  FUNC_0(FUNC_2(VAR_2,
                                      VAR_3->offset + VAR_3->size,
                                      VAR_4));

  return VAR_1;
}
