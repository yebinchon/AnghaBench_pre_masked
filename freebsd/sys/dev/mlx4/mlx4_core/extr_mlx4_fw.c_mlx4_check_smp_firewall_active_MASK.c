
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (struct mlx4_dev*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mlx4_dev *VAR_4,
       struct mlx4_cmd_mailbox *VAR_5)
{





 u32 VAR_6, VAR_7;
 u32 VAR_8, VAR_9;

 FUNC_0(VAR_6, VAR_5->buf,
   0x10);
 FUNC_1(VAR_4, "SMP firewall set_attribute_mask = 0x%x\n",
   VAR_6);

 FUNC_0(VAR_7, VAR_5->buf,
   0x20);
 FUNC_1(VAR_4, "SMP firewall getresp_attribute_mask = 0x%x\n",
   VAR_7);

 FUNC_0(VAR_8, VAR_5->buf,
   0x40);
 FUNC_1(VAR_4, "SMP firewall trap_attribute_mask = 0x%x\n",
   VAR_8);

 FUNC_0(VAR_9, VAR_5->buf,
   0x70);
 FUNC_1(VAR_4, "SMP firewall traprepress_attribute_mask = 0x%x\n",
   VAR_9);

 if (VAR_6 && VAR_7 && VAR_8 &&
     VAR_9)
  return 1;

 return 0;
}
