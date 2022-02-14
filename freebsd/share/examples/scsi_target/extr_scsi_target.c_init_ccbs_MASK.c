
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_4__ {int func_code; } ;
struct ccb_immediate_notify {TYPE_2__ ccb_h; } ;
struct TYPE_3__ {struct atio_descr* targ_descr; int func_code; } ;
struct ccb_accept_tio {TYPE_1__ ccb_h; } ;
struct atio_descr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ccb_accept_tio*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (union ccb*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4()
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct ccb_accept_tio *VAR_4;
  struct atio_descr *VAR_5;
  struct ccb_immediate_notify *VAR_6;

  VAR_4 = (struct ccb_accept_tio *)FUNC_1(sizeof(*VAR_4));
  if (VAR_4 == ((void*)0)) {
   FUNC_3("malloc ATIO");
   return (-1);
  }
  VAR_5 = (struct atio_descr *)FUNC_1(sizeof(*VAR_5));
  if (VAR_5 == ((void*)0)) {
   FUNC_0(VAR_4);
   FUNC_3("malloc atio_descr");
   return (-1);
  }
  VAR_4->ccb_h.func_code = VAR_1;
  VAR_4->ccb_h.targ_descr = VAR_5;
  FUNC_2((union ccb *)VAR_4, 1);

  VAR_6 = (struct ccb_immediate_notify *)FUNC_1(sizeof(*VAR_6));
  if (VAR_6 == ((void*)0)) {
   FUNC_3("malloc INOT");
   return (-1);
  }
  VAR_6->ccb_h.func_code = VAR_2;
  FUNC_2((union ccb *)VAR_6, 1);
 }

 return (0);
}
