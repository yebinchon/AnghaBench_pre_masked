
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct urb {void (* complete ) (struct urb*) ;int interval; int dev; void* context; int pipe; int * transfer_buffer; } ;
struct comm_runtime {TYPE_1__* chip; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct urb*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct comm_runtime *VAR_1, struct urb *VAR_2,
  u8 *VAR_3, void *VAR_4, void(*VAR_5)(struct urb *VAR_6))
{
 FUNC_0(VAR_2);
 VAR_2->transfer_buffer = VAR_3;
 VAR_2->pipe = FUNC_1(VAR_1->chip->dev, VAR_0);
 VAR_2->complete = VAR_5;
 VAR_2->context = VAR_4;
 VAR_2->interval = 1;
 VAR_2->dev = VAR_1->chip->dev;
}
