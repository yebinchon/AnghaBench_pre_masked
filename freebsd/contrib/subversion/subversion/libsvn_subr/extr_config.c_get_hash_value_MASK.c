
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ svn_boolean_t ;
typedef size_t apr_size_t ;
typedef int apr_hash_t ;


 void* FUNC_0 (int *,char const*,size_t) ;
 scalar_t__ FUNC_1 (char const) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*,size_t) ;

__attribute__((used)) static void *
FUNC_4(apr_hash_t *VAR_0,
               svn_stringbuf_t *VAR_1,
               const char *VAR_2,
               svn_boolean_t VAR_3)
{
  apr_size_t VAR_4;
  apr_size_t VAR_5 = FUNC_2(VAR_2);

  if (VAR_3)
    return FUNC_0(VAR_0, VAR_2, VAR_5);

  FUNC_3(VAR_1, VAR_5);
  for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4)
    VAR_1->data[VAR_4] = (char)FUNC_1(VAR_2[VAR_4]);

  return FUNC_0(VAR_0, VAR_1->data, VAR_5);
}
