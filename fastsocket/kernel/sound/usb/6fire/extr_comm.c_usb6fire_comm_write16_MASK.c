
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct comm_runtime {TYPE_1__* chip; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct comm_runtime *VAR_0, u8 VAR_1,
  u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 u8 VAR_5[13];

 FUNC_0(VAR_5, 0x00, VAR_1, VAR_2, VAR_3, VAR_4);
 return FUNC_1(VAR_5, VAR_0->chip->dev);
}
