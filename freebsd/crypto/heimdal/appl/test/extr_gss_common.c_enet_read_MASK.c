
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int,void*,size_t) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, void *VAR_1, size_t VAR_2)
{
    ssize_t VAR_3;

    VAR_3 = FUNC_1 (VAR_0, VAR_1, VAR_2);
    if (VAR_3 == 0)
 FUNC_0 (1, "EOF in read");
    else if (VAR_3 < 0)
 FUNC_0 (1, "read");
}
