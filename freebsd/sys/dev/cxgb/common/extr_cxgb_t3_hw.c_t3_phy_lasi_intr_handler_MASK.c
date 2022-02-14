
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cphy*,int ,int ,unsigned int*) ;

int FUNC_1(struct cphy *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_0, &VAR_4);

 if (VAR_5)
  return VAR_5;
 return (VAR_4 & 1) ? VAR_2 : 0;
}
