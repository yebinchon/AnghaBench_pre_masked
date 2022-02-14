
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iconv_hooks {int dummy; } ;
struct _citrus_iconv {TYPE_1__* cv_shared; } ;
typedef scalar_t__ iconv_t ;
struct TYPE_2__ {char* ci_convname; int ci_discard_ilseq; int ci_ilseq_invalid; struct iconv_hooks* ci_hooks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (char const*,char*,size_t) ;
 char* FUNC_2 (char const*,char) ;
 size_t FUNC_3 (char*) ;

int
FUNC_4(iconv_t VAR_4, int VAR_5, void *VAR_6)
{
 struct _citrus_iconv *VAR_7;
 struct iconv_hooks *VAR_8;
 const char *VAR_9;
 char *VAR_10;
 int *VAR_11;
 size_t VAR_12;

 VAR_7 = (struct _citrus_iconv *)(void *)VAR_4;
 VAR_8 = (struct iconv_hooks *)VAR_6;
 VAR_11 = (int *)VAR_6;

 if (FUNC_0(VAR_4)) {
  VAR_3 = VAR_0;
  return (-1);
 }

 switch (VAR_5) {
 case 128:
  VAR_9 = VAR_7->cv_shared->ci_convname;
  VAR_10 = FUNC_2(VAR_9, '/');
  VAR_12 = VAR_10 - VAR_9;
  VAR_10++;
  *VAR_11 = (VAR_12 == FUNC_3(VAR_10)) && !FUNC_1(VAR_9, VAR_10, VAR_12);
  return (0);
 case 134:
  *VAR_11 = 1;
  return (0);
 case 129:
  return ((*VAR_11 == 1) ? 0 : -1);
 case 136:
  *VAR_11 = VAR_7->cv_shared->ci_discard_ilseq ? 1 : 0;
  return (0);
 case 133:
  VAR_7->cv_shared->ci_discard_ilseq = *VAR_11;
  return (0);
 case 131:
  VAR_7->cv_shared->ci_hooks = VAR_8;
  return (0);
 case 132:
  VAR_3 = VAR_2;
  return (-1);
 case 135:
  *VAR_11 = VAR_7->cv_shared->ci_ilseq_invalid ? 1 : 0;
  return (0);
 case 130:
  VAR_7->cv_shared->ci_ilseq_invalid = *VAR_11;
  return (0);
 default:
  VAR_3 = VAR_1;
  return (-1);
 }
}
