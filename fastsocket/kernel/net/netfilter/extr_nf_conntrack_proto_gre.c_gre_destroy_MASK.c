
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn {struct nf_conn* master; } ;


 int FUNC_0 (struct nf_conn*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct nf_conn *VAR_0)
{
 struct nf_conn *VAR_1 = VAR_0->master;
 FUNC_1(" entering\n");

 if (!VAR_1)
  FUNC_1("no master !?!\n");
 else
  FUNC_0(VAR_1);
}
