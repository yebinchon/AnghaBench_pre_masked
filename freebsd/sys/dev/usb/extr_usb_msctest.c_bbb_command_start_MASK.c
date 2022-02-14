
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ usb_timeout_t ;
typedef void* uint8_t ;
struct bbb_transfer {size_t data_len; size_t data_rem; int error; size_t cmd_len; size_t state; int mtx; int cv; int * xfer; TYPE_1__* cbw; scalar_t__ actlen; scalar_t__ data_timeout; void* data_ptr; void* dir; void* lun; } ;
struct TYPE_2__ {scalar_t__ CBWCDB; } ;


 void* VAR_0 ;
 int FUNC_0 (int,char*,int,char*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (scalar_t__*,void*,size_t) ;
 int FUNC_5 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct bbb_transfer *VAR_2, uint8_t VAR_3, uint8_t VAR_4,
    void *VAR_5, size_t VAR_6, void *VAR_7, size_t VAR_8,
    usb_timeout_t VAR_9)
{
 VAR_2->lun = VAR_4;
 VAR_2->dir = VAR_6 ? VAR_3 : VAR_0;
 VAR_2->data_ptr = VAR_5;
 VAR_2->data_len = VAR_6;
 VAR_2->data_rem = VAR_6;
 VAR_2->data_timeout = (VAR_9 + VAR_1);
 VAR_2->actlen = 0;
 VAR_2->error = 0;
 VAR_2->cmd_len = VAR_8;
 FUNC_5(&VAR_2->cbw->CBWCDB, 0, sizeof(VAR_2->cbw->CBWCDB));
 FUNC_4(&VAR_2->cbw->CBWCDB, VAR_7, VAR_8);
 FUNC_0(1, "SCSI cmd = %*D\n", (int)VAR_8, (char *)VAR_2->cbw->CBWCDB, ":");

 FUNC_1(&VAR_2->mtx);
 FUNC_7(VAR_2->xfer[VAR_2->state]);

 while (FUNC_6(VAR_2->xfer[VAR_2->state])) {
  FUNC_3(&VAR_2->cv, &VAR_2->mtx);
 }
 FUNC_2(&VAR_2->mtx);
 return (VAR_2->error);
}
