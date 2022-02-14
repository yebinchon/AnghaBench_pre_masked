
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int term_char_t ;
struct tty {int dummy; } ;
struct terminal {struct tty* tm_tty; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*,int,int ) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*,char*,int) ;

void
FUNC_7(struct terminal *VAR_1, term_char_t VAR_2)
{
 struct tty *VAR_3;

 VAR_3 = VAR_1->tm_tty;
 if (VAR_3 == ((void*)0))
  return;






 if (FUNC_1(VAR_2) & VAR_0)
  return;
 VAR_2 = FUNC_0(VAR_2);

 FUNC_2(VAR_3);



 if (VAR_2 < 0x80) {
  FUNC_4(VAR_3, VAR_2, 0);
 } else if (VAR_2 < 0x800) {
  char VAR_4[2] = {
   0xc0 | (VAR_2 >> 6),
   0x80 | (VAR_2 & 0x3f)
  };

  FUNC_6(VAR_3, VAR_4, sizeof VAR_4);
 } else if (VAR_2 < 0x10000) {
  char VAR_5[3] = {
   0xe0 | (VAR_2 >> 12),
   0x80 | ((VAR_2 >> 6) & 0x3f),
   0x80 | (VAR_2 & 0x3f)
  };

  FUNC_6(VAR_3, VAR_5, sizeof VAR_5);
 } else {
  char VAR_6[4] = {
   0xf0 | (VAR_2 >> 18),
   0x80 | ((VAR_2 >> 12) & 0x3f),
   0x80 | ((VAR_2 >> 6) & 0x3f),
   0x80 | (VAR_2 & 0x3f)
  };

  FUNC_6(VAR_3, VAR_6, sizeof VAR_6);
 }
 FUNC_5(VAR_3);
 FUNC_3(VAR_3);
}
