
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int s ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int const*,int const*) ;
 int FUNC_2 (char*,int ,int) ;
 int * FUNC_3 (int *,int const*,char*,int const*,int) ;
 int FUNC_4 (int *,int const*,size_t) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char*,char const*,int) ;

const u_char *
FUNC_7(netdissect_options *VAR_0,
          const u_char *VAR_1, const char *VAR_2, const u_char *VAR_3,
          int VAR_4)
{
    static int VAR_5 = 0;
    char VAR_6[128];
    char *VAR_7;

    while (*VAR_2) {
 switch (*VAR_2) {
 case '*':
     VAR_2++;
     while (VAR_1 < VAR_3) {
  const u_char *VAR_8;
  VAR_5++;
  VAR_8 = FUNC_7(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  VAR_5--;
  if (VAR_8 == ((void*)0))
      return(((void*)0));
  if (VAR_8 == VAR_1)
      return(VAR_1);
  VAR_1 = VAR_8;
     }
     return(VAR_1);

 case '|':
     VAR_2++;
     if (VAR_1 >= VAR_3)
  return(VAR_1);
     break;

 case '%':
     VAR_2++;
     VAR_1 = VAR_3;
     break;

 case '#':
     VAR_2++;
     return(VAR_1);
     break;

 case '[':
     VAR_2++;
     if (VAR_1 >= VAR_3)
  return(VAR_1);
     FUNC_2(VAR_6, 0, sizeof(VAR_6));
     VAR_7 = FUNC_5(VAR_2, ']');
     if ((size_t)(VAR_7 - VAR_2 + 1) > sizeof(VAR_6)) {

  return(VAR_1);
     }
     FUNC_6(VAR_6, VAR_2, VAR_7 - VAR_2);
     VAR_6[VAR_7 - VAR_2] = '\0';
     VAR_2 = VAR_7 + 1;
     VAR_1 = FUNC_3(VAR_0, VAR_1, VAR_6, VAR_3, VAR_4);
     if (VAR_1 == ((void*)0))
  return(((void*)0));
     break;

 default:
     FUNC_0((VAR_0, "%c", *VAR_2));
     VAR_2++;
     break;
 }
    }
    if (!VAR_5 && VAR_1 < VAR_3) {
 size_t VAR_9 = FUNC_1(VAR_3, VAR_1);
 FUNC_0((VAR_0, "Data: (%lu bytes)\n", (unsigned long)VAR_9));
 FUNC_4(VAR_0, VAR_1, VAR_9);
 return(VAR_1 + VAR_9);
    }
    return(VAR_1);
}
