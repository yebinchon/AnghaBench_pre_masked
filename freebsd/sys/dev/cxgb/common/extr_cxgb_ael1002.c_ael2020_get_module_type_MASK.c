
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cphy*,int) ;
 int FUNC_1 (struct cphy*,int ,int ,unsigned int*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_4, int VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_1(VAR_4, VAR_2, VAR_1, &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (VAR_7 & (0x1 << (VAR_0*4))) {

  return VAR_3;
 }

 return FUNC_0(VAR_4, VAR_5);
}
