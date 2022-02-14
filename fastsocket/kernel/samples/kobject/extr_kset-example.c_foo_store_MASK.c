
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct foo_obj {int foo; } ;
struct foo_attribute {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char const*,char*,int *) ;

__attribute__((used)) static ssize_t FUNC_1(struct foo_obj *VAR_0, struct foo_attribute *VAR_1,
    const char *VAR_2, size_t VAR_3)
{
 FUNC_0(VAR_2, "%du", &VAR_0->foo);
 return VAR_3;
}
