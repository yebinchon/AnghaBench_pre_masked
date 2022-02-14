
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_12__ {scalar_t__ len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_13__ {TYPE_10__* rev_file; scalar_t__ offset; } ;
typedef TYPE_2__ revision_info_t ;
typedef int query_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
struct TYPE_11__ {int stream; int file; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_10__*) ;
 int * VAR_1 ;
 int FUNC_2 (int ,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_1__**,char*,int *,int *) ;
 int FUNC_7 (TYPE_1__*,char) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_stringbuf_t **VAR_2,
                  query_t *VAR_3,
                  apr_off_t VAR_4,
                  revision_info_t *VAR_5,
                  apr_pool_t *VAR_6,
                  apr_pool_t *VAR_7)
{
  svn_stringbuf_t *VAR_8 = FUNC_9(VAR_6);
  svn_stringbuf_t *VAR_9;
  svn_boolean_t VAR_10;

  apr_pool_t *VAR_11 = FUNC_4(VAR_7);


  FUNC_1(VAR_5->rev_file);

  VAR_4 += VAR_5->offset;
  FUNC_0(FUNC_2(VAR_5->rev_file->file, VAR_0,
                           &VAR_4, VAR_7));


  do
    {
      FUNC_3(VAR_11);

      FUNC_0(FUNC_6(VAR_5->rev_file->stream, &VAR_9,
                                  "\n", &VAR_10, VAR_11));
      FUNC_8(VAR_8, VAR_9);
      FUNC_7(VAR_8, '\n');
    }
  while (VAR_9->len > 0 && !VAR_10);


  *VAR_2 = VAR_8;

  FUNC_5(VAR_11);

  return VAR_1;
}
