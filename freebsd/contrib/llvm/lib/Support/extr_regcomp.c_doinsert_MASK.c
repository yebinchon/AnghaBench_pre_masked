
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {scalar_t__ error; int* pbegin; int* pend; int * strip; } ;
typedef int sopno ;
typedef int sop ;


 int FUNC_0 (int ,size_t) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct parse *VAR_1, sop VAR_2, size_t VAR_3, sopno VAR_4)
{
 sopno VAR_5;
 sop VAR_6;
 int VAR_7;


 if (VAR_1->error != 0)
  return;

 VAR_5 = FUNC_1();
 FUNC_0(VAR_2, VAR_3);
 FUNC_2(FUNC_1() == VAR_5+1);
 VAR_6 = VAR_1->strip[VAR_5];


 FUNC_2(VAR_4 > 0);
 for (VAR_7 = 1; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_1->pbegin[VAR_7] >= VAR_4) {
   VAR_1->pbegin[VAR_7]++;
  }
  if (VAR_1->pend[VAR_7] >= VAR_4) {
   VAR_1->pend[VAR_7]++;
  }
 }

 FUNC_3((char *)&VAR_1->strip[VAR_4+1], (char *)&VAR_1->strip[VAR_4],
      (FUNC_1()-VAR_4-1)*sizeof(sop));
 VAR_1->strip[VAR_4] = VAR_6;
}
