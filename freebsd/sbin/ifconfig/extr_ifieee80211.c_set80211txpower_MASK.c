
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afswtch {int dummy; } ;


 int VAR_0 ;
 double FUNC_0 (char const*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,int ,int,int ,int *) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1, int VAR_2, int VAR_3, const struct afswtch *VAR_4)
{
 double VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 VAR_6 = (int) (2*VAR_5);
 if (VAR_6 != 2*VAR_5)
  FUNC_1(-1, "invalid tx power (must be .5 dBm units)");
 FUNC_2(VAR_3, VAR_0, VAR_6, 0, ((void*)0));
}
