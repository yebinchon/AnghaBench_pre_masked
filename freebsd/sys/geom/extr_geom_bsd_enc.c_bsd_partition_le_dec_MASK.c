
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_char ;
struct partition {int p_cpg; void* p_frag; void* p_fstype; void* p_fsize; void* p_offset; void* p_size; } ;


 int FUNC_0 (void**) ;
 void* FUNC_1 (void**) ;

void
FUNC_2(u_char *VAR_0, struct partition *VAR_1)
{
 VAR_1->p_size = FUNC_1(VAR_0 + 0);
 VAR_1->p_offset = FUNC_1(VAR_0 + 4);
 VAR_1->p_fsize = FUNC_1(VAR_0 + 8);
 VAR_1->p_fstype = VAR_0[12];
 VAR_1->p_frag = VAR_0[13];
 VAR_1->p_cpg = FUNC_0(VAR_0 + 14);
}
