
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxstate {scalar_t__ lastcpu; } ;
struct vmx {int vm; struct vmxstate* state; } ;
typedef int pmap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int ,int) ;
 int FUNC_5 (struct vmx*,int,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct vmx *VAR_5, int VAR_6, pmap_t VAR_7)
{
 struct vmxstate *VAR_8;

 VAR_8 = &VAR_5->state[VAR_6];
 if (VAR_8->lastcpu == VAR_4)
  return;

 VAR_8->lastcpu = VAR_4;

 FUNC_4(VAR_5->vm, VAR_6, VAR_0, 1);

 FUNC_0(VAR_3, FUNC_3());
 FUNC_0(VAR_1, FUNC_1());
 FUNC_0(VAR_2, FUNC_2());
 FUNC_5(VAR_5, VAR_6, VAR_7, 1);
}
