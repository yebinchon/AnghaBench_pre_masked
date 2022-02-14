
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vfs ;
typedef int sqlite3_syscall_ptr ;
struct TYPE_3__ {int (* xSetSystemCall ) (TYPE_1__*,char const*,int ) ;} ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char const*,int ) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vfs *VAR_0,
  const char *VAR_1,
  sqlite3_syscall_ptr VAR_2
){
  return FUNC_0(VAR_0)->xSetSystemCall(FUNC_0(VAR_0),VAR_1,VAR_2);
}
