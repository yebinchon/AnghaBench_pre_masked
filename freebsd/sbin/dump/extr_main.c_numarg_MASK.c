
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char const*,long,...) ;
 int VAR_0 ;
 long FUNC_1 (int ,char**,int) ;

__attribute__((used)) static long
FUNC_2(const char *VAR_1, long VAR_2, long VAR_3)
{
 char *VAR_4;
 long VAR_5;

 VAR_5 = FUNC_1(VAR_0, &VAR_4, 10);
 if (*VAR_4)
  FUNC_0(1, "illegal %s -- %s", VAR_1, VAR_0);
 if (VAR_5 < VAR_2 || (VAR_3 && VAR_5 > VAR_3))
  FUNC_0(1, "%s must be between %ld and %ld", VAR_1, VAR_2, VAR_3);
 return (VAR_5);
}
