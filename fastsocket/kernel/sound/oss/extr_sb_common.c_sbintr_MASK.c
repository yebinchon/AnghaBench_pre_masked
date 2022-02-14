
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int irq_ok; int model; } ;
typedef TYPE_1__ sb_devc ;
typedef int irqreturn_t ;


 int VAR_0 ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 sb_devc *VAR_3 = VAR_2;

 VAR_3->irq_ok = 1;

 switch (VAR_3->model) {
 case 128:
  FUNC_1 (VAR_3);
  break;

 case 129:
  FUNC_0 (VAR_3);
  break;
 default:
  FUNC_2 (VAR_3);
  break;
 }
 return VAR_0;
}
