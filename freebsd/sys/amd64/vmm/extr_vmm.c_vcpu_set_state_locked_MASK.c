
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {struct vcpu* vcpu; } ;
struct vcpu {int state; int reqidle; scalar_t__ hostcpu; int mtx; } ;
typedef enum vcpu_state { ____Placeholder_vcpu_state } vcpu_state ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct vm*,int,char*,int ) ;
 int FUNC_2 (struct vm*,int,char*,int ,int ) ;




 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int*,int *,char*,int ) ;
 int FUNC_4 (struct vcpu*) ;
 int FUNC_5 (struct vcpu*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int*) ;

__attribute__((used)) static int
FUNC_8(struct vm *VAR_4, int VAR_5, enum vcpu_state VAR_6,
    bool VAR_7)
{
 struct vcpu *VAR_8;
 int VAR_9;

 VAR_8 = &VAR_4->vcpu[VAR_5];
 FUNC_4(VAR_8);






 if (VAR_7) {
  while (VAR_8->state != 130) {
   VAR_8->reqidle = 1;
   FUNC_5(VAR_8, 0);
   FUNC_1(VAR_4, VAR_5, "vcpu state change from %s to "
       "idle requested", FUNC_6(VAR_8->state));
   FUNC_3(&VAR_8->state, &VAR_8->mtx, "vmstat", VAR_3);
  }
 } else {
  FUNC_0(VAR_8->state != 130, ("invalid transition from "
      "vcpu idle state"));
 }

 if (VAR_8->state == 129) {
  FUNC_0(VAR_8->hostcpu == VAR_2, ("curcpu %d and hostcpu %d "
      "mismatch for running vcpu", VAR_2, VAR_8->hostcpu));
 } else {
  FUNC_0(VAR_8->hostcpu == VAR_1, ("Invalid hostcpu %d for a "
      "vcpu that is not running", VAR_8->hostcpu));
 }







 switch (VAR_8->state) {
 case 130:
 case 129:
 case 128:
  VAR_9 = (VAR_6 != 131);
  break;
 case 131:
  VAR_9 = (VAR_6 == 131);
  break;
 default:
  VAR_9 = 1;
  break;
 }

 if (VAR_9)
  return (VAR_0);

 FUNC_2(VAR_4, VAR_5, "vcpu state changed from %s to %s",
     FUNC_6(VAR_8->state), FUNC_6(VAR_6));

 VAR_8->state = VAR_6;
 if (VAR_6 == 129)
  VAR_8->hostcpu = VAR_2;
 else
  VAR_8->hostcpu = VAR_1;

 if (VAR_6 == 130)
  FUNC_7(&VAR_8->state);

 return (0);
}
