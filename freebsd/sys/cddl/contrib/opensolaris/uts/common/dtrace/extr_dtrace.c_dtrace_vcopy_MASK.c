
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dtdt_flags; scalar_t__ dtdt_kind; int dtdt_size; } ;
typedef TYPE_1__ dtrace_diftype_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (void*,void*,int ) ;
 int FUNC_3 (void*,void*,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2, void *VAR_3, dtrace_diftype_t *VAR_4, size_t VAR_5)
{
 FUNC_0(VAR_4->dtdt_flags & VAR_0);

 if (VAR_4->dtdt_kind == VAR_1) {
  FUNC_3(VAR_2, VAR_3, FUNC_1(VAR_4->dtdt_size, VAR_5));
 } else {
  FUNC_2(VAR_2, VAR_3, FUNC_1(VAR_4->dtdt_size, VAR_5));
 }
}
