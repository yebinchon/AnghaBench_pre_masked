
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* data; int len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int dirsep ;
typedef int apr_size_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_1__*,char const*,int) ;

void
FUNC_5(svn_stringbuf_t *VAR_0,
                       const char *VAR_1)
{
  apr_size_t VAR_2 = FUNC_3(VAR_1);

  FUNC_1(FUNC_2(VAR_0->data, VAR_0->len));
  FUNC_1(FUNC_2(VAR_1, FUNC_3(VAR_1)));



  if ((! FUNC_0(VAR_0->data))
      && (! ((VAR_0->len == 1) && (*(VAR_0->data) == '/'))))
    {
      char VAR_3 = '/';
      FUNC_4(VAR_0, &VAR_3, sizeof(VAR_3));
    }

  FUNC_4(VAR_0, VAR_1, VAR_2);
}
