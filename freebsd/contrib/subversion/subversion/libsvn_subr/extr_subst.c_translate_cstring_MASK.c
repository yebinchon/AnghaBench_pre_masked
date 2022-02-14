
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 char* FUNC_2 (int *,char const*,int ) ;
 int * FUNC_3 (int *,char const*,int *,int ,int *,int ,int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int *,char const*,int *) ;
 TYPE_1__* FUNC_8 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char **VAR_2,
                  svn_boolean_t *VAR_3,
                  const char *VAR_4,
                  const char *VAR_5,
                  svn_boolean_t VAR_6,
                  apr_hash_t *VAR_7,
                  svn_boolean_t VAR_8,
                  apr_pool_t *VAR_9)
{
  svn_stringbuf_t *VAR_10;
  svn_stream_t *VAR_11;
  apr_size_t VAR_12 = FUNC_4(VAR_4);


  if (! (VAR_5 || (VAR_7 && (FUNC_1(VAR_7) > 0))))
    {
      *VAR_2 = FUNC_2(VAR_9, VAR_4, VAR_12);
      return VAR_1;
    }


  VAR_10 = FUNC_8(VAR_9);
  VAR_11 = FUNC_6(VAR_10, VAR_9);

  if (VAR_3)
    *VAR_3 = VAR_0;


  VAR_11 = FUNC_3(VAR_11, VAR_5, VAR_3, VAR_6,
                                 VAR_7, VAR_8, VAR_9);


  FUNC_0(FUNC_7(VAR_11, VAR_4, &VAR_12));


  FUNC_0(FUNC_5(VAR_11));

  *VAR_2 = VAR_10->data;
  return VAR_1;
}
