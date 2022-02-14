
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct nf_conn*) ;
 int FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (struct nf_conn*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_2)
{
 struct nf_conn *VAR_3 = (void *)VAR_2;

 if (!FUNC_5(VAR_1, &VAR_3->status) &&
     FUNC_6(FUNC_0(VAR_0, VAR_3) < 0)) {

  FUNC_1(VAR_3);
  FUNC_2(VAR_3);
  return;
 }
 FUNC_4(VAR_1, &VAR_3->status);
 FUNC_1(VAR_3);
 FUNC_3(VAR_3);
}
