
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int member_0; } ;
typedef TYPE_4__ window_cache_key_t ;
typedef int svn_fs_t ;
struct TYPE_18__ {int len; char* data; } ;
struct TYPE_20__ {int end_offset; int ver; TYPE_3__ window; } ;
typedef TYPE_5__ svn_fs_fs__raw_cached_window_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_21__ {int current; int size; int chunk_index; int raw_window_cache; int ver; TYPE_2__* sfile; int start; int window_cache; } ;
typedef TYPE_6__ rep_state_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
struct TYPE_17__ {TYPE_1__* rfile; } ;
struct TYPE_16__ {int file; int stream; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_6__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_4 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int *,int,int *) ;
 int FUNC_6 (void**,scalar_t__*,int ,TYPE_4__*,int ,int *,int *) ;
 int FUNC_7 (int ,TYPE_4__*,TYPE_5__*,int *) ;
 int * FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int ,char*,int,int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(svn_fs_t *VAR_5,
              rep_state_t *VAR_6,
              apr_off_t VAR_7,
              apr_pool_t *VAR_8)
{
  apr_pool_t *VAR_9 = FUNC_11(VAR_8);

  FUNC_0(FUNC_3(VAR_6, VAR_9));

  while (VAR_6->current < VAR_6->size)
    {
      apr_off_t VAR_10;
      svn_boolean_t VAR_11 = VAR_0;
      window_cache_key_t VAR_12 = { 0 };

      FUNC_10(VAR_9);

      if (VAR_7 != -1 && VAR_6->start + VAR_6->current >= VAR_7)
        {
          FUNC_12(VAR_9);
          return VAR_2;
        }




      FUNC_0(FUNC_6((void **) &VAR_10, &VAR_11,
                                     VAR_6->raw_window_cache,
                                     FUNC_4(&VAR_12, VAR_6),
                                     VAR_3, ((void*)0),
                                     VAR_9));
      if (! VAR_11)
        FUNC_0(FUNC_6((void **) &VAR_10, &VAR_11,
                                       VAR_6->window_cache, &VAR_12,
                                       VAR_4, ((void*)0),
                                       VAR_9));

      if (VAR_11)
        {
          VAR_6->current = VAR_10;
        }
      else
        {

          svn_fs_fs__raw_cached_window_t VAR_13;
          apr_off_t VAR_14 = VAR_6->start + VAR_6->current;
          apr_size_t VAR_15;
          char *VAR_16;


          FUNC_0(FUNC_5(VAR_6, ((void*)0), VAR_14, VAR_9));
          FUNC_0(FUNC_13(&VAR_15,
                                                   VAR_6->sfile->rfile->stream,
                                                   VAR_9));


          VAR_16 = FUNC_2(VAR_9, VAR_15 + 1);
          FUNC_0(FUNC_5(VAR_6, ((void*)0), VAR_14, VAR_9));
          FUNC_0(FUNC_9(VAR_6->sfile->rfile->file, VAR_16,
                                         VAR_15, ((void*)0), ((void*)0), VAR_9));
          VAR_16[VAR_15] = 0;


          VAR_6->current += VAR_15;


          VAR_13.end_offset = VAR_6->current;
          VAR_13.window.len = VAR_15;
          VAR_13.window.data = VAR_16;
          VAR_13.ver = VAR_6->ver;


          FUNC_0(FUNC_7(VAR_6->raw_window_cache, &VAR_12, &VAR_13,
                                 VAR_9));
        }

      if (VAR_6->current > VAR_6->size)
        return FUNC_8(VAR_1, ((void*)0),
                                FUNC_1("Reading one svndiff window read beyond "
                                            "the end of the representation"));

      VAR_6->chunk_index++;
    }

  FUNC_12(VAR_9);
  return VAR_2;
}
