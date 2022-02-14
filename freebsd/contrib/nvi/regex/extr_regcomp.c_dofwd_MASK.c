
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {scalar_t__ error; int* stripdata; } ;
typedef size_t sopno ;
typedef int sop ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct parse *VAR_0, sopno VAR_1, sop VAR_2)
{

 if (VAR_0->error != 0)
  return;

 FUNC_0(VAR_2 < 1);
 VAR_0->stripdata[VAR_1] = VAR_2;
}
