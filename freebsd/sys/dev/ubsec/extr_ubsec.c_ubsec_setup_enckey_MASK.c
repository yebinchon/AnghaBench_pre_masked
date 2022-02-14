
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubsec_session {int * ses_deskey; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_2(struct ubsec_session *VAR_1, int VAR_2, caddr_t VAR_3)
{


 if (VAR_2 == VAR_0) {
  FUNC_1(VAR_3, &VAR_1->ses_deskey[0], 8);
  FUNC_1(VAR_3, &VAR_1->ses_deskey[2], 8);
  FUNC_1(VAR_3, &VAR_1->ses_deskey[4], 8);
 } else
  FUNC_1(VAR_3, VAR_1->ses_deskey, 24);

 FUNC_0(VAR_1->ses_deskey[0]);
 FUNC_0(VAR_1->ses_deskey[1]);
 FUNC_0(VAR_1->ses_deskey[2]);
 FUNC_0(VAR_1->ses_deskey[3]);
 FUNC_0(VAR_1->ses_deskey[4]);
 FUNC_0(VAR_1->ses_deskey[5]);
}
