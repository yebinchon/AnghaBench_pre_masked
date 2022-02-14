
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*,char*) ;
 struct device* FUNC_1 (struct device*,char*,scalar_t__ (*) (struct device*,char*)) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static struct device *FUNC_3(struct device *VAR_0, char *VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1)) {
  FUNC_2(VAR_0);
  return VAR_0;
 }

 return FUNC_1(VAR_0, VAR_1, FUNC_0);
}
