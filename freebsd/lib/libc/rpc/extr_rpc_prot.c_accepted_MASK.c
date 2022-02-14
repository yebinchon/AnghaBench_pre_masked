
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* s2; void* s1; } ;
struct rpc_err {TYPE_1__ re_lb; int re_status; } ;
typedef void* int32_t ;
typedef enum accept_stat { ____Placeholder_accept_stat } accept_stat ;



 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(enum accept_stat VAR_8, struct rpc_err *VAR_9)
{

 FUNC_0(VAR_9 != ((void*)0));

 switch (VAR_8) {

 case 130:
  VAR_9->re_status = VAR_4;
  return;

 case 131:
  VAR_9->re_status = VAR_5;
  return;

 case 132:
  VAR_9->re_status = VAR_3;
  return;

 case 133:
  VAR_9->re_status = VAR_1;
  return;

 case 128:
  VAR_9->re_status = VAR_7;
  return;

 case 129:
  VAR_9->re_status = VAR_6;
  return;
 }


 VAR_9->re_status = VAR_2;
 VAR_9->re_lb.s1 = (int32_t)VAR_0;
 VAR_9->re_lb.s2 = (int32_t)VAR_8;
}
