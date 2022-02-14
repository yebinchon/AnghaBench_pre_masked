
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int apr_size_t ;


 int FUNC_0 (void*,char const*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

void
FUNC_2(svn_stringbuf_t *VAR_0, const char *VAR_1,
                          apr_size_t VAR_2)
{
  apr_size_t VAR_3;
  void *VAR_4;

  if (!VAR_2)

    return;

  VAR_3 = VAR_0->len + VAR_2;


  FUNC_1(VAR_0, VAR_3);


  VAR_4 = (VAR_0->data + VAR_0->len);

  FUNC_0(VAR_4, VAR_1, VAR_2);
  VAR_0->len = VAR_3;

  VAR_0->data[VAR_0->len] = '\0';


}
