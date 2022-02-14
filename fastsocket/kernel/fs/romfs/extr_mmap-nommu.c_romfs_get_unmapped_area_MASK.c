
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mtd_info {unsigned long (* get_unmapped_area ) (struct mtd_info*,unsigned long,unsigned long,unsigned long) ;unsigned long size; } ;
struct inode {TYPE_2__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_6__ {scalar_t__ i_dataoffset; } ;
struct TYPE_5__ {struct mtd_info* s_mtd; } ;
struct TYPE_4__ {struct inode* host; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 unsigned long FUNC_1 (struct inode*) ;
 unsigned long FUNC_2 (struct mtd_info*,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_3(struct file *VAR_3,
          unsigned long VAR_4,
          unsigned long VAR_5,
          unsigned long VAR_6,
          unsigned long VAR_7)
{
 struct inode *VAR_8 = VAR_3->f_mapping->host;
 struct mtd_info *VAR_9 = VAR_8->i_sb->s_mtd;
 unsigned long VAR_10, VAR_11;

 if (!VAR_9)
  goto cant_map_directly;

 VAR_10 = FUNC_1(VAR_8);
 VAR_11 = VAR_6 << VAR_2;
 if (VAR_11 > VAR_10 || VAR_5 > VAR_10 || VAR_11 > VAR_10 - VAR_5)
  return (unsigned long) -VAR_0;


 if (VAR_9->get_unmapped_area) {
  if (VAR_4 != 0)
   return (unsigned long) -VAR_0;

  if (VAR_5 > VAR_9->size || VAR_6 >= (VAR_9->size >> VAR_2))
   return (unsigned long) -VAR_0;

  VAR_11 += FUNC_0(VAR_8)->i_dataoffset;
  if (VAR_11 > VAR_9->size - VAR_5)
   return (unsigned long) -VAR_0;

  return VAR_9->get_unmapped_area(VAR_9, VAR_5, VAR_11, VAR_7);
 }

cant_map_directly:
 return (unsigned long) -VAR_1;
}
