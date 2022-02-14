
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct glob_limit {int l_brace_cnt; } ;
struct TYPE_6__ {int gl_flags; size_t gl_pathc; } ;
typedef TYPE_1__ glob_t ;
typedef scalar_t__ Char ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ const VAR_5 ;
 scalar_t__ const VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__ const*,TYPE_1__*,struct glob_limit*,char const*) ;
 int FUNC_1 (scalar_t__ const*,TYPE_1__*,struct glob_limit*) ;
 int FUNC_2 (TYPE_1__*,struct glob_limit*,size_t,char const*) ;

__attribute__((used)) static int
FUNC_3(const Char *VAR_8, glob_t *VAR_9, struct glob_limit *VAR_10,
    const char *VAR_11) {
 int VAR_12;
 size_t VAR_13;


 if (VAR_8[0] == VAR_5 && VAR_8[1] == VAR_6 && VAR_8[2] == VAR_1) {
  if ((VAR_9->gl_flags & VAR_2) &&
      VAR_10->l_brace_cnt++ >= VAR_3) {
   VAR_7 = VAR_0;
   return (VAR_4);
  }
  return (FUNC_0(VAR_8, VAR_9, VAR_10, VAR_11));
 }

 VAR_13 = VAR_9->gl_pathc;

 if ((VAR_12 = FUNC_1(VAR_8, VAR_9, VAR_10)) != 0)
  return VAR_12;

 return (FUNC_2(VAR_9, VAR_10, VAR_13, VAR_11));
}
