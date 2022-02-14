
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (size_t,int ,int ,unsigned long,size_t,int ,int ) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static inline void *
FUNC_3(size_t VAR_3, vm_paddr_t *VAR_4)
{
 size_t VAR_5;
 void *VAR_6;

 VAR_5 = VAR_1 << FUNC_1(VAR_3);
 VAR_6 = (void *)FUNC_0(VAR_3, VAR_0, 0, ~0ul, VAR_5, 0,
     VAR_2);
 if (VAR_6 != ((void*)0))
  *VAR_4 = FUNC_2(VAR_6);
 else
  *VAR_4 = 0;

 return (VAR_6);
}
