
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {size_t (* width ) (struct termp const*,int ) ;int enc; int type; } ;
typedef enum mandoc_esc { ____Placeholder_mandoc_esc } mandoc_esc ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct termp const*,char,int*) ;
 int FUNC_2 (char const**,char const**,int*) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (char const*,int) ;
 char* FUNC_6 (char const*,int,size_t*) ;
 size_t FUNC_7 (char const*,char const*) ;
 size_t FUNC_8 (char const*) ;
 size_t FUNC_9 (struct termp const*,int ) ;
 size_t FUNC_10 (struct termp const*,int ) ;

size_t
FUNC_11(const struct termp *VAR_3, const char *VAR_4)
{
 size_t VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;
 const char *VAR_11, *VAR_12;
 enum mandoc_esc VAR_13;
 static const char VAR_14[] = { '\\', 135, 136,
   137, '\0' };







 VAR_5 = 0;
 VAR_9 = 0;
 while ('\0' != *VAR_4) {
  VAR_6 = FUNC_7(VAR_4, VAR_14);
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
   VAR_5 += FUNC_1(VAR_3, *VAR_4++, &VAR_9);

  switch (*VAR_4) {
  case '\\':
   VAR_4++;
   VAR_12 = ((void*)0);
   VAR_13 = FUNC_2(&VAR_4, &VAR_11, &VAR_8);
   switch (VAR_13) {
   case 128:
    VAR_10 = FUNC_4(VAR_11 + 1, VAR_8 - 1);
    break;
   case 133:
    VAR_10 = FUNC_3(VAR_11, VAR_8);
    if (VAR_10 < 0)
     continue;
    break;
   case 130:
    if (VAR_3->enc == VAR_0) {
     VAR_12 = FUNC_6(VAR_11, VAR_8, &VAR_6);
     if (VAR_12 != ((void*)0))
      break;
    } else {
     VAR_10 = FUNC_5(VAR_11, VAR_8);
     if (VAR_10 > 0)
      VAR_5 += FUNC_1(VAR_3, VAR_10, &VAR_9);
    }
    continue;
   case 129:
    VAR_10 = *VAR_11;
    break;
   case 134:
    if (VAR_3->type == VAR_1) {
     VAR_12 = "pdf";
     VAR_6 = 3;
    } else if (VAR_3->type == VAR_2) {
     VAR_12 = "ps";
     VAR_6 = 2;
    } else if (VAR_3->enc == VAR_0) {
     VAR_12 = "ascii";
     VAR_6 = 5;
    } else {
     VAR_12 = "utf8";
     VAR_6 = 4;
    }
    break;
   case 131:
    VAR_9 = 1;
    continue;
   case 132:
    VAR_6 = 0;
    VAR_12 = VAR_11 + VAR_8;
    while (VAR_11 < VAR_12) {
     if (*VAR_11 == '\\') {
      FUNC_2(&VAR_11, ((void*)0), ((void*)0));
      continue;
     }
     VAR_7 = (*VAR_3->width)(VAR_3, *VAR_11++);
     if (VAR_6 < VAR_7)
      VAR_6 = VAR_7;
    }
    VAR_5 += VAR_6;
    continue;
   default:
    continue;
   }






   if (VAR_12 == ((void*)0)) {
    if (VAR_3->enc == VAR_0) {
     VAR_12 = FUNC_0(VAR_10);
     VAR_6 = FUNC_8(VAR_12);
    } else {
     if ((VAR_10 < 0x20 && VAR_10 != 0x09) ||
         (VAR_10 > 0x7E && VAR_10 < 0xA0))
      VAR_10 = 0xFFFD;
     VAR_5 += FUNC_1(VAR_3, VAR_10, &VAR_9);
     continue;
    }
   }

   if (VAR_9) {
    VAR_9 = 0;
    break;
   }






   for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
    VAR_5 += (*VAR_3->width)(VAR_3, *VAR_12++);
   break;
  case 135:
   VAR_5 += FUNC_1(VAR_3, ' ', &VAR_9);
   VAR_4++;
   break;
  case 136:
   VAR_5 += FUNC_1(VAR_3, '-', &VAR_9);
   VAR_4++;
   break;
  default:
   break;
  }
 }

 return VAR_5;
}
