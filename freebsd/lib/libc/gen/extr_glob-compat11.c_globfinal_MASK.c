
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct glob_limit {int dummy; } ;
struct TYPE_4__ {size_t gl_pathc; int gl_flags; scalar_t__ gl_offs; scalar_t__ gl_pathv; } ;
typedef TYPE_1__ glob11_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct glob_limit*,char const*) ;
 int FUNC_1 (scalar_t__,size_t,int,int ) ;

__attribute__((used)) static int
FUNC_2(glob11_t *VAR_2, struct glob_limit *VAR_3, size_t VAR_4,
    const char *VAR_5) {
 if (VAR_2->gl_pathc == VAR_4)
  return (FUNC_0(VAR_2, VAR_3, VAR_5));

 if (!(VAR_2->gl_flags & VAR_0))
  FUNC_1(VAR_2->gl_pathv + VAR_2->gl_offs + VAR_4,
      VAR_2->gl_pathc - VAR_4, sizeof(char *), VAR_1);

 return (0);
}
