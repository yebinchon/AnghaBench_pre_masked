
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int decl_t ;
struct TYPE_6__ {char const* name; } ;
struct TYPE_5__ {int mode; } ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 void* FUNC_1 (int ,TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static decl_t
FUNC_2 (const char *VAR_3)
{
  void *VAR_4;

  VAR_2.mode = VAR_0;
  FUNC_0 (&VAR_2)->name = VAR_3;
  VAR_4 = FUNC_1 (VAR_1, &VAR_2);
  return (decl_t) VAR_4;
}
