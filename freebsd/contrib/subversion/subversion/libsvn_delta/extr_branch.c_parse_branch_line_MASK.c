
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int FUNC_2 (int ,char*,char*,int*,int*) ;
 int FUNC_3 (int *,TYPE_1__**,char*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(char *VAR_1,
                  int *VAR_2,
                  int *VAR_3,
                  svn_stream_t *VAR_4,
                  apr_pool_t *VAR_5,
                  apr_pool_t *VAR_6)
{
  svn_stringbuf_t *VAR_7;
  svn_boolean_t VAR_8;
  int VAR_9;


  FUNC_0(FUNC_3(VAR_4, &VAR_7, "\n", &VAR_8, VAR_6));
  FUNC_1(!VAR_8);

  VAR_9 = FUNC_2(VAR_7->data, "%s root-eid %d num-eids %d",
             VAR_1, VAR_2, VAR_3);
  FUNC_1(VAR_9 == 3);

  return VAR_0;
}
