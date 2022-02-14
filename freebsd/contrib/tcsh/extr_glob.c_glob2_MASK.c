
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct strbuf {scalar_t__* s; int len; } ;
struct stat {int st_mode; } ;
struct TYPE_5__ {int gl_flags; int gl_matchc; } ;
typedef TYPE_1__ glob_t ;
typedef scalar_t__ Char ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,struct stat*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__*,struct stat*) ;
 int FUNC_4 (struct strbuf*,scalar_t__ const*,scalar_t__ const*,scalar_t__ const*,TYPE_1__*,int) ;
 int FUNC_5 (scalar_t__*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (scalar_t__ const) ;
 int FUNC_7 (struct strbuf*,scalar_t__) ;
 int FUNC_8 (struct strbuf*) ;

__attribute__((used)) static int
FUNC_9(struct strbuf *VAR_3, const Char *VAR_4, glob_t *VAR_5, int VAR_6)
{
    struct stat VAR_7;
    int VAR_8;
    const Char *VAR_9;
    size_t VAR_10;





    VAR_8 = 0;
    for (;;) {
 if (*VAR_4 == VAR_0) {
     FUNC_8(VAR_3);

     if (FUNC_0(VAR_3->s, &VAR_7))
  return (0);

     if (((VAR_5->gl_flags & VAR_1) &&
   VAR_3->s[VAR_3->len - 1] != VAR_2) &&
  (FUNC_1(VAR_7.st_mode)





   )) {
  FUNC_7(VAR_3, VAR_2);
  FUNC_8(VAR_3);
     }
     ++VAR_5->gl_matchc;
     FUNC_5(VAR_3->s, VAR_5);
     return 0;
 }


 VAR_9 = VAR_4;
 VAR_10 = VAR_3->len;
 while (*VAR_9 != VAR_0 && *VAR_9 != VAR_2) {
     if (FUNC_6(*VAR_9))
  VAR_8 = 1;
     FUNC_7(VAR_3, *VAR_9++);
 }

 if (!VAR_8) {
     VAR_4 = VAR_9;
     while (*VAR_4 == VAR_2)
  FUNC_7(VAR_3, *VAR_4++);
 }
 else {
     VAR_3->len = VAR_10;
     return (FUNC_4(VAR_3, VAR_4, VAR_9, VAR_4, VAR_5, VAR_6));
 }
    }

}
