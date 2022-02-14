
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int dummy; } ;
typedef int gid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct group* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;

struct group *
FUNC_2(gid_t VAR_2)
{
    struct group *VAR_3;

    VAR_1 = 0;
    while ((VAR_3 = FUNC_0(VAR_2)) == ((void*)0) && VAR_1 == VAR_0) {
 if (FUNC_1())
     break;
 VAR_1 = 0;
    }
    return VAR_3;
}
