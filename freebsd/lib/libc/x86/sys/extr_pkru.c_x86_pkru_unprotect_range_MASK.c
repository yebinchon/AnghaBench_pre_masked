
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd64_set_pkru {unsigned long len; void* addr; } ;
typedef int a64pkru ;


 int VAR_0 ;
 int FUNC_0 (struct amd64_set_pkru*,int ,int) ;
 int FUNC_1 (int ,struct amd64_set_pkru*) ;

int
FUNC_2(void *VAR_1, unsigned long VAR_2)
{
 struct amd64_set_pkru VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.addr = VAR_1;
 VAR_3.len = VAR_2;
 return (FUNC_1(VAR_0, &VAR_3));
}
