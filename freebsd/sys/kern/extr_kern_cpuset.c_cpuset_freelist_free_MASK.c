
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct setlist {int dummy; } ;
struct cpuset {int dummy; } ;


 struct cpuset* FUNC_0 (struct setlist*) ;
 int FUNC_1 (struct cpuset*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,struct cpuset*) ;

__attribute__((used)) static void
FUNC_3(struct setlist *VAR_2)
{
 struct cpuset *VAR_3;

 while ((VAR_3 = FUNC_0(VAR_2)) != ((void*)0)) {
  FUNC_1(VAR_3, VAR_1);
  FUNC_2(VAR_0, VAR_3);
 }
}
