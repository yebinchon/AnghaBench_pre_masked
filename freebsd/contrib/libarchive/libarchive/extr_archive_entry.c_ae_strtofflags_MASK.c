
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flag {unsigned long set; unsigned long clear; int * name; } ;


 struct flag* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *,size_t) ;
 size_t FUNC_1 (int *) ;

__attribute__((used)) static const char *
FUNC_2(const char *VAR_1, unsigned long *VAR_2, unsigned long *VAR_3)
{
 const char *VAR_4, *VAR_5;
 const struct flag *VAR_6;
 unsigned long VAR_7, VAR_8;
 const char *VAR_9;

 VAR_7 = VAR_8 = 0;
 VAR_4 = VAR_1;
 VAR_9 = ((void*)0);

 while (*VAR_4 == '\t' || *VAR_4 == ' ' || *VAR_4 == ',')
  VAR_4++;
 while (*VAR_4 != '\0') {
  size_t VAR_10;

  VAR_5 = VAR_4;
  while (*VAR_5 != '\0' && *VAR_5 != '\t' &&
      *VAR_5 != ' ' && *VAR_5 != ',')
   VAR_5++;
  VAR_10 = VAR_5 - VAR_4;
  for (VAR_6 = VAR_0; VAR_6->name != ((void*)0); VAR_6++) {
   size_t VAR_11 = FUNC_1(VAR_6->name);
   if (VAR_10 == VAR_11
       && FUNC_0(VAR_4, VAR_6->name, VAR_10) == 0) {

    VAR_8 |= VAR_6->set;
    VAR_7 |= VAR_6->clear;
    break;
   } else if (VAR_10 == VAR_11 - 2
       && FUNC_0(VAR_4, VAR_6->name + 2, VAR_10) == 0) {

    VAR_7 |= VAR_6->set;
    VAR_8 |= VAR_6->clear;
    break;
   }
  }

  if (VAR_6->name == ((void*)0) && VAR_9 == ((void*)0))
   VAR_9 = VAR_4;


  VAR_4 = VAR_5;
  while (*VAR_4 == '\t' || *VAR_4 == ' ' || *VAR_4 == ',')
   VAR_4++;

 }

 if (VAR_2)
  *VAR_2 = VAR_7;
 if (VAR_3)
  *VAR_3 = VAR_8;


 return (VAR_9);
}
