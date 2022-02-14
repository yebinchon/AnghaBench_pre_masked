
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_provider {scalar_t__ acw; scalar_t__ error; TYPE_1__* geom; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct g_provider*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct g_provider*,int ,struct g_provider*,int *) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void *VAR_4, int VAR_5)
{
 struct g_provider *VAR_6;
 int VAR_7;

 FUNC_3();
 if (VAR_5 == VAR_0)
  return;
 VAR_6 = VAR_4;
 FUNC_0(VAR_6);





 VAR_7 = (VAR_6->acw == 0 && VAR_6->error == 0 &&
     !(VAR_6->geom->flags & VAR_1));
 FUNC_2(VAR_4, VAR_5);
 if (VAR_7)
  FUNC_1(VAR_3, VAR_6, VAR_2, VAR_6, ((void*)0));
}
