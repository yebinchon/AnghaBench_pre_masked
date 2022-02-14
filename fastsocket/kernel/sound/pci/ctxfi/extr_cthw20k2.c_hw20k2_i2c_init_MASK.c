
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hw20k2 {int addr_size; int data_size; int dev_id; } ;
struct hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hw*) ;
 unsigned int FUNC_1 (struct hw*,int ) ;
 int FUNC_2 (struct hw*,int ,unsigned int) ;
 int FUNC_3 (unsigned int*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hw *VAR_4, u8 VAR_5, u8 VAR_6, u8 VAR_7)
{
 struct hw20k2 *VAR_8 = (struct hw20k2 *)VAR_4;
 int VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;

 VAR_9 = FUNC_0(VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8->addr_size = VAR_6;
 VAR_8->data_size = VAR_7;
 VAR_8->dev_id = VAR_5;

 VAR_11 = 0;
 FUNC_3(&VAR_11, VAR_0, VAR_5);

 FUNC_2(VAR_4, VAR_1, VAR_11);

 VAR_10 = FUNC_1(VAR_4, VAR_2);

 FUNC_3(&VAR_10, VAR_3, 1);

 FUNC_2(VAR_4, VAR_2, VAR_10);

 return 0;
}
