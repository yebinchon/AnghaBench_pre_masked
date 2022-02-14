
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flag {char* name; unsigned long set; unsigned long clear; } ;


 struct flag* VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2(unsigned long VAR_1, unsigned long VAR_2)
{
 char *VAR_3, *VAR_4;
 const char *VAR_5;
 unsigned long VAR_6;
 const struct flag *VAR_7;
 size_t VAR_8;

 VAR_6 = VAR_1 | VAR_2;
 VAR_8 = 0;
 for (VAR_7 = VAR_0; VAR_7->name != ((void*)0); VAR_7++)
  if (VAR_6 & (VAR_7->set | VAR_7->clear)) {
   VAR_8 += FUNC_1(VAR_7->name) + 1;
   VAR_6 &= ~(VAR_7->set | VAR_7->clear);
  }

 if (VAR_8 == 0)
  return (((void*)0));
 VAR_3 = (char *)FUNC_0(VAR_8);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 VAR_4 = VAR_3;
 for (VAR_7 = VAR_0; VAR_7->name != ((void*)0); VAR_7++) {
  if (VAR_1 & VAR_7->set || VAR_2 & VAR_7->clear) {
   VAR_5 = VAR_7->name + 2;
  } else if (VAR_1 & VAR_7->clear || VAR_2 & VAR_7->set) {
   VAR_5 = VAR_7->name;
  } else
   continue;
  VAR_1 &= ~(VAR_7->set | VAR_7->clear);
  VAR_2 &= ~(VAR_7->set | VAR_7->clear);
  if (VAR_4 > VAR_3)
   *VAR_4++ = ',';
  while ((*VAR_4++ = *VAR_5++) != '\0')
   ;
  VAR_4--;
 }

 *VAR_4 = '\0';
 return (VAR_3);
}
