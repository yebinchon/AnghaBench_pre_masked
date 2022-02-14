
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dxfer_len; scalar_t__ data_ptr; } ;
union ccb {TYPE_1__ csio; } ;
struct TYPE_11__ {int priv; } ;
struct TYPE_10__ {union ccb* ccb; } ;
struct TYPE_9__ {int eot; int size; } ;
typedef TYPE_2__* PSG ;
typedef TYPE_3__* POS_CMDEXT ;
typedef TYPE_4__* PCOMMAND ;
typedef int HPT_U8 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_2(PCOMMAND VAR_2, PSG VAR_3, int VAR_4)
{
 POS_CMDEXT VAR_5 = (POS_CMDEXT)VAR_2->priv;
 union ccb *VAR_6 = VAR_5->ccb;

 if (VAR_4) {
  FUNC_1(VAR_3, (HPT_U8 *)VAR_6->csio.data_ptr);
  VAR_3->size = VAR_6->csio.dxfer_len;
  VAR_3->eot = 1;
  return VAR_1;
 }


 FUNC_0(0);
 return VAR_0;
}
