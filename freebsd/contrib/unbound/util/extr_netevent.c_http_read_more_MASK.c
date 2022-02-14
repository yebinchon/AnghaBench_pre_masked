
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int addrlen; int addr; } ;
struct comm_point {int buffer; TYPE_2__ repinfo; TYPE_1__* ev; } ;
typedef int ssize_t ;
struct TYPE_3__ {int ev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int *,int ) ;
 int FUNC_3 (int,void*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int
FUNC_10(int VAR_7, struct comm_point* VAR_8)
{
 ssize_t VAR_9;
 FUNC_1(FUNC_5(VAR_8->buffer) > 0);
 VAR_9 = FUNC_3(VAR_7, (void*)FUNC_4(VAR_8->buffer),
  FUNC_5(VAR_8->buffer), 0);
 if(VAR_9 == 0) {
  return 0;
 } else if(VAR_9 == -1) {

  if(VAR_6 == VAR_1 || VAR_6 == VAR_0)
   return 1;
  FUNC_2("read (in http r)", FUNC_7(VAR_6),
   &VAR_8->repinfo.addr, VAR_8->repinfo.addrlen);
  return 0;
 }
 FUNC_6(VAR_8->buffer, VAR_9);
 return 1;
}
