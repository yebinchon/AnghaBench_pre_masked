
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {scalar_t__ s_sect_len; scalar_t__ s_error; scalar_t__ s_rec_off; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sbuf*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,size_t) ;
 int FUNC_6 (struct sbuf*,int) ;

ssize_t
FUNC_7(struct sbuf *VAR_1, ssize_t VAR_2, size_t VAR_3, int VAR_4)
{
 ssize_t VAR_5;

 FUNC_3(VAR_1);
 FUNC_4(VAR_1, 0);
 FUNC_0(FUNC_2(VAR_1),
     ("attempt to end a section when not in a section"));

 if (VAR_3 > 1) {
  VAR_5 = FUNC_5(VAR_1->s_sect_len, VAR_3) - VAR_1->s_sect_len;
  for (; VAR_1->s_error == 0 && VAR_5 > 0; VAR_5--)
   FUNC_6(VAR_1, VAR_4);
 }
 VAR_5 = VAR_1->s_sect_len;
 if (VAR_2 == -1) {
  VAR_1->s_rec_off = VAR_1->s_sect_len = 0;
  FUNC_1(VAR_1, VAR_0);
 } else {
  VAR_1->s_sect_len += VAR_2;
 }
 if (VAR_1->s_error != 0)
  return (-1);
 return (VAR_5);
}
