
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_subst_eol_style_t ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_2 (int *,int ) ;
 int VAR_6 ;
 int FUNC_3 (int *,int *,int ,void*,int *) ;
 int FUNC_4 (int **,char const*,int *,int *) ;
 int FUNC_5 (int **,char const**,int *,int ,int *,int *) ;
 int FUNC_6 (int **,int ,int ,char*,char*,int ,char*,int *) ;
 int FUNC_7 (int *,char const**,int ) ;
 int VAR_7 ;
 int * FUNC_8 (int *,char const*,int ,int *,int ,int *) ;
 int FUNC_9 (int ,char const*,int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_10(const char **VAR_8,
                       apr_hash_t *VAR_9,
                       svn_cancel_func_t VAR_10,
                       void *VAR_11,
                       apr_pool_t *VAR_12,
                       apr_pool_t *VAR_13)
{
  const svn_string_t *VAR_14;
  const svn_string_t *VAR_15;
  svn_subst_eol_style_t VAR_16;
  const char *VAR_17;
  apr_hash_t *VAR_18;
  svn_stream_t *VAR_19;
  svn_stream_t *VAR_20;




  VAR_14 = FUNC_2(VAR_9, VAR_3);
  VAR_15 = FUNC_2(VAR_9, VAR_4);

  if (VAR_14)
    FUNC_7(&VAR_16, &VAR_17, VAR_14->data);
  else
    {
      VAR_17 = ((void*)0);
      VAR_16 = VAR_7;
    }

  if (VAR_15)
    FUNC_1(FUNC_6(&VAR_18, VAR_15->data,
                                      FUNC_0(VAR_1),
                                      "", "", 0, "", VAR_13));
  else
    VAR_18 = ((void*)0);

  if (!FUNC_9(VAR_16, VAR_17, VAR_18, VAR_0, VAR_0))
    return VAR_2;

  FUNC_1(FUNC_4(&VAR_19, *VAR_8,
                                    VAR_13, VAR_13));

  FUNC_1(FUNC_5(&VAR_20, VAR_8, ((void*)0),
                                  VAR_6,
                                  VAR_12, VAR_13));

  VAR_20 = FUNC_8(VAR_20, VAR_17, VAR_5 ,
                                    VAR_18, VAR_0 ,
                                    VAR_13);

  FUNC_1(FUNC_3(VAR_19, VAR_20, VAR_10, VAR_11,
                           VAR_13));

  return VAR_2;
}
