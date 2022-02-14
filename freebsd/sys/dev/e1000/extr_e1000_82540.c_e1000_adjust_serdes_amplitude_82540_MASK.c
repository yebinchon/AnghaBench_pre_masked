
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {scalar_t__ (* read ) (struct e1000_hw*,int ,int,int *) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_4__ phy; TYPE_2__ nvm; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int,int *) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_4)
{
 s32 VAR_5;
 u16 VAR_6;

 FUNC_0("e1000_adjust_serdes_amplitude_82540");

 VAR_5 = VAR_4->nvm.ops.read(VAR_4, VAR_2, 1, &VAR_6);
 if (VAR_5)
  goto out;

 if (VAR_6 != VAR_1) {

  VAR_6 &= VAR_3;
  VAR_5 = VAR_4->phy.ops.write_reg(VAR_4, VAR_0,
      VAR_6);
  if (VAR_5)
   goto out;
 }

out:
 return VAR_5;
}
