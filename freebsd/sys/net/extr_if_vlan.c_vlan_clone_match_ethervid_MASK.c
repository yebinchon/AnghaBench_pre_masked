
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 struct ifnet* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static struct ifnet *
FUNC_4(const char *VAR_1, int *VAR_2)
{
 char VAR_3[VAR_0];
 char *VAR_4;
 struct ifnet *VAR_5;
 int VAR_6;

 FUNC_3(VAR_3, VAR_1, VAR_0);
 if ((VAR_4 = FUNC_2(VAR_3, '.')) == ((void*)0))
  return (((void*)0));
 *VAR_4 = '\0';
 if ((VAR_5 = FUNC_1(VAR_3)) == ((void*)0))
  return (((void*)0));

 if (*++VAR_4 == '\0') {
  FUNC_0(VAR_5);
  return (((void*)0));
 }
 VAR_6 = 0;
 for(; *VAR_4 >= '0' && *VAR_4 <= '9'; VAR_4++)
  VAR_6 = (VAR_6 * 10) + (*VAR_4 - '0');
 if (*VAR_4 != '\0') {
  FUNC_0(VAR_5);
  return (((void*)0));
 }
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_6;

 return (VAR_5);
}
