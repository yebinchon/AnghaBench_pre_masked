
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_8__ {char* data; int len; } ;
typedef TYPE_2__ svn_string_t ;


 int FUNC_0 (TYPE_1__*,char const*,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static const char *
FUNC_2(svn_string_t *VAR_0,
                svn_stringbuf_t *VAR_1)
{
  const char *VAR_2;
  const char *VAR_3;



  VAR_2 = VAR_0->data + VAR_0->len;
  while (*VAR_2 == '/')
    ++VAR_2;


  if (*VAR_2 == '\0')
    return ((void*)0);



  VAR_3 = VAR_2;
  while (*VAR_3 != '/' && *VAR_3 != '\0')
    ++VAR_3;


  FUNC_1(VAR_1);
  FUNC_0(VAR_1, VAR_2,
                            VAR_3 - VAR_2);


  VAR_0->len = VAR_3 - VAR_0->data;


  return VAR_1->data;
}
