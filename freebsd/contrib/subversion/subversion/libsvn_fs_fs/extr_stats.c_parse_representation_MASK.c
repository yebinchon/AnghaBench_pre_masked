
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


struct TYPE_18__ {scalar_t__ type; scalar_t__ base_item_index; int base_revision; int header_size; } ;
typedef TYPE_1__ svn_fs_fs__rep_header_t ;
typedef int svn_error_t ;
struct TYPE_19__ {int representations; TYPE_16__* rev_file; scalar_t__ offset; } ;
typedef TYPE_2__ revision_info_t ;
struct TYPE_20__ {scalar_t__ item_index; int size; int expanded_size; int revision; } ;
typedef TYPE_3__ representation_t ;
struct TYPE_21__ {int chain_length; int header_size; int size; scalar_t__ item_index; int expanded_size; int revision; } ;
typedef TYPE_4__ rep_stats_t ;
struct TYPE_22__ {int fs; } ;
typedef TYPE_5__ query_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_byte_t ;
struct TYPE_17__ {int stream; int file; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_16__*) ;
 int * VAR_1 ;
 TYPE_4__* FUNC_3 (int *,int) ;
 TYPE_4__* FUNC_4 (int*,TYPE_5__*,TYPE_2__**,int ,scalar_t__) ;
 int FUNC_5 (TYPE_1__**,int ,int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,scalar_t__*,int *) ;
 int FUNC_8 (int ,TYPE_4__**,int) ;

__attribute__((used)) static svn_error_t *
FUNC_9(rep_stats_t **VAR_3,
                     query_t *VAR_4,
                     representation_t *VAR_5,
                     revision_info_t *VAR_6,
                     apr_pool_t *VAR_7,
                     apr_pool_t *VAR_8)
{
  rep_stats_t *VAR_9;
  int VAR_10;




  VAR_9 = FUNC_4(&VAR_10, VAR_4, &VAR_6, VAR_5->revision,
                               VAR_5->item_index);
  if (!VAR_9)
    {



      VAR_9 = FUNC_3(VAR_7, sizeof(*VAR_9));
      VAR_9->revision = VAR_5->revision;
      VAR_9->expanded_size = VAR_5->expanded_size;
      VAR_9->item_index = VAR_5->item_index;
      VAR_9->size = VAR_5->size;




      if (!FUNC_6(VAR_4->fs))
        {
          svn_fs_fs__rep_header_t *VAR_11;
          apr_off_t VAR_12 = VAR_6->offset
                           + (apr_off_t)VAR_5->item_index;

          FUNC_2(VAR_6->rev_file);
          FUNC_1(FUNC_7(VAR_6->rev_file->file, VAR_0,
                                   &VAR_12, VAR_8));
          FUNC_1(FUNC_5(&VAR_11,
                                             VAR_6->rev_file->stream,
                                             VAR_8, VAR_8));

          VAR_9->header_size = VAR_11->header_size;


          if (VAR_11->type == VAR_2)
            {
              int VAR_13;
              rep_stats_t *VAR_14
                = FUNC_4(&VAR_13, VAR_4, ((void*)0),
                                      VAR_11->base_revision,
                                      VAR_11->base_item_index);

              VAR_9->chain_length = 1 + FUNC_0(VAR_14->chain_length,
                                             (apr_byte_t)0xfe);
            }
          else
            {
              VAR_9->chain_length = 1;
            }
        }

      FUNC_8(VAR_6->representations, &VAR_9, VAR_10);
    }

  *VAR_3 = VAR_9;

  return VAR_1;
}
