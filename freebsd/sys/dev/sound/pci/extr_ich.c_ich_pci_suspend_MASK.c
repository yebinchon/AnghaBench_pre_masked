
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sc_info {TYPE_1__* ch; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ run; scalar_t__ run_save; } ;


 int FUNC_0 (struct sc_info*) ;
 int FUNC_1 (struct sc_info*) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 struct sc_info* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct sc_info *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(VAR_1);
 FUNC_0(VAR_2);
 for (VAR_3 = 0 ; VAR_3 < 3; VAR_3++) {
  VAR_2->ch[VAR_3].run_save = VAR_2->ch[VAR_3].run;
  if (VAR_2->ch[VAR_3].run) {
   FUNC_1(VAR_2);
   FUNC_2(0, &VAR_2->ch[VAR_3], VAR_0);
   FUNC_0(VAR_2);
  }
 }
 FUNC_1(VAR_2);
 return (0);
}
