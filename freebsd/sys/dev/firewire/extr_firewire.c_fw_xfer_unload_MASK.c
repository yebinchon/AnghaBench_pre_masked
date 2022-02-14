
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_xfer {int flag; scalar_t__ resp; int * fc; TYPE_1__* q; } ;
struct TYPE_2__ {int queued; int q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct fw_xfer*,int ,int ) ;
 int FUNC_3 (int *,struct fw_xfer*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;

void
FUNC_5(struct fw_xfer *VAR_5)
{

 if (VAR_5 == ((void*)0))
  return;

 if (VAR_5->fc != ((void*)0)) {
  FUNC_0(VAR_5->fc);
  if (VAR_5->flag & VAR_1) {
   FUNC_2(&VAR_5->q->q, VAR_5, VAR_3, VAR_4);
   VAR_5->flag &= ~VAR_1;



  }
  FUNC_1(VAR_5->fc);





  FUNC_3(VAR_5->fc, VAR_5);

  if (VAR_5->flag & VAR_2)





   FUNC_4("fw_xfer_free FWXF_START\n");

 }
 VAR_5->flag = VAR_0;
 VAR_5->resp = 0;
}
