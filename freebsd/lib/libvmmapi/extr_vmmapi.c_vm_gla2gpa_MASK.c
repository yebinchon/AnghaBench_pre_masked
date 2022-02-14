
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmctx {int fd; } ;
struct vm_guest_paging {int dummy; } ;
struct vm_gla2gpa {int vcpuid; int prot; int fault; int gpa; struct vm_guest_paging paging; int gla; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_gla2gpa*,int) ;
 int FUNC_1 (int ,int ,struct vm_gla2gpa*) ;

int
FUNC_2(struct vmctx *VAR_1, int VAR_2, struct vm_guest_paging *VAR_3,
    uint64_t VAR_4, int VAR_5, uint64_t *VAR_6, int *VAR_7)
{
 struct vm_gla2gpa VAR_8;
 int VAR_9;

 FUNC_0(&VAR_8, sizeof(struct vm_gla2gpa));
 VAR_8.vcpuid = VAR_2;
 VAR_8.prot = VAR_5;
 VAR_8.gla = VAR_4;
 VAR_8.paging = *VAR_3;

 VAR_9 = FUNC_1(VAR_1->fd, VAR_0, &VAR_8);
 if (VAR_9 == 0) {
  *VAR_7 = VAR_8.fault;
  *VAR_6 = VAR_8.gpa;
 }
 return (VAR_9);
}
