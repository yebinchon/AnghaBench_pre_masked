
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (int,int ,char*,char*) ;

void
FUNC_2(char *VAR_2, mode_t VAR_3)
{
 VAR_3 &= VAR_0;
 if (FUNC_0(VAR_2, VAR_3) < 0)
  FUNC_1(1, VAR_1, "Could not set permissions on %s", VAR_2);
 return;
}
