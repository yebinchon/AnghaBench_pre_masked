
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef size_t caddr_t ;


 int FUNC_0 (void*,size_t,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1(void *VAR_0, size_t VAR_1, void *VAR_2)
{
 caddr_t *VAR_3 = (caddr_t *)VAR_2;
 FUNC_0(VAR_0, *VAR_3, VAR_1);
 *VAR_3 += VAR_1;
 return (VAR_1);
}
