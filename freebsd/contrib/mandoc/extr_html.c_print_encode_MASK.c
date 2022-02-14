
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html {int flags; } ;
typedef int numbuf ;
typedef enum mandoc_esc { ____Placeholder_mandoc_esc } mandoc_esc ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct html*,int) ;
 int FUNC_1 (char const**,char const**,int*) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (struct html*,char const) ;
 int FUNC_6 (struct html*) ;
 scalar_t__ FUNC_7 (struct html*,int) ;
 int FUNC_8 (struct html*) ;
 int FUNC_9 (struct html*,int ,char*) ;
 int FUNC_10 (struct html*,char*) ;
 int FUNC_11 (char*,int,char*,int) ;
 char* FUNC_12 (char const*,char) ;
 size_t FUNC_13 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_14(struct html *VAR_3, const char *VAR_4, const char *VAR_5, int VAR_6)
{
 char VAR_7[16];
 const char *VAR_8;
 size_t VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 enum mandoc_esc VAR_14;
 static const char VAR_15[10] = { ' ', '\\', '<', '>', '&', '"',
  145, 146, 147, '\0' };

 if (VAR_5 == ((void*)0))
  VAR_5 = FUNC_12(VAR_4, '\0');

 VAR_12 = 0;
 VAR_13 = 0;

 while (VAR_4 < VAR_5) {
  if (VAR_1 & VAR_3->flags && '\\' != *VAR_4) {
   VAR_3->flags &= ~VAR_1;
   VAR_4++;
   continue;
  }

  for (VAR_9 = FUNC_13(VAR_4, VAR_15); VAR_9-- && VAR_4 < VAR_5; VAR_4++)
   FUNC_5(VAR_3, *VAR_4);

  if (VAR_12 &&
      (VAR_4 >= VAR_5 || *VAR_4 == ' ' || *VAR_4 == 145)) {
   FUNC_9(VAR_3, VAR_2, "");
   VAR_12 = 0;
   while (VAR_4 < VAR_5 && (*VAR_4 == ' ' || *VAR_4 == 145))
    VAR_4++;
   continue;
  }

  if (VAR_4 >= VAR_5)
   break;

  if (*VAR_4 == ' ') {
   FUNC_6(VAR_3);
   VAR_4++;
   continue;
  }

  if (FUNC_7(VAR_3, *VAR_4++))
   continue;

  VAR_14 = FUNC_1(&VAR_4, &VAR_8, &VAR_11);
  switch (VAR_14) {
  case 141:
  case 136:
  case 139:
  case 137:
  case 140:
  case 138:
  case 135:
   if (0 == VAR_6) {
    VAR_3->flags |= VAR_0;
    if (FUNC_0(VAR_3, VAR_14))
     FUNC_8(VAR_3);
    VAR_3->flags &= ~VAR_0;
   }
   continue;
  case 131:
   VAR_3->flags |= VAR_1;
   continue;
  case 142:
   continue;
  default:
   break;
  }

  if (VAR_3->flags & VAR_1) {
   VAR_3->flags &= ~VAR_1;
   continue;
  }

  switch (VAR_14) {
  case 128:

   VAR_10 = FUNC_3(VAR_8 + 1, VAR_11 - 1);
   break;
  case 133:
   VAR_10 = FUNC_2(VAR_8, VAR_11);
   if (VAR_10 < 0)
    continue;
   break;
  case 130:
   VAR_10 = FUNC_4(VAR_8, VAR_11);
   if (VAR_10 <= 0)
    continue;
   break;
  case 129:
   VAR_10 = *VAR_8;
   break;
  case 143:
   FUNC_10(VAR_3, "html");
   continue;
  case 144:
   VAR_12 = 1;
   continue;
  case 134:
   if ('\0' == *VAR_4)
    VAR_13 = 1;
   continue;
  case 132:
   if (VAR_11 == 0)
    continue;
   VAR_10 = VAR_8[VAR_11 - 1];
   break;
  default:
   continue;
  }
  if ((VAR_10 < 0x20 && VAR_10 != 0x09) ||
      (VAR_10 > 0x7E && VAR_10 < 0xA0))
   VAR_10 = 0xFFFD;
  if (VAR_10 > 0x7E) {
   (void)FUNC_11(VAR_7, sizeof(VAR_7), "&#x%.4X;", VAR_10);
   FUNC_10(VAR_3, VAR_7);
  } else if (FUNC_7(VAR_3, VAR_10) == 0)
   FUNC_5(VAR_3, VAR_10);
 }

 return VAR_13;
}
