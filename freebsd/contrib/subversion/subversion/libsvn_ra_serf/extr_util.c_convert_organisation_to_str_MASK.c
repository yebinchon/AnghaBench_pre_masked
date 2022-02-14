
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 char* FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static char *
FUNC_4(apr_hash_t *VAR_0, apr_pool_t *VAR_1)
{
  const char *VAR_2 = FUNC_0(VAR_0, "CN");
  const char *VAR_3 = FUNC_0(VAR_0, "OU");
  const char *VAR_4 = FUNC_0(VAR_0, "O");
  const char *VAR_5 = FUNC_0(VAR_0, "L");
  const char *VAR_6 = FUNC_0(VAR_0, "ST");
  const char *VAR_7 = FUNC_0(VAR_0, "C");
  const char *VAR_8 = FUNC_0(VAR_0, "E");
  svn_stringbuf_t *VAR_9 = FUNC_3(VAR_1);

  if (VAR_2)
    {
      FUNC_1(VAR_9, VAR_2);
      FUNC_1(VAR_9, ", ");
    }

  if (VAR_3)
    {
      FUNC_1(VAR_9, VAR_3);
      FUNC_1(VAR_9, ", ");
    }

  if (VAR_4)
    {
      FUNC_1(VAR_9, VAR_4);
      FUNC_1(VAR_9, ", ");
    }

  if (VAR_5)
    {
      FUNC_1(VAR_9, VAR_5);
      FUNC_1(VAR_9, ", ");
    }

  if (VAR_6)
    {
      FUNC_1(VAR_9, VAR_6);
      FUNC_1(VAR_9, ", ");
    }

  if (VAR_7)
    {
      FUNC_1(VAR_9, VAR_7);
      FUNC_1(VAR_9, ", ");
    }


  FUNC_2(VAR_9, 2);

  if (VAR_8)
    {
      FUNC_1(VAR_9, "(");
      FUNC_1(VAR_9, VAR_8);
      FUNC_1(VAR_9, ")");
    }

  return VAR_9->data;
}
