
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_dir_entry {int file_type; } ;
struct inode {size_t i_mode; } ;
typedef size_t mode_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_0(struct nilfs_dir_entry *VAR_3, struct inode *VAR_4)
{
 mode_t VAR_5 = VAR_4->i_mode;

 VAR_3->file_type = VAR_2[(VAR_5 & VAR_0)>>VAR_1];
}
