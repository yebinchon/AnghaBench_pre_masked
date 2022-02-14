
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet_hw_tsomax {scalar_t__ tsomaxbytes; scalar_t__ tsomaxsegcount; scalar_t__ tsomaxsegsize; } ;
typedef TYPE_1__* if_t ;
struct TYPE_3__ {scalar_t__ if_hw_tsomax; scalar_t__ if_hw_tsomaxsegcount; scalar_t__ if_hw_tsomaxsegsize; } ;



void
FUNC_0(if_t VAR_0, struct ifnet_hw_tsomax *VAR_1)
{







 if (VAR_1->tsomaxbytes == 0 || (VAR_0->if_hw_tsomax != 0 &&
     VAR_0->if_hw_tsomax < VAR_1->tsomaxbytes)) {
  VAR_1->tsomaxbytes = VAR_0->if_hw_tsomax;
 }
 if (VAR_1->tsomaxsegcount == 0 || (VAR_0->if_hw_tsomaxsegcount != 0 &&
     VAR_0->if_hw_tsomaxsegcount < VAR_1->tsomaxsegcount)) {
  VAR_1->tsomaxsegcount = VAR_0->if_hw_tsomaxsegcount;
 }
 if (VAR_1->tsomaxsegsize == 0 || (VAR_0->if_hw_tsomaxsegsize != 0 &&
     VAR_0->if_hw_tsomaxsegsize < VAR_1->tsomaxsegsize)) {
  VAR_1->tsomaxsegsize = VAR_0->if_hw_tsomaxsegsize;
 }
}
