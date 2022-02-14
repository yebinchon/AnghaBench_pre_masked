
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpu_config {scalar_t__ opened; int * inputintr; scalar_t__ mode; scalar_t__ uart_mode; } ;
struct coproc_operations {int owner; int devc; int (* close ) (int ,int ) ;} ;
struct TYPE_2__ {struct coproc_operations* coproc; } ;


 int VAR_0 ;
 struct mpu_config* VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mpu_config*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_3)
{
 struct mpu_config *VAR_4;
 struct coproc_operations *VAR_5;

 VAR_4 = &VAR_1[VAR_3];
 if (VAR_4->uart_mode)
  FUNC_1(VAR_4);


 VAR_4->mode = 0;
 VAR_4->inputintr = ((void*)0);

 VAR_5 = VAR_2[VAR_3]->coproc;
 if (VAR_5) {
  VAR_5->close(VAR_5->devc, VAR_0);
  FUNC_0(VAR_5->owner);
 }
 VAR_4->opened = 0;
}
