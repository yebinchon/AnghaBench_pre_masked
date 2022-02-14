
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uni_release {int unrec; int crankback; int facility; int uu; int * git; int notify; int * cause; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

void
FUNC_1(struct uni_release *VAR_1, struct uni_release *VAR_2)
{
 u_int VAR_3, VAR_4;

 for(VAR_3 = VAR_4 = 0; VAR_3 < 2; VAR_3++)
  if(FUNC_0(VAR_1->cause[VAR_3]))
   VAR_2->cause[VAR_4++] = VAR_1->cause[VAR_3];
 if(FUNC_0(VAR_1->notify))
  VAR_2->notify = VAR_1->notify;
 for(VAR_3 = VAR_4 = 0; VAR_3 < VAR_0; VAR_3++)
  if(FUNC_0(VAR_1->git[VAR_3]))
   VAR_2->git[VAR_4++] = VAR_1->git[VAR_3];
 if(FUNC_0(VAR_1->uu))
  VAR_2->uu = VAR_1->uu;
 if(FUNC_0(VAR_1->facility))
  VAR_2->facility = VAR_1->facility;
 if(FUNC_0(VAR_1->crankback))
  VAR_2->crankback = VAR_1->crankback;
 if(FUNC_0(VAR_1->unrec))
  VAR_2->unrec = VAR_1->unrec;
}
