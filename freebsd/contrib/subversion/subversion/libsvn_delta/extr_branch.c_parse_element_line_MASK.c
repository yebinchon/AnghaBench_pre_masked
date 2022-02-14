
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 char* FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,char*,int*,char*,int*,int*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (int *,TYPE_1__**,char*,int*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(int *VAR_1,
                   svn_boolean_t *VAR_2,
                   int *VAR_3,
                   const char **VAR_4,
                   svn_stream_t *VAR_5,
                   apr_pool_t *VAR_6,
                   apr_pool_t *VAR_7)
{
  svn_stringbuf_t *VAR_8;
  svn_boolean_t VAR_9;
  char VAR_10[10];
  int VAR_11;
  int VAR_12;


  FUNC_0(FUNC_5(VAR_5, &VAR_8, "\n", &VAR_9, VAR_7));
  FUNC_1(!VAR_9);

  VAR_11 = FUNC_3(VAR_8->data, "e%d: %9s %d%n",
             VAR_1,
             VAR_10, VAR_3, &VAR_12);
  FUNC_1(VAR_11 >= 3);
  FUNC_1(VAR_8->data[VAR_12] == ' ');

  *VAR_4 = FUNC_2(VAR_6, VAR_8->data + VAR_12 + 1);
  *VAR_2 = (FUNC_4(VAR_10, "subbranch") == 0);

  if (FUNC_4(*VAR_4, "(null)") == 0)
    *VAR_4 = ((void*)0);
  else if (FUNC_4(*VAR_4, ".") == 0)
    *VAR_4 = "";

  return VAR_0;
}
