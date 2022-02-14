
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct uni_drop_party {int unrec; int * git; int uu; int notify; int epref; int cause; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;

void
FUNC_1(struct uni_drop_party *VAR_1, struct uni_drop_party *VAR_2)
{
 u_int VAR_3, VAR_4;

 if(FUNC_0(VAR_1->cause))
  VAR_2->cause = VAR_1->cause;
 if(FUNC_0(VAR_1->epref))
  VAR_2->epref = VAR_1->epref;
 if(FUNC_0(VAR_1->notify))
  VAR_2->notify = VAR_1->notify;
 if(FUNC_0(VAR_1->uu))
  VAR_2->uu = VAR_1->uu;
 for(VAR_3 = VAR_4 = 0; VAR_3 < VAR_0; VAR_3++)
  if(FUNC_0(VAR_1->git[VAR_3]))
   VAR_2->git[VAR_4++] = VAR_1->git[VAR_3];
 if(FUNC_0(VAR_1->unrec))
  VAR_2->unrec = VAR_1->unrec;
}
