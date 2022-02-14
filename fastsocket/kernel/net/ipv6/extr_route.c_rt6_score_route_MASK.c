
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {int rt6i_flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct rt6_info*,int) ;
 int FUNC_3 (struct rt6_info*) ;

__attribute__((used)) static int FUNC_4(struct rt6_info *VAR_3, int VAR_4,
      int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (!VAR_6 && (VAR_5 & VAR_0))
  return VAR_2;



 if (VAR_5 & VAR_1) {
  int VAR_7 = FUNC_3(VAR_3);
  if (VAR_7 < 0)
   return VAR_7;
 }
 return VAR_6;
}
