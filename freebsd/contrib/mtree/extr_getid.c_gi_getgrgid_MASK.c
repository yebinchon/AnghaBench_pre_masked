
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int dummy; } ;
typedef int gid_t ;


 struct group VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static struct group *
FUNC_3(gid_t VAR_2)
{
 int VAR_3;

 if (!FUNC_2())
  return ((void*)0);
 VAR_3 = FUNC_1(1, VAR_2, ((void*)0));
 if (!VAR_1)
  FUNC_0();
 return (VAR_3) ? &VAR_0 : ((void*)0);
}
