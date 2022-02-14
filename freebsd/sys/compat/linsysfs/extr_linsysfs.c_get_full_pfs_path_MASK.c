
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfs_node {char* pn_name; struct pfs_node* pn_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 char* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int ,char*,char*,char*) ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static char *
FUNC_5(struct pfs_node *VAR_3)
{
 char *VAR_4, *VAR_5;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_5[0] = '\0';

 do {
  FUNC_2(VAR_4, VAR_0, "%s/%s", VAR_3->pn_name, VAR_5);
  FUNC_3(VAR_5, VAR_4, VAR_0);
  VAR_3 = VAR_3->pn_parent;
 } while (VAR_3->pn_parent != ((void*)0));

 VAR_5[FUNC_4(VAR_5) - 1] = '\0';
 FUNC_0(VAR_4, VAR_1);
 return (VAR_5);
}
