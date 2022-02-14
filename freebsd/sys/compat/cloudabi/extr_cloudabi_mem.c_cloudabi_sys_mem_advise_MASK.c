
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cloudabi_sys_mem_advise_args {int advice; int mapping_len; scalar_t__ mapping; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct thread*,uintptr_t,int ,int) ;

int
FUNC_1(struct thread *VAR_6,
    struct cloudabi_sys_mem_advise_args *VAR_7)
{
 int VAR_8;

 switch (VAR_7->advice) {
 case 132:
  VAR_8 = VAR_1;
  break;
 case 131:
  VAR_8 = VAR_2;
  break;
 case 130:
  VAR_8 = VAR_3;
  break;
 case 129:
  VAR_8 = VAR_4;
  break;
 case 128:
  VAR_8 = VAR_5;
  break;
 default:
  return (VAR_0);
 }

 return (FUNC_0(VAR_6, (uintptr_t)VAR_7->mapping, VAR_7->mapping_len,
     VAR_8));
}
