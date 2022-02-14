
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(int VAR_3)
{
 if (VAR_1)
  return;
 if (FUNC_0(VAR_3, VAR_0, &VAR_2) < 0)
  FUNC_1("unable to get VHT configuration information");
 VAR_1 = 1;
}
