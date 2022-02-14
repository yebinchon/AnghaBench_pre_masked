
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cphy*) ;
 int FUNC_1 (struct cphy*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct cphy *VAR_1, int VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);
 if (!VAR_3)
  VAR_3 = FUNC_0(VAR_1);
 return (VAR_3);
}
