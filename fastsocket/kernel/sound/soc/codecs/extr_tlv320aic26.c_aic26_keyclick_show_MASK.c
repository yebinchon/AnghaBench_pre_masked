
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aic26 {int codec; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct aic26* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct aic26 *VAR_4 = FUNC_1(VAR_1);
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_0(&VAR_4->codec, VAR_0);
 VAR_6 = (VAR_5 >> 12) & 0x7;
 VAR_7 = (125 << ((VAR_5 >> 8) & 0x7)) >> 1;
 VAR_8 = 2 * (1 + ((VAR_5 >> 4) & 0xf));

 return FUNC_2(VAR_3, "amp=%x freq=%iHz len=%iclks\n", VAR_6, VAR_7, VAR_8);
}
