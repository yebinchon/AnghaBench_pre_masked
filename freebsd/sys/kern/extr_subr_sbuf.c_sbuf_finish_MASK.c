
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {char* s_buf; size_t s_len; scalar_t__ s_error; int * s_drain_func; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*,int ) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (struct sbuf*) ;

int
FUNC_5(struct sbuf *VAR_2)
{

 FUNC_2(VAR_2);
 FUNC_3(VAR_2, 0);

 VAR_2->s_buf[VAR_2->s_len] = '\0';
 if (FUNC_0(VAR_2))
  VAR_2->s_len++;
 if (VAR_2->s_drain_func != ((void*)0)) {
  while (VAR_2->s_len > 0 && VAR_2->s_error == 0)
   VAR_2->s_error = FUNC_4(VAR_2);
 }
 FUNC_1(VAR_2, VAR_0);



 if (VAR_2->s_error != 0) {
  VAR_1 = VAR_2->s_error;
  return (-1);
 }
 return (0);

}
