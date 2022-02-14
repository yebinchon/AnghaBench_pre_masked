
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct cphy*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct cphy *VAR_15, unsigned int VAR_16)
{
 int VAR_17, VAR_18;

 if (!(VAR_16 & VAR_1))
  return -VAR_13;

 VAR_18 = VAR_5 | VAR_6 | VAR_8;
 if (VAR_16 & VAR_3)
  VAR_18 |= VAR_10;
 if (VAR_16 & VAR_2)
  VAR_18 |= VAR_9;
 VAR_17 = FUNC_0(VAR_15, VAR_14, VAR_12, VAR_18);
 if (VAR_17)
  return VAR_17;

 VAR_18 = (VAR_16 & VAR_0) ? VAR_4 : 0;
 return FUNC_0(VAR_15, VAR_14, VAR_11, VAR_18 |
     VAR_7);
}
