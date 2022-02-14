
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct protoent {int p_proto; } ;
struct TYPE_2__ {void* s_addr; } ;
struct nat44_cfg_redir {TYPE_1__ raddr; TYPE_1__ paddr; TYPE_1__ laddr; int proto; int mode; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (int ,char*,char*) ;
 struct protoent* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char) ;

__attribute__((used)) static int
FUNC_4(char *VAR_3, int *VAR_4, char ***VAR_5)
{
 struct nat44_cfg_redir *VAR_6;
 struct protoent *VAR_7;
 size_t VAR_8;

 VAR_6 = (struct nat44_cfg_redir *)VAR_3;
 VAR_6->mode = VAR_2;

 VAR_3 = &VAR_3[sizeof(struct nat44_cfg_redir)];
 VAR_8 = sizeof(struct nat44_cfg_redir);




 VAR_7 = FUNC_2(**VAR_5);
 if (VAR_7 == ((void*)0))
  FUNC_1(VAR_0, "redirect_proto: unknown protocol %s", **VAR_5);
 else
  VAR_6->proto = VAR_7->p_proto;

 (*VAR_5)++; (*VAR_4)--;




 FUNC_0(**VAR_5, &VAR_6->laddr);

 (*VAR_5)++; (*VAR_4)--;




 if (*VAR_4 == 0) {
  VAR_6->paddr.s_addr = VAR_1;
  VAR_6->raddr.s_addr = VAR_1;
 } else {

  if (FUNC_3(***VAR_5)) {
   FUNC_0(**VAR_5, &VAR_6->paddr);
   (*VAR_5)++; (*VAR_4)--;





   if (*VAR_4 != 0 && FUNC_3(***VAR_5)) {
    FUNC_0(**VAR_5, &VAR_6->raddr);
    (*VAR_5)++; (*VAR_4)--;
   }
  }
 }

 return (VAR_8);
}
