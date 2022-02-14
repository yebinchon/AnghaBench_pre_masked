
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_3__ {int en_mxcsr; } ;
struct savexmm {TYPE_1__ sv_env; } ;
struct TYPE_4__ {struct savexmm sv_xmm; } ;


 int VAR_0 ;







 int FUNC_0 (void*,struct savexmm*,int) ;
 int FUNC_1 (struct savexmm*,void*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct thread*,int,void*,int) ;
 TYPE_2__* FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*) ;

__attribute__((used)) static int
FUNC_5(struct thread *VAR_3, int VAR_4, void *VAR_5, int VAR_6)
{
 struct savexmm *VAR_7;
 int VAR_8;

 if (!VAR_1)
  return (VAR_0);

 VAR_7 = &FUNC_3(VAR_3)->sv_xmm;
 switch (VAR_4) {
 case 134:
  FUNC_4(VAR_3);
  VAR_8 = FUNC_1(VAR_7, VAR_5, sizeof(*VAR_7));
  break;

 case 130:
  FUNC_4(VAR_3);
  VAR_8 = FUNC_0(VAR_5, VAR_7, sizeof(*VAR_7));
  VAR_7->sv_env.en_mxcsr &= VAR_2;
  break;

 case 131:
 case 128:
 case 132:
 case 133:
 case 129:
  VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
  break;

 default:
  return (VAR_0);
 }

 return (VAR_8);
}
