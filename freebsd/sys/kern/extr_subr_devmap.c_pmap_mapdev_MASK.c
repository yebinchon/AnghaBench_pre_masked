
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int) ;

void *
FUNC_7(vm_offset_t VAR_5, vm_size_t VAR_6)
{
 vm_offset_t VAR_7, VAR_8;
 void * VAR_9;


 if ((VAR_9 = FUNC_1(VAR_5, VAR_6)) != ((void*)0))
  return (VAR_9);

 VAR_8 = VAR_5 & VAR_1;
 VAR_5 = FUNC_6(VAR_5);
 VAR_6 = FUNC_5(VAR_6 + VAR_8);
  VAR_7 = FUNC_2(VAR_6);
 if (!VAR_7)
  FUNC_3("pmap_mapdev: Couldn't alloc kernel virtual memory");

 FUNC_4(VAR_7, VAR_6, VAR_5);

 return ((void *)(VAR_7 + VAR_8));
}
