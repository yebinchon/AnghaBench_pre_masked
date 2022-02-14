
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {struct knlist* kn_knlist; } ;
struct knlist {int kl_lockarg; int (* kl_lock ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static struct knlist *
FUNC_1(struct knote *VAR_0)
{
 struct knlist *VAR_1;

 VAR_1 = VAR_0->kn_knlist;
 if (VAR_1 != ((void*)0))
  VAR_1->kl_lock(VAR_1->kl_lockarg);
 return (VAR_1);
}
