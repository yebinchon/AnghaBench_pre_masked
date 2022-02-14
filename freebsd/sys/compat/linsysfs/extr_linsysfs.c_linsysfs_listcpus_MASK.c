
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfs_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 char* FUNC_1 (int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct pfs_node* FUNC_2 (struct pfs_node*,char*,int *,int *,int *,int ) ;
 int FUNC_3 (struct pfs_node*,char*,int *,int *,int *,int *,int ) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct pfs_node *VAR_6)
{
 struct pfs_node *VAR_7;
 char *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_11 = 1;
 VAR_10 = VAR_4;
 while (VAR_10 > 10) {
  VAR_10 /= 10;
  VAR_11++;
 }
 VAR_11 += sizeof("cpu");
 VAR_8 = FUNC_1(VAR_11, VAR_0, VAR_1);

 for (VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9) {

  FUNC_4(VAR_8, "cpu%d", VAR_9);
  VAR_7 = FUNC_2(VAR_6, VAR_8, ((void*)0), ((void*)0), ((void*)0), 0);

  FUNC_3(VAR_7, "online", &VAR_3,
      ((void*)0), ((void*)0), ((void*)0), VAR_2);
 }
 FUNC_0(VAR_8, VAR_0);
}
