
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef void* svn_node_kind_t ;
typedef int svn_fs_x__txn_id_t ;
struct TYPE_20__ {int number; int change_set; } ;
struct TYPE_22__ {TYPE_1__ id; } ;
typedef TYPE_3__ svn_fs_x__representation_t ;
struct TYPE_23__ {TYPE_3__* data_rep; int noderev_id; } ;
typedef TYPE_4__ svn_fs_x__noderev_t ;
typedef int svn_fs_x__id_t ;
struct TYPE_24__ {char const* name; void* kind; int id; } ;
typedef TYPE_5__ svn_fs_x__dirent_t ;
struct TYPE_25__ {scalar_t__ txn_filesize; int * entries; } ;
typedef TYPE_6__ svn_fs_x__dir_data_t ;
struct TYPE_26__ {int dir_cache; } ;
typedef TYPE_7__ svn_fs_x__data_t ;
struct TYPE_27__ {TYPE_7__* fsap_data; } ;
typedef TYPE_8__ svn_fs_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_28__ {char const* name; TYPE_2__* new_entry; scalar_t__ txn_filesize; } ;
typedef TYPE_9__ replace_baton_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
typedef int apr_array_header_t ;
struct TYPE_21__ {char const* name; int id; void* kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (void**,scalar_t__*,int ,int const*,int ,int *,int *) ;
 int FUNC_3 (int ,int const*,TYPE_6__*,int *) ;
 int FUNC_4 (int ,int const*,int ,TYPE_9__*,int *) ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (TYPE_8__*,int *,int *,int *) ;
 int FUNC_9 (TYPE_8__*,TYPE_4__*,int *) ;
 int FUNC_10 (int **,TYPE_8__*,TYPE_4__*,int *,int *) ;
 int VAR_9 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int **,char const*,int,int ,int *) ;
 int FUNC_14 (scalar_t__*,int *,int *) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int *,int ,int *) ;
 int FUNC_19 (int *,int *,int *) ;
 int FUNC_20 (TYPE_5__*,int *,int *) ;

svn_error_t *
FUNC_21(svn_fs_t *VAR_10,
                    svn_fs_x__txn_id_t VAR_11,
                    svn_fs_x__noderev_t *VAR_12,
                    const char *VAR_13,
                    const svn_fs_x__id_t *VAR_14,
                    svn_node_kind_t VAR_15,
                    apr_pool_t *VAR_16,
                    apr_pool_t *VAR_17)
{
  svn_fs_x__representation_t *VAR_18 = VAR_12->data_rep;
  const char *VAR_19
    = FUNC_8(VAR_10, &VAR_12->noderev_id,
                                       VAR_17, VAR_17);
  apr_file_t *VAR_20;
  svn_stream_t *VAR_21;
  svn_filesize_t VAR_22;
  svn_fs_x__data_t *VAR_23 = VAR_10->fsap_data;
  apr_pool_t *VAR_24 = FUNC_16(VAR_17);
  const svn_fs_x__id_t *VAR_25 = &(VAR_12->noderev_id);
  svn_fs_x__dirent_t VAR_26;

  if (!VAR_18 || !FUNC_7(VAR_18->id.change_set))
    {
      apr_array_header_t *VAR_27;
      svn_fs_x__dir_data_t VAR_28;



      FUNC_0(FUNC_10(&VAR_27, VAR_10, VAR_12,
                                         VAR_24, VAR_24));
      FUNC_0(FUNC_13(&VAR_20, VAR_19,
                               VAR_4 | VAR_2 | VAR_1,
                               VAR_3, VAR_17));
      VAR_21 = FUNC_18(VAR_20, VAR_7, VAR_17);
      FUNC_0(FUNC_19(VAR_27, VAR_21, VAR_24));



      if (!VAR_18)
        {
          VAR_18 = FUNC_1(VAR_16, sizeof(*VAR_18));
          VAR_12->data_rep = VAR_18;
        }


      VAR_18->id.change_set = FUNC_5(VAR_11);
      VAR_18->id.number = VAR_5;


      FUNC_0(FUNC_9(VAR_10, VAR_12, VAR_24));





      FUNC_0(FUNC_12(VAR_20, VAR_24));


      FUNC_0(FUNC_14(&VAR_22, VAR_20, VAR_24));


      VAR_28.entries = VAR_27;
      VAR_28.txn_filesize = VAR_22;
      FUNC_0(FUNC_3(VAR_23->dir_cache, VAR_25, &VAR_28, VAR_24));

      FUNC_15(VAR_24);
    }
  else
    {
      svn_boolean_t VAR_29;
      svn_filesize_t VAR_30;


      FUNC_0(FUNC_13(&VAR_20, VAR_19, VAR_4 | VAR_0,
                               VAR_3, VAR_24));
      VAR_21 = FUNC_18(VAR_20, VAR_7, VAR_24);
      FUNC_0(FUNC_2((void **)&VAR_30, &VAR_29,
                                     VAR_23->dir_cache, VAR_25,
                                     VAR_8,
                                     ((void*)0), VAR_24));



      if (VAR_29)
        {
          FUNC_0(FUNC_14(&VAR_22, VAR_20, VAR_24));

          if (VAR_30 != VAR_22)
            FUNC_0(FUNC_3(VAR_23->dir_cache, VAR_25, ((void*)0), VAR_24));
        }
    }



  if (VAR_14)
    VAR_26.id = *VAR_14;
  else
    FUNC_6(&VAR_26.id);

  VAR_26.name = VAR_13;
  VAR_26.kind = VAR_15;

  FUNC_0(FUNC_20(&VAR_26, VAR_21, VAR_24));


  FUNC_0(FUNC_12(VAR_20, VAR_24));


  FUNC_0(FUNC_14(&VAR_22, VAR_20, VAR_24));


  FUNC_0(FUNC_11(VAR_20, VAR_24));
  FUNC_15(VAR_24);


    {

      replace_baton_t VAR_31;

      VAR_31.name = VAR_13;
      VAR_31.new_entry = ((void*)0);
      VAR_31.txn_filesize = VAR_22;

      if (VAR_14)
        {
          VAR_31.new_entry = FUNC_1(VAR_24, sizeof(*VAR_31.new_entry));
          VAR_31.new_entry->name = VAR_13;
          VAR_31.new_entry->kind = VAR_15;
          VAR_31.new_entry->id = *VAR_14;
        }


      FUNC_0(FUNC_4(VAR_23->dir_cache, VAR_25,
                                     VAR_9, &VAR_31,
                                     VAR_24));
    }

  FUNC_17(VAR_24);
  return VAR_6;
}
