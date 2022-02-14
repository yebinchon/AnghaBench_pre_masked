
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hda_bus {struct azx* private_data; } ;
struct TYPE_4__ {int * buf; } ;
struct TYPE_3__ {int * cmds; } ;
struct azx {int reg_lock; TYPE_2__ corb; TYPE_1__ rirb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct azx*,int ) ;
 int FUNC_2 (struct azx*,int ,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct hda_bus *VAR_5, u32 VAR_6)
{
 struct azx *VAR_7 = VAR_5->private_data;
 unsigned int VAR_8 = FUNC_0(VAR_6);
 unsigned int VAR_9, VAR_10;

 FUNC_4(&VAR_7->reg_lock);


 VAR_9 = FUNC_1(VAR_7, VAR_1);
 if (VAR_9 == 0xffff) {

  FUNC_5(&VAR_7->reg_lock);
  return -VAR_3;
 }
 VAR_9++;
 VAR_9 %= VAR_4;

 VAR_10 = FUNC_1(VAR_7, VAR_0);
 if (VAR_9 == VAR_10) {

  FUNC_5(&VAR_7->reg_lock);
  return -VAR_2;
 }

 VAR_7->rirb.cmds[VAR_8]++;
 VAR_7->corb.buf[VAR_9] = FUNC_3(VAR_6);
 FUNC_2(VAR_7, VAR_1, VAR_9);

 FUNC_5(&VAR_7->reg_lock);

 return 0;
}
