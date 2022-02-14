
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_27__ {scalar_t__ fc_id; } ;
struct TYPE_28__ {int fcp_enabled; TYPE_3__ rnode; } ;
typedef TYPE_4__ ocs_node_t ;
struct TYPE_29__ {TYPE_2__* header; } ;
typedef TYPE_5__ ocs_hw_sequence_t ;
typedef int int32_t ;
struct TYPE_30__ {int r_ctl; int info; int type; int f_ctl; int s_id; } ;
typedef TYPE_6__ fc_header_t ;
struct TYPE_25__ {TYPE_6__* virt; } ;
struct TYPE_26__ {TYPE_1__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_9 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_10 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_11 (TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static int32_t
FUNC_12(void *VAR_4, ocs_hw_sequence_t *VAR_5)
{

 fc_header_t *VAR_6 = VAR_5->header->dma.virt;
 uint32_t VAR_7;
 ocs_node_t *VAR_8 = (ocs_node_t *)VAR_4;
 int32_t VAR_9 = -1;
 int32_t VAR_10 = 0;

 VAR_7 = FUNC_0(VAR_6->s_id);
 FUNC_2(VAR_7 == VAR_8->rnode.fc_id, -1);

 if (FUNC_0(VAR_6->f_ctl) & VAR_0) {

  if (FUNC_0(VAR_6->f_ctl) & VAR_1) {
   VAR_10 = 1;
  }
  switch (VAR_6->r_ctl) {
  case 131:
   if (VAR_10) {
    VAR_9 = FUNC_10(VAR_8, VAR_5);
   }
   break;

  case 132:
   if (VAR_10) {
    VAR_9 = FUNC_7(VAR_8, VAR_5);
   }else {
    VAR_9 = FUNC_8(VAR_8, VAR_5);
   }
   break;

  case 130:
   switch(VAR_6->type) {
   case 129:
    if (VAR_6->info == VAR_3) {
     if (VAR_8->fcp_enabled) {
      if (VAR_10) {
       VAR_9 = FUNC_3(VAR_8, VAR_5);
      }else {

       VAR_9 = FUNC_4(VAR_8, VAR_5);
      }
     } else {
      VAR_9 = FUNC_11(VAR_8, VAR_5);
     }
    } else if (VAR_6->info == VAR_2) {
     if (VAR_10) {
      VAR_9 = FUNC_5(VAR_8, VAR_5);
     }
    }
    break;
   case 128:
    if (VAR_10) {
     VAR_9 = FUNC_9(VAR_8, VAR_5);
    }
    break;
   default:
    break;
   }
   break;
  }
 } else {
  FUNC_1(VAR_8, "Dropping frame hdr = %08x %08x %08x %08x %08x %08x\n",
       FUNC_6(((uint32_t *)VAR_6)[0]),
       FUNC_6(((uint32_t *)VAR_6)[1]),
       FUNC_6(((uint32_t *)VAR_6)[2]),
       FUNC_6(((uint32_t *)VAR_6)[3]),
       FUNC_6(((uint32_t *)VAR_6)[4]),
       FUNC_6(((uint32_t *)VAR_6)[5]));
 }
 return VAR_9;
}
