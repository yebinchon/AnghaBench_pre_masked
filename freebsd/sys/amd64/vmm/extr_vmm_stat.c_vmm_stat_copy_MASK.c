
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmm_stat_type {int (* func ) (struct vm*,int,struct vmm_stat_type*) ;} ;
struct vm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm*,int,struct vmm_stat_type*) ;
 int * FUNC_1 (struct vm*,int) ;
 int FUNC_2 (struct vm*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct vmm_stat_type** VAR_3 ;

int
FUNC_3(struct vm *VAR_4, int VAR_5, int *VAR_6, uint64_t *VAR_7)
{
 struct vmm_stat_type *VAR_8;
 uint64_t *VAR_9;
 int VAR_10;

 if (VAR_5 < 0 || VAR_5 >= FUNC_2(VAR_4))
  return (VAR_0);


 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_8 = VAR_3[VAR_10];
  if (VAR_8->func != ((void*)0))
   (*VAR_8->func)(VAR_4, VAR_5, VAR_8);
 }


 VAR_9 = FUNC_1(VAR_4, VAR_5);
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  VAR_7[VAR_10] = VAR_9[VAR_10];
 *VAR_6 = VAR_1;
 return (0);
}
