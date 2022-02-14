
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tarfile {scalar_t__ tf_cachesz; struct tarfile* pkg_chain; struct tarfile* tf_cache; struct tarfile* tf_next; struct tarfile* pkg_first; int pkg_fd; int pkg_zs; } ;
struct package {scalar_t__ tf_cachesz; struct package* pkg_chain; struct package* tf_cache; struct package* tf_next; struct package* pkg_first; int pkg_fd; int pkg_zs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tarfile*) ;
 int FUNC_2 (int *) ;
 struct tarfile* VAR_0 ;

void
FUNC_3(void)
{
 struct package *VAR_1;
 struct tarfile *VAR_2, *VAR_3;

 while (VAR_0 != ((void*)0)) {
  FUNC_2(&VAR_0->pkg_zs);
  FUNC_0(VAR_0->pkg_fd);

  VAR_2 = VAR_0->pkg_first;
  while (VAR_2 != ((void*)0)) {
   VAR_3 = VAR_2->tf_next;
   if (VAR_2->tf_cachesz > 0)
    FUNC_1(VAR_2->tf_cache);
   FUNC_1(VAR_2);
   VAR_2 = VAR_3;
  }

  VAR_1 = VAR_0->pkg_chain;
  FUNC_1(VAR_0);
  VAR_0 = VAR_1;
 }
}
