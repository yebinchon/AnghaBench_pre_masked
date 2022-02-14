
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct tree {int flags; struct stat const lst; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,struct stat const*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,struct stat const*) ;
 int FUNC_2 (struct tree*) ;
 int FUNC_3 (struct tree*) ;
 scalar_t__ FUNC_4 (struct tree*) ;

__attribute__((used)) static const struct stat *
FUNC_5(struct tree *VAR_2)
{
 if (!(VAR_2->flags & VAR_1)) {





  if (FUNC_4(VAR_2) != 0)
   return ((void*)0);
  if (FUNC_1(FUNC_2(VAR_2), &VAR_2->lst) != 0)

   return ((void*)0);
  VAR_2->flags |= VAR_1;
 }
 return (&VAR_2->lst);
}
