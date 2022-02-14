
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sock; } ;
struct macsec_qca_data {TYPE_1__ common; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct macsec_qca_data*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct macsec_qca_data *VAR_1 = VAR_0;

 if (VAR_1->common.sock >= 0) {
  FUNC_1(VAR_1->common.sock);
  FUNC_0(VAR_1->common.sock);
 }

 FUNC_2(VAR_1);
}
