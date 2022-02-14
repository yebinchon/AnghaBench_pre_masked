
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_3)
{
 int VAR_4;

 if (FUNC_1(VAR_3, "linux") == 0 || FUNC_2(VAR_3, "linux.", 6) == 0)
  VAR_4 = FUNC_0("linux");
 else if (FUNC_1(VAR_3, "sysvmsg") == 0 || FUNC_1(VAR_3, "sysvsem") == 0 ||
     FUNC_1(VAR_3, "sysvshm") == 0)
  VAR_4 = FUNC_0(VAR_3);
 else if (FUNC_2(VAR_3, "allow.mount.", 12) == 0) {

  const char *VAR_5 = VAR_3 + 12;

  VAR_4 = FUNC_0(VAR_5);
  if (VAR_4 < 0 && VAR_2 == VAR_1 &&
      FUNC_2(VAR_5, "no", 2) == 0)
   VAR_4 = FUNC_0(VAR_5 + 2);
 } else {
  VAR_2 = VAR_1;
  return (-1);
 }
 if (VAR_4 < 0 && VAR_2 == VAR_0) {




  VAR_2 = VAR_1;
 }
 return VAR_4;
}
