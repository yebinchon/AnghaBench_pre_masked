
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_8__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ,int *,int ,int ) ;
 int * FUNC_4 (int *,TYPE_1__**,int *,scalar_t__,int ,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__ const**,int *,char const*,TYPE_1__ const*,int *,int *) ;
 int FUNC_7 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_1__ const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_8 (int **,int *,int *,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_stream_t **VAR_4,
                                const svn_checksum_t **VAR_5,
                                svn_checksum_t **VAR_6,
                                svn_wc__db_t *VAR_7,
                                const char *VAR_8,
                                apr_pool_t *VAR_9,
                                apr_pool_t *VAR_10)
{
  svn_stream_t *VAR_11;

  FUNC_0(FUNC_8(&VAR_11, ((void*)0), VAR_7, VAR_8,
                                        VAR_9, VAR_10));
  if (VAR_11 == ((void*)0))
    {
      VAR_11 = FUNC_5(VAR_9);
      *VAR_5 = ((void*)0);
      *VAR_6 = ((void*)0);
    }
  else
    {
      const svn_checksum_t *VAR_12;

      FUNC_0(FUNC_7(((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_12,
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   VAR_7, VAR_8,
                                   VAR_9, VAR_10));
      if (VAR_12 == ((void*)0))
        return FUNC_3(VAR_0, ((void*)0),
                                 FUNC_1("Pristine checksum for file '%s' is missing"),
                                 FUNC_2(VAR_8,
                                                        VAR_10));
      if (VAR_12->kind != VAR_3)
        FUNC_0(FUNC_6(&VAR_12, VAR_7, VAR_8,
                                            VAR_12,
                                            VAR_9, VAR_10));
      *VAR_5 = VAR_12;



      VAR_11 = FUNC_4(VAR_11, VAR_6,
                                            ((void*)0), VAR_3, VAR_2,
                                            VAR_9);
    }

  *VAR_4 = VAR_11;
  return VAR_1;
}
