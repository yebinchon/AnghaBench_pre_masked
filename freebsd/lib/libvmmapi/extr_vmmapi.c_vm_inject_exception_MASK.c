
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmctx {int fd; } ;
struct vm_exception {int cpuid; int vector; int error_code_valid; int restart_instruction; int error_code; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct vm_exception*) ;

int
FUNC_1(struct vmctx *VAR_1, int VAR_2, int VAR_3, int VAR_4,
    uint32_t VAR_5, int VAR_6)
{
 struct vm_exception VAR_7;

 VAR_7.cpuid = VAR_2;
 VAR_7.vector = VAR_3;
 VAR_7.error_code = VAR_5;
 VAR_7.error_code_valid = VAR_4;
 VAR_7.restart_instruction = VAR_6;

 return (FUNC_0(VAR_1->fd, VAR_0, &VAR_7));
}
