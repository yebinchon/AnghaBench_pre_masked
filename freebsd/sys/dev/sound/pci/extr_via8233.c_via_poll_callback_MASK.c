
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct via_info {scalar_t__ polling; TYPE_1__* rch; TYPE_1__* pch; int lock; int poll_timer; } ;
struct TYPE_2__ {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,void (*) (void*),struct via_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct via_info*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 struct via_info *VAR_4 = VAR_3;
 uint32_t VAR_5 = 0, VAR_6 = 0;
 int VAR_7;

 if (VAR_4 == ((void*)0))
  return;

 FUNC_2(VAR_4->lock);
 if (VAR_4->polling == 0 || FUNC_4(VAR_4) == 0) {
  FUNC_3(VAR_4->lock);
  return;
 }

 for (VAR_7 = 0; VAR_7 < VAR_0 + VAR_1; VAR_7++)
  VAR_5 |= (FUNC_5(&VAR_4->pch[VAR_7]) != 0) ?
      (1 << VAR_7) : 0;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  VAR_6 |= (FUNC_5(&VAR_4->rch[VAR_7]) != 0) ?
      (1 << VAR_7) : 0;


 FUNC_0(&VAR_4->poll_timer, 1 ,
     FUNC_6, VAR_4);

 FUNC_3(VAR_4->lock);

 for (VAR_7 = 0; VAR_7 < VAR_0 + VAR_1; VAR_7++) {
  if (VAR_5 & (1 << VAR_7))
   FUNC_1(VAR_4->pch[VAR_7].channel);
 }
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_6 & (1 << VAR_7))
   FUNC_1(VAR_4->rch[VAR_7].channel);
 }
}
