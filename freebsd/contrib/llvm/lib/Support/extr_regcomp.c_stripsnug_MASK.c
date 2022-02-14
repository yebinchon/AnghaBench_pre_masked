
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_guts {int nstates; int * strip; } ;
struct parse {int slen; int * strip; } ;
typedef int sop ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(struct parse *VAR_2, struct re_guts *VAR_3)
{
 VAR_3->nstates = VAR_2->slen;
 if ((uintptr_t)VAR_2->slen > VAR_1 / sizeof(sop)) {
  VAR_3->strip = VAR_2->strip;
  FUNC_0(VAR_0);
  return;
 }

 VAR_3->strip = (sop *)FUNC_1((char *)VAR_2->strip, VAR_2->slen * sizeof(sop));
 if (VAR_3->strip == ((void*)0)) {
  FUNC_0(VAR_0);
  VAR_3->strip = VAR_2->strip;
 }
}
