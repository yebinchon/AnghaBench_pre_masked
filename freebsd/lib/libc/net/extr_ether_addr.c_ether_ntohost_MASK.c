
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_addr {int * octet; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,struct ether_addr*,char*) ;
 char* FUNC_2 (struct ether_addr const*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int ,int *) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;
 scalar_t__ FUNC_10 (char**) ;
 scalar_t__ FUNC_11 (char*,char*,char*,int ,char**,int*) ;

int
FUNC_12(char *VAR_3, const struct ether_addr *VAR_4)
{
 FILE *VAR_5;
 char VAR_6[VAR_0 + 2];
 struct ether_addr VAR_7;
 char VAR_8[VAR_1];







 if ((VAR_5 = FUNC_5(VAR_2, "re")) == ((void*)0))
  return (1);
 while (FUNC_4(VAR_6,VAR_0,VAR_5)) {
  if (VAR_6[0] == '#')
   continue;
  if (!FUNC_1(VAR_6, &VAR_7, VAR_8)) {
   if (!FUNC_0((char *)&VAR_7.octet[0],
       (char *)&VAR_4->octet[0], 6)) {

    FUNC_7(VAR_3, VAR_8);
    FUNC_3(VAR_5);
    return(0);
   }
  }
 }
 FUNC_3(VAR_5);
 return (1);
}
