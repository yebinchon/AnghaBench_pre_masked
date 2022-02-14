
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _s_x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,char const*,char const*) ;
 int FUNC_1 (struct _s_x*,char const*) ;

int
FUNC_2(struct _s_x *VAR_1, const char *VAR_2, const char *VAR_3)
{
 int VAR_4;

 if ((VAR_4 = FUNC_1(VAR_1, VAR_2)) < 0)
  FUNC_0(VAR_0, "%s %s %s",
      (VAR_4 == 0) ? "invalid" : "ambiguous", VAR_3, VAR_2);

 return (VAR_4);
}
