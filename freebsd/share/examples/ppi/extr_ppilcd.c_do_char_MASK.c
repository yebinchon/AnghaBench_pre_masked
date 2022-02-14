
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_driver {int (* l_putc ) (char) ;int (* l_command ) (char) ;} ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char) ;
 int FUNC_7 (char) ;
 int FUNC_8 (char) ;
 int FUNC_9 (char) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_10(struct lcd_driver *VAR_7, char VAR_8)
{
    static int VAR_9 = 0;

    if (VAR_9) {
 switch(VAR_8) {
 case 'b':
     VAR_7->l_command(VAR_0);
     break;
 case 'f':
     VAR_7->l_command(VAR_1);
     break;
 case 'n':
     VAR_7->l_command(VAR_4);
     break;
 case 'r':
     VAR_7->l_command(VAR_2);
     break;
 case 'R':
     VAR_7->l_command(VAR_5);
     break;
 case 'v':
     VAR_7->l_command(VAR_3);
     break;
 case '\\':
     VAR_7->l_putc('\\');
     break;
 default:
     VAR_7->l_command(VAR_8);
     break;
 }
 VAR_9 = 0;
    } else {
 if (VAR_8 == '\\') {
     VAR_9 = 1;
 } else {
     if (VAR_6 || FUNC_0(VAR_8))
  VAR_7->l_putc(VAR_8);
 }
    }
}
