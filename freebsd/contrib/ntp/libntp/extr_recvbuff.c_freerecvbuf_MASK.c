
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ used; } ;
typedef TYPE_1__ recvbuf_t ;


 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,scalar_t__) ;

void
FUNC_4(recvbuf_t *VAR_4)
{
 if (VAR_4) {
  FUNC_1();
  VAR_4->used--;
  if (VAR_4->used != 0)
   FUNC_3(VAR_0, "******** freerecvbuff non-zero usage: %d *******", VAR_4->used);
  FUNC_0(VAR_1, VAR_4, VAR_3);
  VAR_2++;
  FUNC_2();
 }
}
