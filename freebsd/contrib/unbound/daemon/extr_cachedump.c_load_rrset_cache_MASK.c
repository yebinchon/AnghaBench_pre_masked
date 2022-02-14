
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * scratch_buffer; } ;
struct worker {TYPE_1__ env; } ;
typedef int sldns_buffer ;
typedef int RES ;


 int FUNC_0 (int *,int *,struct worker*) ;
 int FUNC_1 (int *,int *,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(RES* VAR_0, struct worker* VAR_1)
{
 sldns_buffer* VAR_2 = VAR_1->env.scratch_buffer;
 if(!FUNC_1(VAR_0, VAR_2, "START_RRSET_CACHE")) return 0;
 while(FUNC_3(VAR_0, VAR_2) &&
  FUNC_4((char*)FUNC_2(VAR_2), "END_RRSET_CACHE")!=0) {
  if(!FUNC_0(VAR_0, VAR_2, VAR_1))
   return 0;
 }
 return 1;
}
