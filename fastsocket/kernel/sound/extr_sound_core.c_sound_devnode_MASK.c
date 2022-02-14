
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int devt; } ;
typedef int mode_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct device*) ;
 char* FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static char *FUNC_3(struct device *VAR_2, mode_t *VAR_3)
{
 if (FUNC_0(VAR_2->devt) == VAR_1)
  return ((void*)0);
 return FUNC_2(VAR_0, "snd/%s", FUNC_1(VAR_2));
}
