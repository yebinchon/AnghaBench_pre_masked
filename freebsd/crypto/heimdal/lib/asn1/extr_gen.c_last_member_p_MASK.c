
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct member {scalar_t__ ellipsis; } ;


 struct member* FUNC_0 (struct member*,int ) ;
 int VAR_0 ;

__attribute__((used)) static const char *
FUNC_1(struct member *VAR_1)
{
    struct member *VAR_2 = FUNC_0(VAR_1, VAR_0);
    if (VAR_2 == ((void*)0))
 return "";
    if (VAR_2->ellipsis && FUNC_0(VAR_2, VAR_0) == ((void*)0))
 return "";
    return ",";
}
