
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct partition {int p_cpg; int p_frag; int p_fstype; int p_fsize; int p_offset; int p_size; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(u_char *VAR_0, struct partition *VAR_1)
{
 FUNC_1(VAR_0 + 0, VAR_1->p_size);
 FUNC_1(VAR_0 + 4, VAR_1->p_offset);
 FUNC_1(VAR_0 + 8, VAR_1->p_fsize);
 VAR_0[12] = VAR_1->p_fstype;
 VAR_0[13] = VAR_1->p_frag;
 FUNC_0(VAR_0 + 14, VAR_1->p_cpg);
}
