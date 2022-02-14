
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; size_t len; } ;
typedef TYPE_1__ svn_stringbuf_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t) ;
 size_t FUNC_2 (char*,size_t) ;

void
FUNC_3(svn_stringbuf_t *VAR_0)
{
  FUNC_0(FUNC_1(VAR_0->data, VAR_0->len));

  VAR_0->len = FUNC_2(VAR_0->data, VAR_0->len);
  VAR_0->data[VAR_0->len] = '\0';
}
