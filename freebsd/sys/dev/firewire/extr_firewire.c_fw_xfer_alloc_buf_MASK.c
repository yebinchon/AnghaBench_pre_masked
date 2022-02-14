
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct malloc_type {int dummy; } ;
struct TYPE_4__ {int pay_len; int * payload; } ;
struct TYPE_3__ {int pay_len; int * payload; } ;
struct fw_xfer {TYPE_2__ send; TYPE_1__ recv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct malloc_type*) ;
 struct fw_xfer* FUNC_1 (struct malloc_type*) ;
 int FUNC_2 (struct fw_xfer*) ;
 void* FUNC_3 (int,struct malloc_type*,int) ;

struct fw_xfer *
FUNC_4(struct malloc_type *VAR_2, int VAR_3, int VAR_4)
{
 struct fw_xfer *VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 VAR_5->send.pay_len = VAR_3;
 VAR_5->recv.pay_len = VAR_4;
 if (VAR_3 > 0) {
  VAR_5->send.payload = FUNC_3(VAR_3, VAR_2, VAR_0 | VAR_1);
  if (VAR_5->send.payload == ((void*)0)) {
   FUNC_2(VAR_5);
   return (((void*)0));
  }
 }
 if (VAR_4 > 0) {
  VAR_5->recv.payload = FUNC_3(VAR_4, VAR_2, VAR_0);
  if (VAR_5->recv.payload == ((void*)0)) {
   if (VAR_5->send.payload != ((void*)0))
    FUNC_0(VAR_5->send.payload, VAR_2);
   FUNC_2(VAR_5);
   return (((void*)0));
  }
 }
 return (VAR_5);
}
