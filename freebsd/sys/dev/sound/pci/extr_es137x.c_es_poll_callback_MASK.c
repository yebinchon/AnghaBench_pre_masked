
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct es_info {scalar_t__ polling; TYPE_1__* ch; int poll_timer; } ;
struct TYPE_2__ {int channel; } ;


 int FUNC_0 (struct es_info*) ;
 int VAR_0 ;
 int FUNC_1 (struct es_info*) ;
 int FUNC_2 (int *,int,void (*) (void*),struct es_info*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct es_info*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1)
{
 struct es_info *VAR_2 = VAR_1;
 uint32_t VAR_3 = 0;
 int VAR_4;

 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(VAR_2);
 if (VAR_2->polling == 0 || FUNC_4(VAR_2) == 0) {
  FUNC_1(VAR_2);
  return;
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (FUNC_5(&VAR_2->ch[VAR_4]) != 0)
   VAR_3 |= 1 << VAR_4;
 }


 FUNC_2(&VAR_2->poll_timer, 1 ,
     FUNC_6, VAR_2);

 FUNC_1(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3 & (1 << VAR_4))
   FUNC_3(VAR_2->ch[VAR_4].channel);
 }
}
