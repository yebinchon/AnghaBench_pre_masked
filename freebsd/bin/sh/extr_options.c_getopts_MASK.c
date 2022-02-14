
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char const*,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(char *VAR_4, char *VAR_5, char **VAR_6, char ***VAR_7,
    char **VAR_8)
{
 char *VAR_9, *VAR_10;
 char VAR_11 = '?';
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;
 char VAR_15[10];
 const char *VAR_16 = ((void*)0);

 if ((VAR_9 = *VAR_8) == ((void*)0) || *VAR_9 == '\0') {

  if (*VAR_7 == ((void*)0))
   return 1;
  VAR_9 = **VAR_7;
  if (VAR_9 == ((void*)0) || *VAR_9 != '-' || *++VAR_9 == '\0') {
atend:
   VAR_13 = *VAR_7 - VAR_6 + 1;
   *VAR_7 = ((void*)0);
   VAR_9 = ((void*)0);
   VAR_12 = 1;
   goto out;
  }
  (*VAR_7)++;
  if (VAR_9[0] == '-' && VAR_9[1] == '\0')
   goto atend;
 }

 VAR_11 = *VAR_9++;
 for (VAR_10 = VAR_4; *VAR_10 != VAR_11; ) {
  if (*VAR_10 == '\0') {
   if (VAR_4[0] == ':') {
    VAR_15[0] = VAR_11;
    VAR_15[1] = '\0';
    VAR_16 = VAR_15;
   }
   else
    FUNC_3("Illegal option -%c\n", VAR_11);
   VAR_11 = '?';
   goto out;
  }
  if (*++VAR_10 == ':')
   VAR_10++;
 }

 if (*++VAR_10 == ':') {
  if (*VAR_9 == '\0' && (VAR_9 = **VAR_7) == ((void*)0)) {
   if (VAR_4[0] == ':') {
    VAR_15[0] = VAR_11;
    VAR_15[1] = '\0';
    VAR_16 = VAR_15;
    VAR_11 = ':';
   }
   else {
    FUNC_3("No arg for -%c option\n", VAR_11);
    VAR_11 = '?';
   }
   goto out;
  }

  if (VAR_9 == **VAR_7)
   (*VAR_7)++;
  VAR_16 = VAR_9;
  VAR_9 = ((void*)0);
 }

out:
 if (*VAR_7 != ((void*)0))
  VAR_13 = *VAR_7 - VAR_6 + 1;
 *VAR_8 = VAR_9;
 if (VAR_16 != ((void*)0))
  VAR_14 |= FUNC_4("OPTARG", VAR_16, 0);
 else {
  VAR_1;
  VAR_14 |= FUNC_5("OPTARG");
  VAR_2;
 }
 FUNC_2(VAR_15, sizeof(VAR_15), "%d", VAR_13);
 VAR_14 |= FUNC_4("OPTIND", VAR_15, VAR_3);
 VAR_15[0] = VAR_11;
 VAR_15[1] = '\0';
 VAR_14 |= FUNC_4(VAR_5, VAR_15, 0);
 if (VAR_14) {
  *VAR_7 = ((void*)0);
  *VAR_8 = ((void*)0);
  FUNC_1();
  FUNC_0(VAR_0);
 }
 return VAR_12;
}
