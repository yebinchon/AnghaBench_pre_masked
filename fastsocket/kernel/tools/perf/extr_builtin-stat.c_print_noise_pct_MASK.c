
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 double FUNC_1 (double,double) ;

__attribute__((used)) static void FUNC_2(double VAR_3, double VAR_4)
{
 double VAR_5 = FUNC_1(VAR_3, VAR_4);

 if (VAR_0)
  FUNC_0(VAR_2, "%s%.2f%%", VAR_1, VAR_5);
 else if (VAR_5)
  FUNC_0(VAR_2, "  ( +-%6.2f%% )", VAR_5);
}
