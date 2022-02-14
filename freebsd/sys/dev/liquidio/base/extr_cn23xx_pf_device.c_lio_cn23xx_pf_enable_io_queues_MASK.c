
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int iq64B; int iq; int oq; } ;
struct TYPE_3__ {scalar_t__ pf_srn; } ;
struct octeon_device {scalar_t__ num_iqs; TYPE_2__ io_qmask; TYPE_1__ sriov_info; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct octeon_device*,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct octeon_device*,int ) ;
 int FUNC_5 (struct octeon_device*,int ) ;
 int FUNC_6 (struct octeon_device*,int ,scalar_t__) ;
 int FUNC_7 (struct octeon_device*,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct octeon_device *VAR_6)
{
 uint64_t VAR_7;
 uint32_t VAR_8, VAR_9 = VAR_0;
 uint32_t VAR_10, VAR_11;

 VAR_11 = VAR_6->sriov_info.pf_srn;
 VAR_8 = VAR_11 + VAR_6->num_iqs;

 for (VAR_10 = VAR_11; VAR_10 < VAR_8; VAR_10++) {

  if (VAR_6->io_qmask.iq64B & FUNC_0(VAR_10 - VAR_11)) {
   VAR_7 = FUNC_5(VAR_6,
     FUNC_1(VAR_10));
   VAR_7 = VAR_7 | VAR_1;
   FUNC_7(VAR_6,
     FUNC_1(VAR_10),
     VAR_7);
  }

  if (VAR_6->io_qmask.iq & FUNC_0(VAR_10 - VAR_11)) {




   VAR_7 = FUNC_5(VAR_6,
     FUNC_1(VAR_10));

   if (VAR_7 & VAR_4) {
    while ((VAR_7 &
     VAR_4) &&
           !(VAR_7 &
      VAR_2) &&
           VAR_9) {
     VAR_7 = FUNC_5(VAR_6,
     FUNC_1(VAR_10));
     VAR_9--;
    }
    if (!VAR_9) {
     FUNC_3(VAR_6, "clearing the reset reg failed or setting the quiet reg failed for qno: %u\n",
          VAR_10);
     return (-1);
    }
    VAR_7 = VAR_7 &
     ~VAR_4;
    FUNC_7(VAR_6,
     FUNC_1(VAR_10),
     VAR_7);

    VAR_7 = FUNC_5(VAR_6,
     FUNC_1(VAR_10));
    if (VAR_7 & VAR_4) {
     FUNC_3(VAR_6, "clearing the reset failed for qno: %u\n",
          VAR_10);
     return (-1);
    }
   }
   VAR_7 = FUNC_5(VAR_6,
     FUNC_1(VAR_10));
   VAR_7 = VAR_7 | VAR_3;
   FUNC_7(VAR_6,
     FUNC_1(VAR_10),
     VAR_7);
  }
 }
 for (VAR_10 = VAR_11; VAR_10 < VAR_8; VAR_10++) {
  uint32_t VAR_12;

  if (VAR_6->io_qmask.oq & FUNC_0(VAR_10 - VAR_11)) {
   VAR_12 = FUNC_4(VAR_6,
     FUNC_2(VAR_10));
   VAR_12 = VAR_12 | VAR_5;
   FUNC_6(VAR_6,
     FUNC_2(VAR_10),
     VAR_12);
  }
 }
 return (0);
}
