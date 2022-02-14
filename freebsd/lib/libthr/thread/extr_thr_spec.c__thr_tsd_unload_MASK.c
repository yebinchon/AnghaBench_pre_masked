
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pthread {int dummy; } ;
struct dl_phdr_info {int dummy; } ;
struct TYPE_2__ {void (* destructor ) (void*) ;int allocated; } ;


 int VAR_0 ;
 int FUNC_0 (struct pthread*,int *) ;
 int FUNC_1 (struct pthread*,int *) ;
 scalar_t__ FUNC_2 (struct dl_phdr_info*,void (*) (void*)) ;
 struct pthread* FUNC_3 () ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void
FUNC_4(struct dl_phdr_info *VAR_3)
{
 struct pthread *VAR_4;
 void (*VAR_5)(void *);
 int VAR_6;

 VAR_4 = FUNC_3();
 FUNC_0(VAR_4, &VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (!VAR_2[VAR_6].allocated)
   continue;
  VAR_5 = VAR_2[VAR_6].destructor;
  if (VAR_5 == ((void*)0))
   continue;
  if (FUNC_2(VAR_3, VAR_5))
   VAR_2[VAR_6].destructor = ((void*)0);
 }
 FUNC_1(VAR_4, &VAR_1);
}
