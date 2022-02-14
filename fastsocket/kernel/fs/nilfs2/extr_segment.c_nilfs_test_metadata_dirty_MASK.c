
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_sufile; int ns_cpfile; } ;
struct nilfs_sb_info {int s_ifile; struct the_nilfs* s_nilfs; } ;


 int FUNC_0 (struct the_nilfs*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nilfs_sb_info *VAR_0)
{
 struct the_nilfs *VAR_1 = VAR_0->s_nilfs;
 int VAR_2 = 0;

 if (FUNC_2(VAR_0->s_ifile))
  VAR_2++;
 if (FUNC_2(VAR_1->ns_cpfile))
  VAR_2++;
 if (FUNC_2(VAR_1->ns_sufile))
  VAR_2++;
 if (VAR_2 || FUNC_1())
  if (FUNC_2(FUNC_0(VAR_1)))
   VAR_2++;
 return VAR_2;
}
