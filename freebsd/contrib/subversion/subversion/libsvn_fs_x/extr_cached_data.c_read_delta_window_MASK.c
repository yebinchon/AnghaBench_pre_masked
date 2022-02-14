
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_txdelta_window_t ;
typedef int svn_stream_t ;
typedef int svn_fs_x__revision_file_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_11__ {int change_set; } ;
struct TYPE_10__ {int chunk_index; scalar_t__ start; scalar_t__ current; scalar_t__ size; int ver; TYPE_5__ rep_id; TYPE_9__* sfile; scalar_t__ window_cache; } ;
typedef TYPE_1__ rep_state_t ;
typedef int apr_pool_t ;
typedef void* apr_off_t ;
typedef int apr_file_t ;
struct TYPE_12__ {int fs; int * rfile; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int *,int ,TYPE_5__*,int *,int *,int *,int *) ;
 int FUNC_7 (int ,TYPE_5__*,int *,int ,int *) ;
 int FUNC_8 (int **,TYPE_1__*,int,int*,int *,int *) ;
 int FUNC_9 (int *,TYPE_1__*,void*,int *) ;
 int * FUNC_10 (int ,int *,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int **,int *) ;
 int FUNC_13 (void**,int *) ;
 int FUNC_14 (int *,int *,void*) ;
 int FUNC_15 (int **,int *) ;
 int FUNC_16 (void**,int *,int *) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int **,int *,int ,int *) ;
 int FUNC_21 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_22(svn_txdelta_window_t **VAR_3, int VAR_4,
                  rep_state_t *VAR_5, apr_pool_t *VAR_6,
                  apr_pool_t *VAR_7)
{
  svn_boolean_t VAR_8;
  apr_off_t VAR_9;
  apr_off_t VAR_10;
  apr_pool_t *VAR_11;
  svn_stream_t *VAR_12;
  svn_fs_x__revision_file_t *VAR_13;
  svn_boolean_t VAR_14 = VAR_5->chunk_index == 0
                         && FUNC_11(VAR_5->rep_id.change_set)
                         && VAR_5->window_cache;

  FUNC_1(VAR_5->chunk_index <= VAR_4);

  FUNC_0(FUNC_7(VAR_5->sfile->fs, &VAR_5->rep_id, ((void*)0),
                          VAR_1, VAR_7));


  if (VAR_14)
    {
      FUNC_0(FUNC_8(VAR_3, VAR_5, VAR_4, &VAR_8,
                                VAR_6, VAR_7));
      if (VAR_8)
        return VAR_2;
    }


  FUNC_0(FUNC_3(VAR_5->sfile));
  VAR_13 = VAR_5->sfile->rfile;




  if (VAR_14)
    {
      FUNC_0(FUNC_6(((void*)0), VAR_5->sfile->fs, &VAR_5->rep_id, VAR_13, ((void*)0),
                         VAR_6, VAR_7));



      FUNC_0(FUNC_8(VAR_3, VAR_5, VAR_4, &VAR_8,
                                VAR_6, VAR_7));
      if (VAR_8)
        return VAR_2;
    }



  FUNC_0(FUNC_5(VAR_5, VAR_7));
  FUNC_0(FUNC_4(VAR_5, VAR_7));



  VAR_9 = VAR_5->start + VAR_5->current;
  FUNC_0(FUNC_14(VAR_13, ((void*)0), VAR_9));


  VAR_11 = FUNC_18(VAR_7);
  while (VAR_5->chunk_index < VAR_4)
    {
      apr_file_t *VAR_15;
      FUNC_17(VAR_11);

      FUNC_0(FUNC_12(&VAR_15, VAR_13));
      FUNC_0(FUNC_21(VAR_15, VAR_5->ver, VAR_11));
      VAR_5->chunk_index++;
      FUNC_0(FUNC_16(&VAR_9, VAR_15, VAR_11));

      VAR_5->current = VAR_9 - VAR_5->start;
      if (VAR_5->current >= VAR_5->size)
        return FUNC_10(VAR_0, ((void*)0),
                                FUNC_2("Reading one svndiff window read "
                                  "beyond the end of the "
                                  "representation"));
    }
  FUNC_19(VAR_11);


  FUNC_0(FUNC_15(&VAR_12, VAR_13));
  FUNC_0(FUNC_20(VAR_3, VAR_12, VAR_5->ver,
                                          VAR_6));
  FUNC_0(FUNC_13(&VAR_10, VAR_13));
  VAR_5->current = VAR_10 - VAR_5->start;
  if (VAR_5->current > VAR_5->size)
    return FUNC_10(VAR_0, ((void*)0),
                            FUNC_2("Reading one svndiff window read beyond "
                              "the end of the representation"));



  if (VAR_14)
    FUNC_0(FUNC_9(*VAR_3, VAR_5, VAR_9, VAR_7));

  return VAR_2;
}
