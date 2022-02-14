
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct control_runtime {TYPE_1__* chip; } ;
struct comm_runtime {int (* write16 ) (struct comm_runtime*,int,int,int,int) ;} ;
struct TYPE_2__ {struct comm_runtime* comm; } ;


 int FUNC_0 (struct comm_runtime*,int,int,int,int) ;
 int FUNC_1 (struct comm_runtime*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(
 struct control_runtime *VAR_0, int VAR_1,
 int VAR_2, bool VAR_3, bool VAR_4)
{
 int VAR_5;
 struct comm_runtime *VAR_6 = VAR_0->chip->comm;



 VAR_5 = VAR_6->write16(VAR_6, 0x02, 0x02,
   (1 << (VAR_1 / 2)) - 1,
   (1 << (VAR_2 / 2)) - 1);
 if (VAR_5 < 0)
  return VAR_5;



 VAR_5 = VAR_6->write16(VAR_6, 0x02, 0x03, 0x00, 0x00);
 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}
