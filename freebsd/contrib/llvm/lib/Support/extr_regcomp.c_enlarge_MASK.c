
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {int ssize; int * strip; } ;
typedef int sopno ;
typedef int sop ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(struct parse *VAR_2, sopno VAR_3)
{
 sop *VAR_4;

 if (VAR_2->ssize >= VAR_3)
  return;

 if ((uintptr_t)VAR_3 > VAR_1 / sizeof(sop)) {
  FUNC_0(VAR_0);
  return;
 }

 VAR_4 = (sop *)FUNC_1(VAR_2->strip, VAR_3*sizeof(sop));
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_0);
  return;
 }
 VAR_2->strip = VAR_4;
 VAR_2->ssize = VAR_3;
}
