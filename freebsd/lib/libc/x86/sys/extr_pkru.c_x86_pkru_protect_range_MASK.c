
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct amd64_set_pkru {unsigned long len; int flags; int keyidx; void* addr; } ;
typedef int a64pkru ;


 int VAR_0 ;
 int FUNC_0 (struct amd64_set_pkru*,int ,int) ;
 int FUNC_1 (int ,struct amd64_set_pkru*) ;

int
FUNC_2(void *VAR_1, unsigned long VAR_2, u_int VAR_3, int VAR_4)
{
 struct amd64_set_pkru VAR_5;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.addr = VAR_1;
 VAR_5.len = VAR_2;
 VAR_5.keyidx = VAR_3;
 VAR_5.flags = VAR_4;
 return (FUNC_1(VAR_0, &VAR_5));
}
