
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cphy*,int) ;
 int FUNC_1 (struct cphy*,int ,int ,unsigned int*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_0, &VAR_6);
 if (VAR_5)
  return VAR_5;

 if (VAR_6 & (1 << 8))
  return VAR_2;

 return FUNC_0(VAR_3, VAR_4);
}
