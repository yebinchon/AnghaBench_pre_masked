
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_blocks_per_segment; unsigned long ns_nrsvsegs; int ns_ndirtyblks; struct inode* ns_sufile; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct inode*,unsigned long*) ;

int FUNC_3(struct the_nilfs *VAR_0)
{
 struct inode *VAR_1 = VAR_0->ns_sufile;
 unsigned long VAR_2, VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, &VAR_2);
 if (FUNC_1(!VAR_4)) {
  VAR_3 = FUNC_0(&VAR_0->ns_ndirtyblks) /
   VAR_0->ns_blocks_per_segment + 1;
  if (VAR_2 <= VAR_0->ns_nrsvsegs + VAR_3)
   VAR_4++;
 }
 return VAR_4;
}
