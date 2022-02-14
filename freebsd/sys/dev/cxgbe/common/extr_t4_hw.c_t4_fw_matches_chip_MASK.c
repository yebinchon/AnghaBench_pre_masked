
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_hdr {scalar_t__ chip; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,char*,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 scalar_t__ FUNC_4 (struct adapter*) ;

__attribute__((used)) static int FUNC_5(struct adapter *VAR_3,
         const struct fw_hdr *VAR_4)
{




 if ((FUNC_2(VAR_3) && VAR_4->chip == VAR_0) ||
     (FUNC_3(VAR_3) && VAR_4->chip == VAR_1) ||
     (FUNC_4(VAR_3) && VAR_4->chip == VAR_2))
  return 1;

 FUNC_0(VAR_3,
  "FW image (%d) is not suitable for this adapter (%d)\n",
  VAR_4->chip, FUNC_1(VAR_3));
 return 0;
}
