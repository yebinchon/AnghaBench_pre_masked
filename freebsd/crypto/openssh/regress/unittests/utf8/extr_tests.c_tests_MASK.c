
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*,char*,int,int,int,char*) ;
 char* FUNC_5 (int ,char*) ;

void
FUNC_6(void)
{
 char *VAR_1;

 FUNC_2("utf8_setlocale");
 VAR_1 = FUNC_5(VAR_0, "en_US.UTF-8");
 FUNC_0(VAR_1, ((void*)0));
 FUNC_1();

 FUNC_3();
 FUNC_4(1, "empty", "", 2, 0, 0, "");
 FUNC_4(1, "ascii", "x", -2, -2, -2, "x");
 FUNC_4(1, "newline", "a\nb", -2, -2, -2, "a\nb");
 FUNC_4(1, "cr", "a\rb", -2, -2, -2, "a\rb");
 FUNC_4(1, "tab", "a\tb", -2, -2, -2, "a\tb");
 FUNC_4(1, "esc", "\033x", -2, -2, -2, "\\033x");
 FUNC_4(1, "inv_badbyte", "\377x", -2, -2, -2, "\\377x");
 FUNC_4(1, "inv_nocont", "\341x", -2, -2, -2, "\\341x");
 FUNC_4(1, "inv_nolead", "a\200b", -2, -2, -2, "a\\200b");
 FUNC_4(1, "sz_ascii", "1234567890123456", -2, -2, 16, "123456789012345");
 FUNC_4(1, "sz_esc", "123456789012\033", -2, -2, 16, "123456789012");
 FUNC_4(1, "width_ascii", "123", 2, 2, -1, "12");
 FUNC_4(1, "width_double", "a\343\201\201", 2, 1, -1, "a");
 FUNC_4(1, "double_fit", "a\343\201\201", 3, 3, 4, "a\343\201\201");
 FUNC_4(1, "double_spc", "a\343\201\201", 4, 3, 4, "a\343\201\201");

 FUNC_2("C_setlocale");
 VAR_1 = FUNC_5(VAR_0, "C");
 FUNC_0(VAR_1, ((void*)0));
 FUNC_1();

 FUNC_3();
 FUNC_4(0, "empty", "", 2, 0, 0, "");
 FUNC_4(0, "ascii", "x", -2, -2, -2, "x");
 FUNC_4(0, "newline", "a\nb", -2, -2, -2, "a\nb");
 FUNC_4(0, "cr", "a\rb", -2, -2, -2, "a\rb");
 FUNC_4(0, "tab", "a\tb", -2, -2, -2, "a\tb");
 FUNC_4(0, "esc", "\033x", -2, -2, -2, "\\033x");
 FUNC_4(0, "inv_badbyte", "\377x", -2, -2, -2, "\\377x");
 FUNC_4(0, "inv_nocont", "\341x", -2, -2, -2, "\\341x");
 FUNC_4(0, "inv_nolead", "a\200b", -2, -2, -2, "a\\200b");
 FUNC_4(0, "sz_ascii", "1234567890123456", -2, -2, 16, "123456789012345");
 FUNC_4(0, "sz_esc", "123456789012\033", -2, -2, 16, "123456789012");
 FUNC_4(0, "width_ascii", "123", 2, 2, -1, "12");
 FUNC_4(0, "width_double", "a\343\201\201", 2, 1, -1, "a");
 FUNC_4(0, "double_fit", "a\343\201\201", 7, 5, -1, "a\\343");
 FUNC_4(0, "double_spc", "a\343\201\201", 13, 13, 13, "a\\343\\201\\201");
}
