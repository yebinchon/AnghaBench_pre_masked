
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (char const*) ;
 int FUNC_1 (int,char*,char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, const char *VAR_1)
{
 double VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = (int) (2*VAR_2);
 if (VAR_3 != 2*VAR_2)
  FUNC_1(-1, "invalid %s rate (must be .5 Mb/s units)", VAR_1);
 return VAR_3;
}
