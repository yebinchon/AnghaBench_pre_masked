
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; int i_mode; TYPE_1__* i_mapping; int * i_op; int i_blocks; int * i_fop; } ;
struct TYPE_2__ {int * a_ops; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_7)
{
 if (FUNC_2(VAR_7->i_mode)) {
  VAR_7->i_op = &VAR_5;
  VAR_7->i_fop = &VAR_6;
  VAR_7->i_mapping->a_ops = &VAR_1;
 } else if (FUNC_0(VAR_7->i_mode)) {
  VAR_7->i_op = &VAR_2;
  VAR_7->i_fop = &VAR_3;
  VAR_7->i_mapping->a_ops = &VAR_1;
 } else if (FUNC_1(VAR_7->i_mode)) {
  if (!VAR_7->i_blocks)
   VAR_7->i_op = &VAR_4;
  else {
   VAR_7->i_op = &VAR_0;
   VAR_7->i_mapping->a_ops = &VAR_1;
  }
 } else
  FUNC_4(VAR_7, VAR_7->i_mode,
       FUNC_5(VAR_7->i_sb, FUNC_3(VAR_7)));
}
