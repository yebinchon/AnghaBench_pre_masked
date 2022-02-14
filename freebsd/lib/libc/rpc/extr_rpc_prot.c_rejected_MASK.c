
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* s2; void* s1; } ;
struct rpc_err {TYPE_1__ re_lb; int re_status; } ;
typedef void* int32_t ;
typedef enum reject_stat { ____Placeholder_reject_stat } reject_stat ;



 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(enum reject_stat VAR_4, struct rpc_err *VAR_5)
{

 FUNC_0(VAR_5 != ((void*)0));

 switch (VAR_4) {
 case 128:
  VAR_5->re_status = VAR_3;
  return;

 case 129:
  VAR_5->re_status = VAR_1;
  return;
 }


 VAR_5->re_status = VAR_2;
 VAR_5->re_lb.s1 = (int32_t)VAR_0;
 VAR_5->re_lb.s2 = (int32_t)VAR_4;
}
