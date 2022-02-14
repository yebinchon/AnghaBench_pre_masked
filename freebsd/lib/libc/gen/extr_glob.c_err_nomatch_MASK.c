
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct glob_limit {int dummy; } ;
struct TYPE_4__ {int gl_flags; } ;
typedef TYPE_1__ glob_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,struct glob_limit*,char const*) ;

__attribute__((used)) static int
FUNC_1(glob_t *VAR_4, struct glob_limit *VAR_5, const char *VAR_6) {






 if ((VAR_4->gl_flags & VAR_1) ||
     ((VAR_4->gl_flags & VAR_2) &&
     !(VAR_4->gl_flags & VAR_0)))
  return (FUNC_0(((void*)0), VAR_4, VAR_5, VAR_6));
 return (VAR_3);
}
