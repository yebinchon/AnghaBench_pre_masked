
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int s_len; char* s_buf; scalar_t__ s_error; } ;


 int FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*,int ) ;
 int FUNC_3 (struct sbuf*,char) ;

int
FUNC_4(struct sbuf *VAR_0)
{

 FUNC_1(VAR_0);
 FUNC_2(VAR_0, 0);
 if (VAR_0->s_len == 0) {
  if (!FUNC_0(VAR_0))
   FUNC_3(VAR_0, '\n');
 } else if (VAR_0->s_buf[VAR_0->s_len - 1] != '\n')
  FUNC_3(VAR_0, '\n');

 if (VAR_0->s_error != 0)
  return (-1);
 return (0);
}
