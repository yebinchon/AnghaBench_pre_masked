
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcpos {int dummy; } ;


 int FUNC_0 (struct srcpos*,struct srcpos*,int) ;
 struct srcpos* FUNC_1 (int) ;

struct srcpos *
FUNC_2(struct srcpos *VAR_0)
{
 struct srcpos *VAR_1;

 VAR_1 = FUNC_1(sizeof(struct srcpos));
 FUNC_0(VAR_1, VAR_0, sizeof(struct srcpos));

 return VAR_1;
}
