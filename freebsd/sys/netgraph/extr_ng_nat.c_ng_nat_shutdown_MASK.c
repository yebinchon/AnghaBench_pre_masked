
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_nat_rdr_lst {int lib; int redirhead; } ;
typedef struct ng_nat_rdr_lst* priv_p ;
typedef int node_p ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct ng_nat_rdr_lst* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 struct ng_nat_rdr_lst* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int VAR_1 ;
 int FUNC_7 (struct ng_nat_rdr_lst* const,int ) ;

__attribute__((used)) static int
FUNC_8(node_p VAR_2)
{
 const priv_p VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_2, ((void*)0));
 FUNC_3(VAR_2);


 while (!FUNC_4(&VAR_3->redirhead)) {
  struct ng_nat_rdr_lst *VAR_4 = FUNC_5(&VAR_3->redirhead);
  FUNC_6(&VAR_3->redirhead, VAR_1);
  FUNC_7(VAR_4, VAR_0);
 }


 FUNC_0(VAR_3->lib);
 FUNC_7(VAR_3, VAR_0);

 return (0);
}
