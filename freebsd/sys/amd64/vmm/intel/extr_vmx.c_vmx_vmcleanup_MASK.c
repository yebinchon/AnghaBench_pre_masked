
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct vmx {TYPE_1__* state; int vm; } ;
struct TYPE_2__ {int vpid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vmx*,int ) ;
 int FUNC_1 (struct vmx*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 int VAR_4;
 struct vmx *VAR_5 = VAR_3;
 uint16_t VAR_6;

 if (FUNC_0(VAR_5, 0))
  FUNC_3(VAR_5->vm, VAR_0, VAR_2);

 VAR_6 = FUNC_2(VAR_5->vm);
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
  FUNC_4(VAR_5->state[VAR_4].vpid);

 FUNC_1(VAR_5, VAR_1);

 return;
}
