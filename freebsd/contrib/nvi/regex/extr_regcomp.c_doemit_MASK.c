
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {scalar_t__ error; size_t slen; size_t ssize; size_t* stripdata; int * strip; } ;
typedef int sop ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct parse*,int) ;

__attribute__((used)) static void
FUNC_2(struct parse *VAR_0, sop VAR_1, size_t VAR_2)
{

 if (VAR_0->error != 0)
  return;


 FUNC_0(VAR_2 < 1);


 if (VAR_0->slen >= VAR_0->ssize)
  if (!FUNC_1(VAR_0, (VAR_0->ssize+1) / 2 * 3))
   return;


 VAR_0->strip[VAR_0->slen] = VAR_1;
 VAR_0->stripdata[VAR_0->slen] = VAR_2;
 VAR_0->slen++;
}
