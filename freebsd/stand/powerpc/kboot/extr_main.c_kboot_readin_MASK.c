
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 void* FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t,size_t const) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int const,void*,size_t) ;

ssize_t
FUNC_6(const int VAR_1, vm_offset_t VAR_2, const size_t VAR_3)
{
 void *VAR_4;
 size_t VAR_5, VAR_6, VAR_7;
 ssize_t VAR_8;
 vm_offset_t VAR_9;

 VAR_9 = VAR_2;

 VAR_6 = FUNC_3(VAR_0, VAR_3);
 VAR_4 = FUNC_2(VAR_6);
 if (VAR_4 == ((void*)0)) {
  FUNC_4("kboot_readin: buf malloc failed\n");
  return (0);
 }

 for (VAR_5 = VAR_3; VAR_5 > 0; VAR_5 -= VAR_8, VAR_9 += VAR_8) {
  VAR_7 = FUNC_3(VAR_6, VAR_5);
  VAR_8 = FUNC_5(VAR_1, VAR_4, VAR_7);
  if (VAR_8 <= 0) {
   if (VAR_8 < 0)
    FUNC_4("kboot_readin: read failed\n");
   break;
  }

  FUNC_1(VAR_4, VAR_9, VAR_8);
 }

 FUNC_0 (VAR_4);
 return (VAR_3 - VAR_5);
}
