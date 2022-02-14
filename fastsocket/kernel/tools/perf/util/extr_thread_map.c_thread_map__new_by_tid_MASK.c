
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_map {int nr; int * map; } ;
typedef int pid_t ;


 struct thread_map* FUNC_0 (int) ;

struct thread_map *FUNC_1(pid_t VAR_0)
{
 struct thread_map *VAR_1 = FUNC_0(sizeof(*VAR_1) + sizeof(pid_t));

 if (VAR_1 != ((void*)0)) {
  VAR_1->map[0] = VAR_0;
  VAR_1->nr = 1;
 }

 return VAR_1;
}
