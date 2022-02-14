
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6000_i2s_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (struct s6000_i2s_dev*,int ) ;
 int FUNC_1 (struct s6000_i2s_dev*,int ,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct s6000_i2s_dev *VAR_5)
{
 unsigned int VAR_6;
 VAR_6 = FUNC_0(VAR_5, VAR_1);
 VAR_6 &= VAR_2 |
     VAR_4 |
     VAR_3;
 FUNC_1(VAR_5, VAR_0, VAR_6);

 return VAR_6;
}
