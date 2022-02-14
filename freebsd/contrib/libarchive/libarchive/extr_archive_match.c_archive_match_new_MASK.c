
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int state; int magic; } ;
struct archive_match {int recursive_include; struct archive archive; int now; int inclusion_gnames; int inclusion_unames; int exclusion_entry_list; int exclusion_tree; int exclusions; int inclusions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

struct archive *
FUNC_5(void)
{
 struct archive_match *VAR_3;

 VAR_3 = (struct archive_match *)FUNC_1(1, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 VAR_3->archive.magic = VAR_0;
 VAR_3->archive.state = VAR_1;
 VAR_3->recursive_include = 1;
 FUNC_3(&(VAR_3->inclusions));
 FUNC_3(&(VAR_3->exclusions));
 FUNC_0(&(VAR_3->exclusion_tree), &VAR_2);
 FUNC_2(&(VAR_3->exclusion_entry_list));
 FUNC_3(&(VAR_3->inclusion_unames));
 FUNC_3(&(VAR_3->inclusion_gnames));
 FUNC_4(&VAR_3->now);
 return (&(VAR_3->archive));
}
