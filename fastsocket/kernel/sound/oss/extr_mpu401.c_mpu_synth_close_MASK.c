
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mpu_config {scalar_t__ mode; scalar_t__ opened; int * inputintr; } ;
struct coproc_operations {int owner; int devc; int (* close ) (int ,int ) ;} ;
struct TYPE_4__ {struct coproc_operations* coproc; } ;
struct TYPE_3__ {int midi_dev; } ;


 int VAR_0 ;
 struct mpu_config* VAR_1 ;
 TYPE_2__** VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__** VAR_3 ;

__attribute__((used)) static void FUNC_3(int VAR_4)
{
 int VAR_5;
 struct mpu_config *VAR_6;
 struct coproc_operations *VAR_7;

 VAR_5 = VAR_3[VAR_4]->midi_dev;

 VAR_6 = &VAR_1[VAR_5];
 FUNC_1(VAR_5, 0x15, 0);
 FUNC_1(VAR_5, 0x8a, 0);

 VAR_6->inputintr = ((void*)0);

 VAR_7 = VAR_2[VAR_5]->coproc;
 if (VAR_7) {
  VAR_7->close(VAR_7->devc, VAR_0);
  FUNC_0(VAR_7->owner);
 }
 VAR_6->opened = 0;
 VAR_6->mode = 0;
}
