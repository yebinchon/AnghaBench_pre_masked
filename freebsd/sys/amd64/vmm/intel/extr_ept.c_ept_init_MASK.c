
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (char*,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ) ;

int
FUNC_11(int VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 uint64_t VAR_12;

 VAR_12 = FUNC_10(VAR_1);
 if (!FUNC_3(VAR_12) ||
     !FUNC_1(VAR_12) ||
     !FUNC_8(VAR_12) ||
     !FUNC_7(VAR_12) ||
     !FUNC_6(VAR_12) ||
     !FUNC_5(VAR_12))
  return (VAR_0);

 VAR_7 = VAR_8 & VAR_3;

 VAR_10 = 1;
 FUNC_9("hw.vmm.ept.use_superpages", &VAR_10);
 if (VAR_10 && FUNC_2(VAR_12))
  VAR_7 |= VAR_4;

 VAR_9 = 1;
 FUNC_9("hw.vmm.ept.use_hw_ad_bits", &VAR_9);
 if (VAR_9 && FUNC_0(VAR_12))
  VAR_6 = 1;
 else
  VAR_7 |= VAR_2;

 VAR_11 = 1;
 FUNC_9("hw.vmm.ept.use_exec_only", &VAR_11);
 if (VAR_11 && FUNC_4(VAR_12))
  VAR_7 |= VAR_5;

 return (0);
}
