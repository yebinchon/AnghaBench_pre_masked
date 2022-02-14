
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int svn_txdelta_window_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_12__ {int chunk_index; scalar_t__ start; scalar_t__ current; scalar_t__ size; int revision; int ver; TYPE_10__* sfile; int item_index; scalar_t__ raw_window_cache; } ;
typedef TYPE_1__ rep_state_t ;
typedef int apr_pool_t ;
typedef void* apr_off_t ;
struct TYPE_13__ {int stream; int file; } ;
struct TYPE_11__ {TYPE_7__* rfile; int fs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int * VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int *,int ,int ,int ,TYPE_7__*,int *,int *) ;
 int FUNC_8 (int ,int ,int ,int *,int ,int *) ;
 int FUNC_9 (int **,TYPE_1__*,int,scalar_t__*,int *,int *) ;
 int FUNC_10 (void**,TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,int *,void*,int *) ;
 int FUNC_12 (int *,TYPE_1__*,int *) ;
 int * FUNC_13 (int ,int *,int ) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int **,int ,int ,int *) ;
 int FUNC_18 (int ,int ,int *) ;
 scalar_t__ FUNC_19 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_20(svn_txdelta_window_t **VAR_3, int VAR_4,
                  rep_state_t *VAR_5, apr_pool_t *VAR_6,
                  apr_pool_t *VAR_7)
{
  svn_boolean_t VAR_8;
  apr_off_t VAR_9;
  apr_off_t VAR_10;
  apr_pool_t *VAR_11;

  FUNC_1(VAR_5->chunk_index <= VAR_4);

  FUNC_0(FUNC_8(VAR_5->sfile->fs, VAR_5->revision, VAR_5->item_index,
                         ((void*)0), VAR_1, VAR_7));


  FUNC_0(FUNC_9(VAR_3, VAR_5, VAR_4, &VAR_8,
                            VAR_6, VAR_7));
  if (VAR_8)
    return VAR_2;


  FUNC_0(FUNC_4(VAR_5->sfile));




  if ( VAR_5->chunk_index == 0
      && FUNC_2(VAR_5->revision)
      && FUNC_19(VAR_5->sfile->fs)
      && VAR_5->raw_window_cache)
    {
      FUNC_0(FUNC_7(((void*)0), VAR_5->sfile->fs, VAR_5->revision, VAR_5->item_index,
                         VAR_5->sfile->rfile, VAR_6, VAR_7));



      FUNC_0(FUNC_9(VAR_3, VAR_5, VAR_4, &VAR_8,
                                VAR_6, VAR_7));
      if (VAR_8)
        return VAR_2;
    }



  FUNC_0(FUNC_6(VAR_5, VAR_7));
  FUNC_0(FUNC_5(VAR_5, VAR_7));



  VAR_9 = VAR_5->start + VAR_5->current;
  FUNC_0(FUNC_11(VAR_5, ((void*)0), VAR_9, VAR_7));


  VAR_11 = FUNC_15(VAR_7);
  while (VAR_5->chunk_index < VAR_4)
    {
      FUNC_14(VAR_11);
      FUNC_0(FUNC_18(VAR_5->sfile->rfile->file,
                                              VAR_5->ver, VAR_11));
      VAR_5->chunk_index++;
      FUNC_0(FUNC_10(&VAR_9, VAR_5, VAR_11));
      VAR_5->current = VAR_9 - VAR_5->start;
      if (VAR_5->current >= VAR_5->size)
        return FUNC_13(VAR_0, ((void*)0),
                                FUNC_3("Reading one svndiff window read "
                                  "beyond the end of the "
                                  "representation"));
    }
  FUNC_16(VAR_11);


  FUNC_0(FUNC_17(VAR_3, VAR_5->sfile->rfile->stream,
                                          VAR_5->ver, VAR_6));
  FUNC_0(FUNC_10(&VAR_10, VAR_5, VAR_7));
  VAR_5->current = VAR_10 - VAR_5->start;
  if (VAR_5->current > VAR_5->size)
    return FUNC_13(VAR_0, ((void*)0),
                            FUNC_3("Reading one svndiff window read beyond "
                              "the end of the representation"));



  if (FUNC_2(VAR_5->revision))
    FUNC_0(FUNC_12(*VAR_3, VAR_5, VAR_7));

  return VAR_2;
}
