
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (int VAR_1, void (*VAR_2) (const char *, struct ui_file *),
    void (*VAR_3) (struct ui_file *, const char *, ...),
    struct ui_file *VAR_4, int VAR_5)
{

  VAR_1 &= 0xFF;

  if (VAR_1 < 0x20 ||
      (VAR_1 >= 0x7F && VAR_1 < 0xA0) ||
      (VAR_0 && VAR_1 >= 0x80))
    {
      switch (VAR_1)
 {
 case '\n':
   VAR_2 ("\\n", VAR_4);
   break;
 case '\b':
   VAR_2 ("\\b", VAR_4);
   break;
 case '\t':
   VAR_2 ("\\t", VAR_4);
   break;
 case '\f':
   VAR_2 ("\\f", VAR_4);
   break;
 case '\r':
   VAR_2 ("\\r", VAR_4);
   break;
 case '\033':
   VAR_2 ("\\e", VAR_4);
   break;
 case '\007':
   VAR_2 ("\\a", VAR_4);
   break;
 default:
   VAR_3 (VAR_4, "\\%.3o", (unsigned int) VAR_1);
   break;
 }
    }
  else
    {
      if (VAR_1 == '\\' || VAR_1 == VAR_5)
 VAR_2 ("\\", VAR_4);
      VAR_3 (VAR_4, "%c", VAR_1);
    }
}
