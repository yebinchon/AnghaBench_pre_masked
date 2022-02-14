
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ packed_len; scalar_t__ target_len; } ;
typedef TYPE_2__ window_sizes_t ;
struct TYPE_13__ {scalar_t__ tview_len; } ;
typedef TYPE_3__ svn_txdelta_window_t ;
typedef int svn_stream_t ;
typedef int svn_fs_x__revision_file_t ;
typedef int svn_fs_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_14__ {int current; int size; int start; int chunk_index; TYPE_1__* sfile; int ver; } ;
typedef TYPE_4__ rep_state_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
struct TYPE_11__ {int * rfile; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__**,TYPE_4__*,scalar_t__*,int *) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*,int,int *) ;
 int * FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int*,int *) ;
 int FUNC_6 (int *,int*,int) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__**,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_filesize_t *VAR_3,
              svn_fs_t *VAR_4,
              rep_state_t *VAR_5,
              apr_off_t VAR_6,
              apr_pool_t *VAR_7)
{
  apr_pool_t *VAR_8 = FUNC_9(VAR_7);
  *VAR_3 = 0;

  while (VAR_5->current < VAR_5->size)
    {
      svn_boolean_t VAR_9 = VAR_0;
      window_sizes_t *VAR_10;

      FUNC_8(VAR_8);
      if (VAR_6 != -1 && VAR_5->start + VAR_5->current >= VAR_6)
        {
          FUNC_10(VAR_8);
          return VAR_2;
        }



      FUNC_0(FUNC_2(&VAR_10, VAR_5, &VAR_9,
                                      VAR_8));
      if (VAR_9)
        {
          *VAR_3 += VAR_10->target_len;
          VAR_5->current += VAR_10->packed_len;
        }
      else
        {
          svn_txdelta_window_t *VAR_11;
          svn_fs_x__revision_file_t *VAR_12 = VAR_5->sfile->rfile;
          svn_stream_t *VAR_13;
          apr_off_t VAR_14 = VAR_5->start + VAR_5->current;
          apr_off_t VAR_15;
          apr_off_t VAR_16;


          FUNC_0(FUNC_7(&VAR_13, VAR_12));
          FUNC_0(FUNC_6(VAR_12, &VAR_16, VAR_14));
          FUNC_0(FUNC_11(&VAR_11, VAR_13, VAR_5->ver,
                                                  VAR_8));


          *VAR_3 += VAR_11->tview_len;


          FUNC_0(FUNC_5(&VAR_15, VAR_5->sfile->rfile));
          VAR_5->current = VAR_15 - VAR_5->start;
          if (VAR_5->current > VAR_5->size)
            return FUNC_4(VAR_1, ((void*)0),
                          FUNC_1("Reading one svndiff window read beyond "
                                      "the end of the representation"));



          if (!VAR_9)
            FUNC_0(FUNC_3(VAR_11, VAR_5, VAR_14, VAR_8));
        }

      VAR_5->chunk_index++;
    }

  FUNC_10(VAR_8);

  return VAR_2;
}
