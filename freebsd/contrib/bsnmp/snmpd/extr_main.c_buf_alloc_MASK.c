
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rxbuf; int txbuf; } ;
struct TYPE_3__ {int noRxbuf; int noTxbuf; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,char*) ;

void *
FUNC_2(int VAR_3)
{
 void *VAR_4;

 if ((VAR_4 = FUNC_0(VAR_3 ? VAR_1.txbuf : VAR_1.rxbuf)) == ((void*)0)) {
  FUNC_1(VAR_0, "cannot allocate buffer");
  if (VAR_3)
   VAR_2.noTxbuf++;
  else
   VAR_2.noRxbuf++;
  return (((void*)0));
 }
 return (VAR_4);
}
