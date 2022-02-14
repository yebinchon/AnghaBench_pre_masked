
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* data; int len; } ;
typedef TYPE_2__ svn_string_t ;
struct TYPE_9__ {TYPE_1__* prefix; int data; } ;
typedef TYPE_3__ svn_prefix_string__t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int length; TYPE_3__ key; } ;


 char* FUNC_0 (int *,int) ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ) ;

svn_string_t *
FUNC_4(const svn_prefix_string__t *VAR_0,
                          apr_pool_t *VAR_1)
{
  apr_size_t VAR_2 = FUNC_3(VAR_0->data);
  apr_size_t VAR_3 = VAR_0->prefix->length + VAR_2;
  char *VAR_4 = FUNC_0(VAR_1, VAR_3 + 1);

  svn_string_t *VAR_5 = FUNC_1(VAR_1, sizeof(*VAR_5));
  VAR_5->data = VAR_4;
  VAR_5->len = VAR_3;
  VAR_4[VAR_3] = '\0';

  while (VAR_0->prefix)
    {
      FUNC_2(VAR_4 + VAR_0->prefix->length, VAR_0->data, VAR_3 - VAR_0->prefix->length);
      VAR_3 = VAR_0->prefix->length;
      VAR_0 = &VAR_0->prefix->key;
    }

  return VAR_5;
}
