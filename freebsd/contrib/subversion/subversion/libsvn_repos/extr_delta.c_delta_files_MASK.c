
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_stream_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
struct context {int * source_root; int target_root; scalar_t__ text_deltas; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct context*,char const*,char const*,int ,void*,int *) ;
 int FUNC_3 (struct context*,void*,char const*,int *,int *) ;
 int VAR_3 ;
 char* FUNC_4 (int *,int *) ;
 int FUNC_5 (scalar_t__*,int ,char const*,int *,char const*,int *) ;
 int FUNC_6 (int **,int ,int *,char const*,scalar_t__,int *) ;
 int FUNC_7 (int **,int *,char const*,int ,char const*,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(struct context *VAR_4,
            void *VAR_5,
            const char *VAR_6,
            const char *VAR_7,
            apr_pool_t *VAR_8)
{
  apr_pool_t *VAR_9;
  svn_boolean_t VAR_10 = VAR_1;

  FUNC_1(VAR_7);


  VAR_9 = FUNC_8(VAR_8);


  FUNC_0(FUNC_2(VAR_4, VAR_6, VAR_7,
                          VAR_2, VAR_5, VAR_9));

  if (VAR_6)
    {
      FUNC_0(FUNC_5(&VAR_10,
                                        VAR_4->target_root, VAR_7,
                                        VAR_4->source_root, VAR_6,
                                        VAR_9));
    }
  else
    {


    }



  if (VAR_10)
    {
      svn_txdelta_stream_t *VAR_11 = ((void*)0);
      svn_checksum_t *VAR_12;
      const char *VAR_13 = ((void*)0);

      if (VAR_4->text_deltas)
        {


          FUNC_0(FUNC_7
                  (&VAR_11,
                   VAR_6 ? VAR_4->source_root : ((void*)0),
                   VAR_6 ? VAR_6 : ((void*)0),
                   VAR_4->target_root, VAR_7, VAR_9));
        }

      if (VAR_6)
        {
          FUNC_0(FUNC_6(&VAR_12, VAR_3,
                                       VAR_4->source_root, VAR_6, VAR_1,
                                       VAR_9));

          VAR_13 = FUNC_4(VAR_12,
                                                      VAR_9);
        }

      FUNC_0(FUNC_3(VAR_4, VAR_5, VAR_13,
                              VAR_11, VAR_9));
    }


  FUNC_9(VAR_9);

  return VAR_0;
}
