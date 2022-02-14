
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {scalar_t__ ssize; int * stripdata; int * strip; } ;
typedef scalar_t__ sopno ;
typedef int sop ;
typedef int RCHAR_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct parse*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(struct parse *VAR_2, sopno VAR_3)
{
 sop *VAR_4;
 RCHAR_T *VAR_5;
 sopno VAR_6;

 if (VAR_2->ssize >= VAR_3)
  return 1;

 VAR_6 = VAR_2->ssize;
 VAR_2->ssize = VAR_3;
 if (FUNC_0(VAR_2) > VAR_0)
  goto oomem;
 VAR_4 = FUNC_2(VAR_2->strip, VAR_2->ssize * sizeof(sop));
 if (VAR_4 == ((void*)0))
  goto oomem;
 VAR_2->strip = VAR_4;
 VAR_5 = FUNC_2(VAR_2->stripdata, VAR_2->ssize * sizeof(RCHAR_T));
 if (VAR_5 == ((void*)0)) {
oomem:
  VAR_2->ssize = VAR_6;
  FUNC_1(VAR_1);
  return 0;
 }
 VAR_2->stripdata = VAR_5;
 return 1;
}
