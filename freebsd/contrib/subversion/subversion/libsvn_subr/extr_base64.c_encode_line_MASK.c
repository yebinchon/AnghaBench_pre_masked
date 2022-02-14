
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; int len; } ;
typedef TYPE_1__ svn_stringbuf_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const*,char*) ;

__attribute__((used)) static void
FUNC_1(svn_stringbuf_t *VAR_1, const char *VAR_2)
{

  const unsigned char *VAR_3 = (const unsigned char *)VAR_2;
  char *VAR_4 = VAR_1->data + VAR_1->len;
  char *VAR_5 = VAR_4 + VAR_0;



  for ( ; VAR_4 != VAR_5; VAR_3 += 3, VAR_4 += 4)
    FUNC_0(VAR_3, VAR_4);


  *VAR_4 = '\0';
  VAR_1->len += VAR_0;
}
