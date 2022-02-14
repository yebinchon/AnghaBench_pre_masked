
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char const*,char const*) ;
 char* FUNC_2 (char const*,int ) ;

__attribute__((used)) static int
FUNC_3(Char ***VAR_6, const char *VAR_7, const char *VAR_8)
{
    Char **VAR_9 = *VAR_6, *VAR_10;

    int VAR_11 = 0, VAR_12 = 1;
    for (VAR_9++; VAR_12 && *VAR_9 != ((void*)0) && (*VAR_9)[0] == '-'; VAR_9++)
 if (*(VAR_10 = &((*VAR_9)[1])) == '\0')
     VAR_11 |= VAR_2;
 else if ((*VAR_9)[1] == '-' && (*VAR_9)[2] == '\0') {
     VAR_9++;
     break;
 } else {
     char *VAR_13;
     while (*VAR_10 != '\0') {
  if ((VAR_13 = FUNC_2(VAR_7, *VAR_10++)) != ((void*)0))
      VAR_11 |= (1 << (VAR_13 - VAR_7));
         else
      FUNC_1(VAR_5, FUNC_0(**VAR_6), VAR_7, VAR_8);
     }
 }
    if (*VAR_9 && (VAR_11 & VAR_2))
 FUNC_1(VAR_5, FUNC_0(**VAR_6), VAR_7, VAR_8);
    *VAR_6 = VAR_9;

    if (VAR_11 & (VAR_1|VAR_4|VAR_0))
 VAR_11 |= VAR_3;
    return VAR_11;
}
