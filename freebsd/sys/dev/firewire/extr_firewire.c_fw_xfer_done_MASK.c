
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_xfer {int (* hand ) (struct fw_xfer*) ;int * fc; } ;


 int FUNC_0 (int *,struct fw_xfer*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct fw_xfer*) ;

void
FUNC_4(struct fw_xfer *VAR_0)
{
 if (VAR_0->hand == ((void*)0)) {
  FUNC_2("hand == NULL\n");
  return;
 }

 if (VAR_0->fc == ((void*)0))
  FUNC_1("fw_xfer_done: why xfer->fc is NULL?");

 FUNC_0(VAR_0->fc, VAR_0);
 VAR_0->hand(VAR_0);
}
