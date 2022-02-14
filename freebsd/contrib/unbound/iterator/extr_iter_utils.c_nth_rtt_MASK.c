
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delegpt_addr {int sel_rtt; struct delegpt_addr* next_result; } ;


 int* FUNC_0 (size_t,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int*,size_t,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_5(struct delegpt_addr* VAR_1, size_t VAR_2, size_t VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 int* VAR_6, *VAR_7;

 if(VAR_2 < 1 || VAR_3 >= VAR_2) {
  return -1;
 }

 VAR_6 = FUNC_0(VAR_2, sizeof(int));
 if(!VAR_6) {
  FUNC_3("malloc failure: allocating rtt_list");
  return -1;
 }
 VAR_7 = VAR_6;

 for(VAR_5=0; VAR_5<VAR_2 && VAR_1; VAR_5++) {
  if(VAR_1->sel_rtt != -1) {
   *VAR_7 = VAR_1->sel_rtt;
   VAR_7++;
  }
  VAR_1=VAR_1->next_result;
 }
 FUNC_4(VAR_6, VAR_2, sizeof(*VAR_6), VAR_0);

 FUNC_2(VAR_3 > 0);
 VAR_4 = VAR_6[VAR_3-1];
 FUNC_1(VAR_6);

 return VAR_4;
}
