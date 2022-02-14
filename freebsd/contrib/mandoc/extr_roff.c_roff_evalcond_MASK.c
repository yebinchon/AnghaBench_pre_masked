
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const**,char const**,int*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,int) ;
 scalar_t__ FUNC_3 (struct roff*,int,char*,int*,int*,int ) ;
 int FUNC_4 (char*,int*) ;
 size_t FUNC_5 (struct roff*,char**,int,int) ;
 int FUNC_6 (struct roff*,char*,size_t,int*) ;
 int FUNC_7 (struct roff*,char*,size_t) ;

__attribute__((used)) static int
FUNC_8(struct roff *VAR_2, int VAR_3, char *VAR_4, int *VAR_5)
{
 const char *VAR_6, *VAR_7;
 char *VAR_8, *VAR_9;
 size_t VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 if ('!' == VAR_4[*VAR_5]) {
  VAR_16 = 0;
  (*VAR_5)++;
 } else
  VAR_16 = 1;

 switch (VAR_4[*VAR_5]) {
 case '\0':
  return 0;
 case 'n':
 case 'o':
  (*VAR_5)++;
  return VAR_16;
 case 'e':
 case 't':
 case 'v':
  (*VAR_5)++;
  return !VAR_16;
 case 'c':
  do {
   (*VAR_5)++;
  } while (VAR_4[*VAR_5] == ' ');






  if (VAR_4[*VAR_5] == '\t') {
   (*VAR_5)++;
   return 0;
  }



  if (VAR_4[*VAR_5] != '\\') {
   (*VAR_5)++;
   return VAR_16;
  }

  VAR_7 = VAR_4 + ++*VAR_5;
  switch (FUNC_0(&VAR_7, &VAR_6, &VAR_12)) {
  case 129:
   VAR_15 = FUNC_2(VAR_6, VAR_12) != -1;
   break;
  case 128:
   VAR_15 = 1;
   break;
  case 130:
   VAR_15 = FUNC_1(VAR_6, VAR_12) != -1;
   break;
  default:
   VAR_15 = !VAR_16;
   break;
  }
  *VAR_5 = VAR_7 - VAR_4;
  return VAR_15 == VAR_16;
 case 'd':
 case 'r':
  VAR_8 = VAR_4 + *VAR_5 + 1;
  while (*VAR_8 == ' ')
   VAR_8++;
  VAR_9 = VAR_8;
  VAR_10 = FUNC_5(VAR_2, &VAR_8, VAR_3, VAR_8 - VAR_4);
  if (VAR_10 == 0)
   VAR_15 = 0;
  else if (VAR_4[*VAR_5] == 'r')
   VAR_15 = FUNC_7(VAR_2, VAR_9, VAR_10);
  else {
   VAR_11 = VAR_0;
          FUNC_6(VAR_2, VAR_9, VAR_10, &VAR_11);
   VAR_15 = !!VAR_11;
  }
  *VAR_5 = (VAR_9 + VAR_10) - VAR_4;
  return VAR_15 == VAR_16;
 default:
  break;
 }

 VAR_14 = *VAR_5;
 if (FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_13, VAR_1))
  return (VAR_13 > 0) == VAR_16;
 else if (*VAR_5 == VAR_14)
  return FUNC_4(VAR_4, VAR_5) == VAR_16;
 else
  return 0;
}
