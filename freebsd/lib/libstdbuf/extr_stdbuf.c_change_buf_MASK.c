
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *,int *,int,size_t) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (char const*,char**,int ) ;
 int FUNC_3 (char*,char const*,int ) ;
 int FUNC_4 (char*,char,int ) ;

__attribute__((used)) static void
FUNC_5(FILE *VAR_6, const char *VAR_7)
{
 char *VAR_8;
 size_t VAR_9;
 int VAR_10;

 VAR_9 = 0;
 if (VAR_7[0] == '0' && VAR_7[1] == '\0')
  VAR_10 = VAR_4;
 else if (VAR_7[0] == 'L' && VAR_7[1] == '\0')
  VAR_10 = VAR_3;
 else if (VAR_7[0] == 'B' && VAR_7[1] == '\0') {
  VAR_10 = VAR_2;
  VAR_9 = 0;
 } else {





  VAR_5 = 0;
  VAR_9 = FUNC_2(VAR_7, &VAR_8, 0);
  if (VAR_5 == VAR_0 || VAR_5 == VAR_1 || VAR_8 == VAR_7)
   FUNC_3("Wrong buffer mode '%s' for %s", VAR_7,
       FUNC_1(VAR_6));
  switch (*VAR_8) {
  case 'G':
   VAR_9 *= 1024 * 1024 * 1024;
   break;
  case 'M':
   VAR_9 *= 1024 * 1024;
   break;
  case 'k':
   VAR_9 *= 1024;
   break;
  case '\0':
   break;
  default:
   FUNC_4("Unknown suffix '%c' for %s", *VAR_8,
       FUNC_1(VAR_6));
   return;
  }
  VAR_10 = VAR_2;
 }
 if (FUNC_0(VAR_6, ((void*)0), VAR_10, VAR_9) != 0)
  FUNC_3("Cannot set buffer mode '%s' for %s", VAR_7,
      FUNC_1(VAR_6));
}
