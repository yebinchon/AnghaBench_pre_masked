
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct uni_modify_req {int unrec; int * git; int notify; int mintraffic; int atraffic; int traffic; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;

void
FUNC_1(struct uni_modify_req *VAR_1, struct uni_modify_req *VAR_2)
{
 u_int VAR_3, VAR_4;

 if(FUNC_0(VAR_1->traffic))
  VAR_2->traffic = VAR_1->traffic;
 if(FUNC_0(VAR_1->atraffic))
  VAR_2->atraffic = VAR_1->atraffic;
 if(FUNC_0(VAR_1->mintraffic))
  VAR_2->mintraffic = VAR_1->mintraffic;
 if(FUNC_0(VAR_1->notify))
  VAR_2->notify = VAR_1->notify;
 for(VAR_3 = VAR_4 = 0; VAR_3 < VAR_0; VAR_3++)
  if(FUNC_0(VAR_1->git[VAR_3]))
   VAR_2->git[VAR_4++] = VAR_1->git[VAR_3];
 if(FUNC_0(VAR_1->unrec))
  VAR_2->unrec = VAR_1->unrec;
}
