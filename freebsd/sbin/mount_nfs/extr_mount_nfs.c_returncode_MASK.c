
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_err {int re_errno; } ;
typedef enum tryret { ____Placeholder_tryret } tryret ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum tryret
FUNC_0(enum clnt_stat VAR_3, struct rpc_err *VAR_4)
{

 switch (VAR_3) {
 case 128:
  return (VAR_2);
 case 132:
 case 131:
 case 130:

 case 133:
 case 134:
  return (VAR_1);
 case 129:
  switch (VAR_4->re_errno) {
  case 135:
   return (VAR_2);
  case 136:
   break;
  default:
   return (VAR_1);
  }

 default:
  break;
 }
 return (VAR_0);
}
