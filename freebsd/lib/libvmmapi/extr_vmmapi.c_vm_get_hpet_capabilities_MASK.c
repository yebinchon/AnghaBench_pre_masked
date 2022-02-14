
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmctx {int fd; } ;
struct vm_hpet_cap {int capabilities; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_hpet_cap*,int) ;
 int FUNC_1 (int ,int ,struct vm_hpet_cap*) ;

int
FUNC_2(struct vmctx *VAR_1, uint32_t *VAR_2)
{
 int VAR_3;
 struct vm_hpet_cap VAR_4;

 FUNC_0(&VAR_4, sizeof(struct vm_hpet_cap));
 VAR_3 = FUNC_1(VAR_1->fd, VAR_0, &VAR_4);
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_4.capabilities;
 return (VAR_3);
}
