
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef unsigned int uint32_t ;
struct TYPE_2__ {unsigned int pf_srn; } ;
struct octeon_device {unsigned int num_iqs; TYPE_1__ sriov_info; } ;


 int volatile FUNC_0 (unsigned int) ;
 int volatile VAR_0 ;
 int volatile VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 unsigned int FUNC_6 (struct octeon_device*,int ) ;
 unsigned long long FUNC_7 (struct octeon_device*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct octeon_device*,int ,unsigned int volatile) ;
 int FUNC_10 (struct octeon_device*,int ,int volatile) ;

__attribute__((used)) static void
FUNC_11(struct octeon_device *VAR_3)
{
 volatile uint64_t VAR_4;
 volatile uint32_t VAR_5;
 int VAR_6;
 unsigned int VAR_7;
 uint32_t VAR_8, VAR_9;

 VAR_9 = VAR_3->sriov_info.pf_srn;
 VAR_8 = VAR_9 + VAR_3->num_iqs;


 for (VAR_7 = VAR_9; VAR_7 < VAR_8; VAR_7++) {
  VAR_6 = FUNC_5(1000);


  VAR_4 = FUNC_7(VAR_3,
         FUNC_2(VAR_7));
  VAR_4 &= ~VAR_0;
  VAR_4 |= VAR_1;
  FUNC_10(VAR_3, FUNC_2(VAR_7),
    VAR_4);





  VAR_4 = FUNC_7(VAR_3, VAR_2);
  while (!(VAR_4 & FUNC_0(VAR_7)) && VAR_6--) {
   VAR_4 = FUNC_7(VAR_3,
          VAR_2);
   FUNC_8(1);
   VAR_6--;
  }


  FUNC_9(VAR_3, FUNC_1(VAR_7),
    0xFFFFFFFF);
  while (((FUNC_7(VAR_3,
     FUNC_1(VAR_7))) !=
   0ULL) && VAR_6--) {
   FUNC_8(1);
  }
 }


 for (VAR_7 = VAR_9; VAR_7 < VAR_8; VAR_7++) {
  VAR_6 = FUNC_5(1000);






  VAR_4 = FUNC_7(VAR_3, VAR_2);
  while (!(VAR_4 & FUNC_0(VAR_7)) && VAR_6--) {
   VAR_4 = FUNC_7(VAR_3,
          VAR_2);
   FUNC_8(1);
   VAR_6--;
  }


  FUNC_9(VAR_3, FUNC_3(VAR_7),
    0xFFFFFFFF);
  while ((FUNC_7(VAR_3,
           FUNC_3(VAR_7)) !=
   0ULL) && VAR_6--) {
   FUNC_8(1);
  }


  VAR_5 = FUNC_6(VAR_3, FUNC_4(VAR_7));
  FUNC_9(VAR_3, FUNC_4(VAR_7), VAR_5);
 }
}
