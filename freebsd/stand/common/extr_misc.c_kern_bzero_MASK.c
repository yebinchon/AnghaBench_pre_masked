
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t vm_offset_t ;
typedef int buf ;
struct TYPE_2__ {int (* arch_copyin ) (char*,size_t,size_t) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 size_t FUNC_1 (int,size_t) ;
 int FUNC_2 (char*,size_t,size_t) ;

void
FUNC_3(vm_offset_t VAR_1, size_t VAR_2)
{
 char VAR_3[256];
 size_t VAR_4, VAR_5;

 FUNC_0(VAR_3, sizeof(VAR_3));
 VAR_5 = VAR_2;
 while (VAR_5 > 0) {
  VAR_4 = FUNC_1(sizeof(VAR_3), VAR_5);
  VAR_0.arch_copyin(VAR_3, VAR_1, VAR_4);
  VAR_5 -= VAR_4;
  VAR_1 += VAR_4;
 }
}
