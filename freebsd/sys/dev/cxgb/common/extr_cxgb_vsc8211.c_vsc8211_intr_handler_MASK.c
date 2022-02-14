
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cphy*,int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct cphy *VAR_7)
{
 unsigned int VAR_8;
 int VAR_9, VAR_10 = 0;

 VAR_9 = FUNC_0(VAR_7, 0, VAR_2, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_8 &= VAR_1;
 if (VAR_8 & VAR_0)
  VAR_10 |= VAR_6;
 if (VAR_8 & (VAR_3 | VAR_4))
  VAR_10 |= VAR_5;
 return VAR_10;
}
