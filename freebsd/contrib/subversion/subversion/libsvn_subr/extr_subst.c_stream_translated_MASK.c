
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_boolean_t ;
struct translated_stream_baton {void* buf; void* iterpool; scalar_t__ readbuf_off; int readbuf; int written; void* out_baton; void* in_baton; int * stream; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,void const**,int *,void**) ;
 void* FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,void const*) ;
 void* FUNC_7 (char const*,int *,int ,int *,int ,int *) ;
 int FUNC_8 (int *,char*,int ) ;
 void* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (struct translated_stream_baton*,int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (void*,int *) ;
 int FUNC_19 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static svn_stream_t *
FUNC_20(svn_stream_t *VAR_7,
                  const char *VAR_8,
                  svn_boolean_t *VAR_9,
                  svn_boolean_t VAR_10,
                  apr_hash_t *VAR_11,
                  svn_boolean_t VAR_12,
                  apr_pool_t *VAR_13)
{
  struct translated_stream_baton *VAR_14
    = FUNC_5(VAR_13, sizeof(*VAR_14));
  svn_stream_t *VAR_15 = FUNC_11(VAR_14, VAR_13);



  if (VAR_8)
    VAR_8 = FUNC_6(VAR_13, VAR_8);
  if (VAR_11)
    {
      if (FUNC_0(VAR_11) == 0)
        VAR_11 = ((void*)0);
      else
        {

          apr_hash_t *VAR_16 = FUNC_2(VAR_13);
          apr_hash_index_t *VAR_17;
          apr_pool_t *VAR_18;

          VAR_18 = FUNC_9(VAR_13);
          for (VAR_17 = FUNC_1(VAR_18, VAR_11);
               VAR_17; VAR_17 = FUNC_3(VAR_17))
            {
              const void *VAR_19;
              void *VAR_20;

              FUNC_4(VAR_17, &VAR_19, ((void*)0), &VAR_20);
              FUNC_8(VAR_16, FUNC_6(VAR_13, VAR_19),
                            FUNC_18(VAR_20, VAR_13));
            }
          FUNC_10(VAR_18);

          VAR_11 = VAR_16;
        }
    }


  VAR_14->stream = VAR_7;
  VAR_14->in_baton
    = FUNC_7(VAR_8, VAR_9, VAR_10, VAR_11,
                               VAR_12, VAR_13);
  VAR_14->out_baton
    = FUNC_7(VAR_8, VAR_9, VAR_10, VAR_11,
                               VAR_12, VAR_13);
  VAR_14->written = VAR_0;
  VAR_14->readbuf = FUNC_19(VAR_13);
  VAR_14->readbuf_off = 0;
  VAR_14->iterpool = FUNC_9(VAR_13);
  VAR_14->buf = FUNC_5(VAR_13, VAR_1);


  FUNC_14(VAR_15, ((void*)0) ,
                       VAR_4);
  FUNC_16(VAR_15, VAR_6);
  FUNC_12(VAR_15, VAR_2);
  if (FUNC_17(VAR_7))
    {
      FUNC_13(VAR_15, VAR_3);
      FUNC_15(VAR_15, VAR_5);
    }

  return VAR_15;
}
