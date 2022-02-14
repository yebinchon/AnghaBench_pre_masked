
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lacp_systemid {int lsi_mac; int lsi_prio; } ;
typedef int macbuf ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,char*,int,char*) ;

const char *
FUNC_3(const struct lacp_systemid *VAR_1,
    char *VAR_2, size_t VAR_3)
{
 char VAR_4[VAR_0+1];

 FUNC_2(VAR_2, VAR_3, "%04X,%s",
     FUNC_1(VAR_1->lsi_prio),
     FUNC_0(VAR_1->lsi_mac, VAR_4, sizeof(VAR_4)));

 return (VAR_2);
}
