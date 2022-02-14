
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct env_var {char* ev_name; char* ev_value; struct env_var* ev_next; } ;
struct TYPE_2__ {int (* arch_copyin ) (char*,scalar_t__,size_t) ;} ;


 TYPE_1__ VAR_0 ;
 struct env_var* VAR_1 ;
 size_t FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,size_t) ;
 int FUNC_2 (char*,scalar_t__,int) ;
 int FUNC_3 (char*,scalar_t__,size_t) ;
 int FUNC_4 (char*,scalar_t__,int) ;
 int FUNC_5 (char*,scalar_t__,int) ;

__attribute__((used)) static vm_offset_t
FUNC_6(vm_offset_t VAR_2)
{
 struct env_var *VAR_3;
 vm_offset_t VAR_4, VAR_5;
 size_t VAR_6;

 VAR_4 = VAR_5 = VAR_2;


 for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->ev_next) {
  VAR_6 = FUNC_0(VAR_3->ev_name);
  if ((size_t)VAR_0.arch_copyin(VAR_3->ev_name, VAR_4, VAR_6) != VAR_6)
   break;
  VAR_4 += VAR_6;
  if (VAR_0.arch_copyin("=", VAR_4, 1) != 1)
   break;
  VAR_4++;
  if (VAR_3->ev_value != ((void*)0)) {
   VAR_6 = FUNC_0(VAR_3->ev_value);
   if ((size_t)VAR_0.arch_copyin(VAR_3->ev_value, VAR_4, VAR_6) != VAR_6)
    break;
   VAR_4 += VAR_6;
  }
  if (VAR_0.arch_copyin("", VAR_4, 1) != 1)
   break;
  VAR_5 = ++VAR_4;
 }

 if (VAR_0.arch_copyin("", VAR_5++, 1) != 1)
  VAR_5 = VAR_2;
 return(VAR_5);
}
