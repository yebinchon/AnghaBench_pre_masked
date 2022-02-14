
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aic26 {int codec; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 struct aic26* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct aic26 *VAR_5 = FUNC_2(VAR_1);
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_5->codec, VAR_0);
 VAR_6 |= 0x8000;
 FUNC_1(&VAR_5->codec, VAR_0, VAR_6);

 return VAR_4;
}
