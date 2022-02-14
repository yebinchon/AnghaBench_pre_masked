
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {scalar_t__ rlim_max; scalar_t__ rlim_cur; } ;
struct limits {scalar_t__ factor; } ;
typedef scalar_t__ rlim_t ;
typedef int intmax_t ;
typedef enum limithow { ____Placeholder_limithow } limithow ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(enum limithow VAR_3, const struct rlimit *VAR_4,
    const struct limits *VAR_5)
{
 rlim_t VAR_6 = 0;

 if (VAR_3 & VAR_2)
  VAR_6 = VAR_4->rlim_cur;
 else if (VAR_3 & VAR_0)
  VAR_6 = VAR_4->rlim_max;
 if (VAR_6 == VAR_1)
  FUNC_1("unlimited\n");
 else
 {
  VAR_6 /= VAR_5->factor;
  FUNC_0("%jd\n", (intmax_t)VAR_6);
 }
}
