
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _citrus_iconv {TYPE_1__* cv_shared; } ;
typedef int iconv_t ;
struct TYPE_2__ {int ci_ilseq_invalid; int * ci_hooks; int ci_discard_ilseq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct _citrus_iconv**,char const*,char const*) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*,int) ;
 char* FUNC_4 (char const*,char*) ;

__attribute__((used)) static iconv_t
FUNC_5(const char *VAR_4, const char *VAR_5, struct _citrus_iconv *VAR_6)
{
 const char *VAR_7;
 char *VAR_8;
 int VAR_9;







 VAR_7 = FUNC_4(VAR_4, "//");
 if (VAR_7 != ((void*)0)) {
  VAR_8 = FUNC_3(VAR_4, VAR_7 - VAR_4);
  if (VAR_8 == ((void*)0)) {
   VAR_3 = VAR_2;
   return ((iconv_t)-1);
  }
  VAR_9 = FUNC_0(&VAR_6, VAR_5, VAR_8);
  FUNC_1(VAR_8);
 } else {
  VAR_9 = FUNC_0(&VAR_6, VAR_5, VAR_4);
 }

 if (VAR_9) {
  VAR_3 = VAR_9 == VAR_1 ? VAR_0 : VAR_9;
  return ((iconv_t)-1);
 }

 VAR_6->cv_shared->ci_discard_ilseq = FUNC_2(VAR_4, "//IGNORE");
 VAR_6->cv_shared->ci_ilseq_invalid = 0;
 VAR_6->cv_shared->ci_hooks = ((void*)0);

 return ((iconv_t)(void *)VAR_6);
}
