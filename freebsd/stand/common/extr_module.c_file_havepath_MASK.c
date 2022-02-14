
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* arch_getdev ) (int *,char const*,char const**) ;} ;


 TYPE_1__ VAR_0 ;
 int * FUNC_0 (char const*,char) ;
 int FUNC_1 (int *,char const*,char const**) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1)
{
 const char *VAR_2;

 VAR_0.arch_getdev(((void*)0), VAR_1, &VAR_2);
 return (VAR_2 != VAR_1 || FUNC_0(VAR_1, '/') != ((void*)0));
}
