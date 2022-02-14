
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_guts {int nstates; int * stripdata; int * strip; } ;
struct parse {int slen; int * stripdata; int * strip; } ;
typedef int sop ;
typedef int RCHAR_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(struct parse *VAR_1, struct re_guts *VAR_2)
{
 VAR_2->nstates = VAR_1->slen;
 VAR_2->strip = (sop *)FUNC_1((char *)VAR_1->strip,
     VAR_1->slen * sizeof(sop));
 if (VAR_2->strip == ((void*)0)) {
  FUNC_0(VAR_0);
  VAR_2->strip = VAR_1->strip;
 }
 VAR_2->stripdata = (RCHAR_T *)FUNC_1((char *)VAR_1->stripdata,
     VAR_1->slen * sizeof(RCHAR_T));
 if (VAR_2->stripdata == ((void*)0)) {
  FUNC_0(VAR_0);
  VAR_2->stripdata = VAR_1->stripdata;
 }
}
