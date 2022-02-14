
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (size_t,int ,int,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,size_t) ;

void *
FUNC_5(uint32_t *VAR_5, size_t VAR_6, int VAR_7)
{
 void *VAR_8;

 if (VAR_5 == ((void*)0) || VAR_6 == 0)
  return (((void*)0));
 VAR_8 = FUNC_0(VAR_6, VAR_0, VAR_7, VAR_2,
     VAR_4, VAR_1, 0);
 if (VAR_8 != ((void*)0)) {
  *VAR_5 = FUNC_3(VAR_8);
  FUNC_1(&VAR_3);
  FUNC_4((vm_offset_t)VAR_8, *VAR_5, VAR_6);
  FUNC_2(&VAR_3);
 }

 return (VAR_8);
}
