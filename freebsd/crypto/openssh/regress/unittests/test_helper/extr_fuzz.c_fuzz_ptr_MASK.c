
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct fuzz {int strategy; int * fuzzed; int slen; int o1; } ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

u_char *
FUNC_2(struct fuzz *VAR_0)
{
 FUNC_1(VAR_0->fuzzed != ((void*)0));
 switch (VAR_0->strategy) {
 case 134:
 case 132:
 case 133:
 case 131:
 case 130:
  return VAR_0->fuzzed;
 case 128:
  FUNC_1(VAR_0->o1 <= VAR_0->slen);
  return VAR_0->fuzzed + VAR_0->o1;
 case 129:
  FUNC_1(VAR_0->o1 <= VAR_0->slen);
  return VAR_0->fuzzed;
 default:
  FUNC_0();
 }
}
