
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int channel; } ;
struct atiixp_info {scalar_t__ polling; TYPE_1__ rch; TYPE_1__ pch; int poll_timer; } ;


 scalar_t__ FUNC_0 (struct atiixp_info*) ;
 int FUNC_1 (struct atiixp_info*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct atiixp_info*) ;
 int FUNC_4 (int *,int,void (*) (void*),struct atiixp_info*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_0)
{
 struct atiixp_info *VAR_1 = VAR_0;
 uint32_t VAR_2 = 0;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(VAR_1);
 if (VAR_1->polling == 0 || FUNC_0(VAR_1) == 0) {
  FUNC_3(VAR_1);
  return;
 }

 VAR_2 |= (FUNC_2(&VAR_1->pch) != 0) ? 1 : 0;
 VAR_2 |= (FUNC_2(&VAR_1->rch) != 0) ? 2 : 0;


 FUNC_4(&VAR_1->poll_timer, 1 ,
     FUNC_6, VAR_1);

 FUNC_3(VAR_1);

 if (VAR_2 & 1)
  FUNC_5(VAR_1->pch.channel);
 if (VAR_2 & 2)
  FUNC_5(VAR_1->rch.channel);
}
