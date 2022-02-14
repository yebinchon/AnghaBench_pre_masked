
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mode; int i_size; int * i_op; TYPE_1__* i_mapping; scalar_t__ i_blocks; int * i_fop; } ;
typedef int dev_t ;
struct TYPE_4__ {int i_data; } ;
struct TYPE_3__ {int * a_ops; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_6(struct inode *VAR_7, dev_t VAR_8)
{
 if (FUNC_3(VAR_7->i_mode)) {
  VAR_7->i_op = &VAR_4;
  VAR_7->i_fop = &VAR_5;
  VAR_7->i_mapping->a_ops = &VAR_0;
 } else if (FUNC_1(VAR_7->i_mode)) {
  VAR_7->i_op = &VAR_1;
  VAR_7->i_fop = &VAR_2;
  VAR_7->i_mapping->a_ops = &VAR_0;
 } else if (FUNC_2(VAR_7->i_mode)) {
  if (VAR_7->i_blocks) {
   VAR_7->i_op = &VAR_6;
   VAR_7->i_mapping->a_ops = &VAR_0;
  } else {
   VAR_7->i_op = &VAR_3;
   FUNC_5(FUNC_0(VAR_7)->i_data, VAR_7->i_size,
    sizeof(FUNC_0(VAR_7)->i_data) - 1);
  }
 } else
  FUNC_4(VAR_7, VAR_7->i_mode, VAR_8);
}
