
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;

const char *FUNC_2(int VAR_0)
{
 static const struct ftab {
  const char *name;
  int value;
 } VAR_1[] = {
  { "NUM", 130 },
  { "STR", 128 },
  { "DONTFREE", 133 },
  { "CON", 136 },
  { "ARR", 137 },
  { "FCN", 132 },
  { "FLD", 131 },
  { "REC", 129 },
  { "CONVC", 135 },
  { "CONVO", 134 },
  { ((void*)0), 0 }
 };
 static char VAR_2[100];
 int VAR_3;
 char *VAR_4 = VAR_2;

 for (VAR_3 = 0; VAR_1[VAR_3].name != ((void*)0); VAR_3++) {
  if ((VAR_0 & VAR_1[VAR_3].value) != 0) {
   if (VAR_4 > VAR_2)
    *VAR_4++ = '|';
   FUNC_0(VAR_4, VAR_1[VAR_3].name);
   VAR_4 += FUNC_1(VAR_4);
  }
 }

 return VAR_2;
}
