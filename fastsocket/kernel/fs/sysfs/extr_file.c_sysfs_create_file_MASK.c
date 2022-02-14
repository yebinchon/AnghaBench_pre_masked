
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int sd; } ;
struct attribute {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct attribute const*,int ) ;

int FUNC_2(struct kobject * VAR_1, const struct attribute * VAR_2)
{
 FUNC_0(!VAR_1 || !VAR_1->sd || !VAR_2);

 return FUNC_1(VAR_1->sd, VAR_2, VAR_0);

}
