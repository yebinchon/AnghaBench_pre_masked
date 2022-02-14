
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rt6_info*) ;
 int FUNC_1 (struct rt6_info*) ;
 int FUNC_2 (struct rt6_info*,int,int) ;

__attribute__((used)) static struct rt6_info *FUNC_3(struct rt6_info *VAR_3, int VAR_4, int VAR_5,
       int *VAR_6, struct rt6_info *VAR_7,
       bool *VAR_8)
{
 int VAR_9;
 bool VAR_10 = 0;

 if (FUNC_0(VAR_3))
  goto out;

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_9 == VAR_1) {
  VAR_10 = 1;
  VAR_9 = 0;
 } else if (VAR_9 == VAR_2) {
  goto out;
 }

 if (VAR_5 & VAR_0)
  FUNC_1(VAR_3);


 if (VAR_9 > *VAR_6) {
  *VAR_8 = VAR_10;
  *VAR_6 = VAR_9;
  VAR_7 = VAR_3;
 }
out:
 return VAR_7;
}
