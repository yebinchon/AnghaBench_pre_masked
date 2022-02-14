
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int *,int ,char const*,char const*) ;
 int FUNC_4 (int ,int *,char*) ;
 int FUNC_5 (char const*) ;
 TYPE_1__* FUNC_6 (char const*,int *) ;
 int FUNC_7 (TYPE_1__*) ;

void
FUNC_8(const char *VAR_2, const char *VAR_3,
                               apr_pool_t *VAR_4)
{
  svn_stringbuf_t *VAR_5;

  if (!FUNC_5(VAR_2))
    return;

  VAR_5 = FUNC_6(VAR_3, VAR_4);
  FUNC_7(VAR_5);

  if (VAR_5->data[0] == '\0'
      || FUNC_1(VAR_5->data, "0") == 0
      || FUNC_1(VAR_5->data, "no") == 0
      || FUNC_1(VAR_5->data, "off") == 0
      || FUNC_1(VAR_5->data, "false") == 0)
    {
      svn_error_t *VAR_6 = FUNC_3
        (VAR_0, ((void*)0),
         FUNC_0("To turn off the %s property, use 'svn propdel';\n"
           "setting the property to '%s' will not turn it off."),
           VAR_2, VAR_3);
      FUNC_4(VAR_1, VAR_6, "svn: ");
      FUNC_2(VAR_6);
    }
}
