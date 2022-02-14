
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct glob_limit {int l_brace_cnt; } ;
struct TYPE_5__ {int gl_flags; } ;
typedef TYPE_1__ glob_t ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int const*,int ) ;
 int FUNC_1 (int const*,TYPE_1__*,struct glob_limit*,int *) ;
 int FUNC_2 (int const*,int const*,TYPE_1__*,struct glob_limit*) ;

__attribute__((used)) static int
FUNC_3(const Char *VAR_6, glob_t *VAR_7, struct glob_limit *VAR_8)
{
 const Char* VAR_9;

 if ((VAR_9 = FUNC_0(VAR_6, VAR_4)) != ((void*)0)) {
  if ((VAR_7->gl_flags & VAR_1) &&
      VAR_8->l_brace_cnt++ >= VAR_2) {
   VAR_5 = VAR_0;
   return (VAR_3);
  }
  return (FUNC_2(VAR_9, VAR_6, VAR_7, VAR_8));
 }

 return (FUNC_1(VAR_6, VAR_7, VAR_8, ((void*)0)));
}
