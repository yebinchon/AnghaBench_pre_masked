
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_bsdextended_rule {int dummy; } ;


 int FUNC_0 (int,char**,struct mac_bsdextended_rule*,size_t,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char**,char*) ;

int
FUNC_4(const char *VAR_0, struct mac_bsdextended_rule *VAR_1,
    size_t VAR_2, char *VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6[100], **VAR_7;
 int VAR_8, VAR_9;

 VAR_5 = VAR_4 = FUNC_2(VAR_0);
 while (*VAR_5 == ' ' || *VAR_5 == '\t')
  VAR_5++;

 VAR_8 = 0;
 for (VAR_7 = VAR_6; (*VAR_7 = FUNC_3(&VAR_5, " \t")) != ((void*)0);) {
  VAR_8++;
  if (**VAR_7 != '\0')
   if (++VAR_7 >= &VAR_6[100])
    break;
 }

 VAR_9 = FUNC_0(VAR_8, VAR_6, VAR_1, VAR_2, VAR_3);

 FUNC_1(VAR_4);

 return (VAR_9);
}
