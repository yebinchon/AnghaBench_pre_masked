
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gl_flags; scalar_t__ (* gl_errfunc ) (char*,int) ;} ;
typedef TYPE_1__ glob_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(glob_t *VAR_2, int VAR_3, char *VAR_4) {
 if ((VAR_2->gl_errfunc != ((void*)0) && VAR_2->gl_errfunc(VAR_4, VAR_3)) ||
     (VAR_2->gl_flags & VAR_1))
  return (VAR_0);
 return (0);
}
