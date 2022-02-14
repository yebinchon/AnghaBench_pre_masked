
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* strmod_linkinfo; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (char*,char*,unsigned int) ;
 int FUNC_2 (char*) ;

int
FUNC_3(
     void
     )
{
 static char VAR_3[] = "4.6";
 char *VAR_4, *VAR_5;
 char *VAR_6;


 VAR_6 = VAR_2;







 VAR_4 = VAR_3;
 if (*VAR_4 == '$')
 {




  while (*VAR_4 && (*VAR_4 != ' '))
  {
   VAR_4++;
  }
  if (*VAR_4 == ' ') VAR_4++;
 }

 VAR_6 = VAR_1.strmod_linkinfo;
 while (*VAR_6 && (*VAR_6 != ' '))
 {
  VAR_6++;
 }
 if (*VAR_6 == ' ') VAR_6++;

 VAR_5 = VAR_4;
 while (*VAR_5 && (((*VAR_5 >= '0') && (*VAR_5 <= '9')) || (*VAR_5 == '.')))
 {
  VAR_5++;
 }

 if (*VAR_4 && *VAR_6 && (VAR_5 > VAR_4))
 {
  if (FUNC_2(VAR_6) >= (VAR_5 - VAR_4))
  {
   FUNC_1(VAR_6, VAR_4, (unsigned)(VAR_5 - VAR_4));
  }
 }
 return (FUNC_0(&VAR_0));
}
