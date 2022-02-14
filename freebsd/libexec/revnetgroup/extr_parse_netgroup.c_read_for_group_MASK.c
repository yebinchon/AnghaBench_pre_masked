
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linelist {char* l_groupname; char* l_line; struct linelist* l_next; scalar_t__ l_parsed; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 struct linelist* VAR_2 ;
 char* FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (char*,char*,char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static struct linelist *
FUNC_8(char *VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;
 int VAR_11;
 struct linelist *VAR_12;
 char VAR_13[VAR_0 + 1];
 char *VAR_14 = ((void*)0);

 VAR_14 = FUNC_3 (VAR_1, VAR_4);
 FUNC_5(VAR_13, "%s %s", VAR_4, VAR_14);
 VAR_5 = (char *)&VAR_13;




 while (*VAR_5 == ' ' || *VAR_5 == '\t')
  VAR_5++;
 VAR_6 = VAR_5;
 while (*VAR_5 != ' ' && *VAR_5 != '\t' && *VAR_5 != '\n' &&
  *VAR_5 != '\0')
  VAR_5++;
 VAR_9 = VAR_5 - VAR_6;
 while (*VAR_5 == ' ' || *VAR_5 == '\t')
  VAR_5++;
 if (*VAR_5 != '\n' && *VAR_5 != '\0') {
  VAR_12 = (struct linelist *)FUNC_4(sizeof (*VAR_12));
  VAR_12->l_parsed = 0;
  VAR_12->l_groupname = (char *)FUNC_4(VAR_9 + 1);
  FUNC_0(VAR_6, VAR_12->l_groupname, VAR_9);
  *(VAR_12->l_groupname + VAR_9) = '\0';
  VAR_9 = FUNC_7(VAR_5);
  VAR_10 = 0;



   do {
    if (*(VAR_5 + VAR_9 - 1) == '\n')
     VAR_9--;
    if (*(VAR_5 + VAR_9 - 1) == '\\') {
     VAR_9--;
     VAR_11 = 1;
    } else
     VAR_11 = 0;
    if (VAR_9 > 0) {
     VAR_7 = (char *)FUNC_4(VAR_10 + VAR_9 + 1);
     if (VAR_10 > 0) {
      FUNC_0(VAR_8, VAR_7, VAR_10);
      FUNC_2(VAR_8);
     }
     FUNC_0(VAR_5, VAR_7 + VAR_10, VAR_9);
     VAR_10 += VAR_9;
     *(VAR_7 + VAR_10) = '\0';
     VAR_8 = VAR_7;
    }
   } while (VAR_11);
  VAR_12->l_line = VAR_7;
  VAR_12->l_next = VAR_2;
  VAR_2 = VAR_12;






   return (VAR_12);
 }
 return ((struct linelist *)0);
}
