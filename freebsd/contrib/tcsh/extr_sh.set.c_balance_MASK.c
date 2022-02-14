
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {int v_bal; struct varent* v_right; struct varent* v_left; void** v_link; struct varent* v_parent; } ;


 void* FUNC_0 (struct varent*) ;
 void* FUNC_1 (struct varent*) ;

__attribute__((used)) static void
FUNC_2(struct varent *VAR_0, int VAR_1, int VAR_2)
{
    struct varent *VAR_3;


    struct varent *VAR_4;

    int VAR_5;
    for (; (VAR_3 = VAR_0->v_parent) != 0; VAR_0 = VAR_3, VAR_1 = VAR_5) {
 VAR_5 = VAR_3->v_right == VAR_0;
 if (VAR_1 ^ VAR_2) {
     switch (VAR_0->v_bal) {
     case -1:
  VAR_0->v_bal = 0;
  break;
     case 0:
  VAR_0->v_bal = 1;
  break;
     case 1:
  switch (VAR_0->v_right->v_bal) {
  case 1:
      VAR_3->v_link[VAR_5] = FUNC_0(VAR_0);
      VAR_0->v_left->v_bal = 0;
      VAR_0->v_bal = 0;
      break;
  case 0:
      VAR_3->v_link[VAR_5] = FUNC_0(VAR_0);
      VAR_0->v_left->v_bal = 1;
      VAR_0->v_bal = -1;
      break;
  case -1:
      (void) FUNC_1(VAR_0->v_right);
      VAR_3->v_link[VAR_5] = FUNC_0(VAR_0);
      VAR_0->v_left->v_bal =
   VAR_0->v_bal < 1 ? 0 : -1;
      VAR_0->v_right->v_bal =
   VAR_0->v_bal > -1 ? 0 : 1;
      VAR_0->v_bal = 0;
      break;
  default:
      break;
  }
  break;
     default:
  break;
     }
 }
 else {
     switch (VAR_0->v_bal) {
     case 1:
  VAR_0->v_bal = 0;
  break;
     case 0:
  VAR_0->v_bal = -1;
  break;
     case -1:
  switch (VAR_0->v_left->v_bal) {
  case -1:
      VAR_3->v_link[VAR_5] = FUNC_1(VAR_0);
      VAR_0->v_right->v_bal = 0;
      VAR_0->v_bal = 0;
      break;
  case 0:
      VAR_3->v_link[VAR_5] = FUNC_1(VAR_0);
      VAR_0->v_right->v_bal = -1;
      VAR_0->v_bal = 1;
      break;
  case 1:
      (void) FUNC_0(VAR_0->v_left);
      VAR_3->v_link[VAR_5] = FUNC_1(VAR_0);
      VAR_0->v_left->v_bal =
   VAR_0->v_bal < 1 ? 0 : -1;
      VAR_0->v_right->v_bal =
   VAR_0->v_bal > -1 ? 0 : 1;
      VAR_0->v_bal = 0;
      break;
  default:
      break;
  }
  break;
     default:
  break;
     }
 }




 if ((VAR_0->v_bal == 0) ^ VAR_2)
     break;
    }
}
