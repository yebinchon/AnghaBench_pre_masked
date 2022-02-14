
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int fw_vers; int viid_smt_extn_support; } ;
struct adapter {TYPE_1__ params; int pf; int mbox; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct adapter*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct adapter*,int ,int ,int ,int,int*,int*) ;

__attribute__((used)) static int
FUNC_8(struct adapter *VAR_4)
{
 int VAR_5 = 0;
 uint32_t VAR_6, VAR_7;

 if (FUNC_5(VAR_4) >= VAR_0) {
  VAR_6 = FUNC_0(VAR_2);
  VAR_7 = 1;
  VAR_5 = -FUNC_7(VAR_4, VAR_4->mbox, VAR_4->pf, 0, 1, &VAR_6, &VAR_7);

  if (VAR_5 == VAR_1 && VAR_4->params.fw_vers <
      (FUNC_2(1) | FUNC_4(20) |
      FUNC_3(1) | FUNC_1(0))) {
   VAR_5 = 0;
  }
  if (VAR_5 != 0) {
   FUNC_6(VAR_4->dev,
       "failed to enable high priority filters :%d.\n",
       VAR_5);
  }
 }


 VAR_6 = FUNC_0(VAR_3);
 VAR_7 = 1;
 VAR_5 = -FUNC_7(VAR_4, VAR_4->mbox, VAR_4->pf, 0, 1, &VAR_6, &VAR_7);
 if (VAR_5 == 0 && VAR_7 == 1)
  VAR_4->params.viid_smt_extn_support = 1;
 else
  VAR_4->params.viid_smt_extn_support = 0;

 return (VAR_5);
}
