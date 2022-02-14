
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {size_t len; scalar_t__* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_15__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_16__ {scalar_t__ size; scalar_t__ fname; int member_0; } ;
typedef TYPE_3__ apr_finfo_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__*,int ,int *) ;
 char* FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int *,char*,scalar_t__*,int *) ;
 int FUNC_7 (int *,scalar_t__*,scalar_t__,size_t*,scalar_t__*,int *) ;
 int FUNC_8 (TYPE_1__*,char*,scalar_t__) ;
 TYPE_1__* FUNC_9 (scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_stringbuf_t **VAR_3,
                       const char *VAR_4,
                       apr_file_t *VAR_5,
                       svn_boolean_t VAR_6,
                       apr_pool_t *VAR_7)
{
  apr_size_t VAR_8;
  svn_error_t *VAR_9;
  svn_stringbuf_t *VAR_10 = ((void*)0);
  apr_size_t VAR_11 = VAR_2;
  char *VAR_12;



  if (VAR_6)
    {
      apr_finfo_t VAR_13 = { 0 };



      if (! FUNC_2(&VAR_13, VAR_0, VAR_5) && VAR_13.fname)
        {

          svn_boolean_t VAR_14;
          VAR_11 = (apr_size_t)VAR_13.size;
          VAR_10 = FUNC_9(VAR_11, VAR_7);
          FUNC_1(FUNC_7(VAR_5, VAR_10->data,
                                         VAR_11, &VAR_10->len,
                                         &VAR_14, VAR_7));
          VAR_10->data[VAR_10->len] = 0;

          *VAR_3 = VAR_10;
          return VAR_1;
        }
    }


  VAR_12 = FUNC_3(VAR_7, VAR_2);
  VAR_10 = FUNC_9(VAR_11, VAR_7);



  VAR_8 = VAR_2;
  VAR_9 = FUNC_6(VAR_5, VAR_12, &VAR_8, VAR_7);
  while (! VAR_9)
    {
      FUNC_8(VAR_10, VAR_12, VAR_8);
      VAR_8 = VAR_2;
      VAR_9 = FUNC_6(VAR_5, VAR_12, &VAR_8, VAR_7);
    }


  if (VAR_9 && !FUNC_0(VAR_9->apr_err))
    return FUNC_5(VAR_9);
  FUNC_4(VAR_9);

  *VAR_3 = VAR_10;
  return VAR_1;
}
