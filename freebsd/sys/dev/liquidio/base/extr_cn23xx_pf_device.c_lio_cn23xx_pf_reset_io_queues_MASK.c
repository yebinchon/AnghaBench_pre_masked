
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int volatile uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ pf_srn; scalar_t__ num_pf_rings; } ;
struct octeon_device {TYPE_1__ sriov_info; } ;


 scalar_t__ VAR_0 ;
 int volatile VAR_1 ;
 int volatile VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct octeon_device*,char*,scalar_t__) ;
 int FUNC_2 (struct octeon_device*,int ) ;
 int FUNC_3 (struct octeon_device*,int ,int volatile) ;

__attribute__((used)) static int
FUNC_4(struct octeon_device *VAR_3)
{
 uint64_t VAR_4;
 uint32_t VAR_5, VAR_6 = VAR_0;
 uint32_t VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_8 = VAR_3->sriov_info.pf_srn;
 VAR_5 = VAR_8 + VAR_3->sriov_info.num_pf_rings;





 for (VAR_7 = VAR_8; VAR_7 < VAR_5; VAR_7++) {

  VAR_4 = FUNC_2(VAR_3,
         FUNC_0(VAR_7));
  VAR_4 = VAR_4 | VAR_2;
  FUNC_3(VAR_3,
    FUNC_0(VAR_7), VAR_4);
 }


 for (VAR_7 = VAR_8; VAR_7 < VAR_5; VAR_7++) {
  volatile uint64_t VAR_10 =
   FUNC_2(VAR_3,
           FUNC_0(VAR_7));
  while ((VAR_10 & VAR_2) &&
         !(VAR_10 & VAR_1) &&
         VAR_6) {
   VAR_10 = FUNC_2(VAR_3,
           FUNC_0(VAR_7));
   VAR_6--;
  }

  if (!VAR_6) {
   FUNC_1(VAR_3,
        "clearing the reset reg failed or setting the quiet reg failed for qno: %u\n",
        VAR_7);
   return (-1);
  }

  VAR_10 &= ~VAR_2;
  FUNC_3(VAR_3, FUNC_0(VAR_7),
    VAR_10);

  VAR_10 = FUNC_2(VAR_3,
      FUNC_0(VAR_7));
  if (VAR_10 & VAR_2) {
   FUNC_1(VAR_3, "clearing the reset failed for qno: %u\n",
        VAR_7);
   VAR_9 = -1;
  }
 }

 return (VAR_9);
}
