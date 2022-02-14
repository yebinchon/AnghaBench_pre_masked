
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator {int max_uvolt; int min_uvolt; scalar_t__ enable_cnt; struct regnode* regnode; int cdev; } ;
struct TYPE_2__ {int max_uvolt; int min_uvolt; } ;
struct regnode {TYPE_1__ std_param; int consumers_list; int ref_cnt; } ;
typedef struct regulator* regulator_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct regnode*) ;
 int FUNC_1 (struct regnode*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,struct regulator*,int ) ;
 int VAR_3 ;
 struct regulator* FUNC_4 (int,int ,int) ;

__attribute__((used)) static regulator_t
FUNC_5(struct regnode *VAR_4, device_t VAR_5)
{
 struct regulator *VAR_6;

 FUNC_2();

 VAR_6 = FUNC_4(sizeof(struct regulator), VAR_0,
     VAR_1 | VAR_2);
 VAR_6->cdev = VAR_5;
 VAR_6->regnode = VAR_4;
 VAR_6->enable_cnt = 0;

 FUNC_1(VAR_4);
 VAR_4->ref_cnt++;
 FUNC_3(&VAR_4->consumers_list, VAR_6, VAR_3);
 VAR_6 ->min_uvolt = VAR_4->std_param.min_uvolt;
 VAR_6 ->max_uvolt = VAR_4->std_param.max_uvolt;
 FUNC_0(VAR_4);

 return (VAR_6);
}
