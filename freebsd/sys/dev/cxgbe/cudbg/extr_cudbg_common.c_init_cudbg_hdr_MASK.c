
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_init_hdr {int init_struct_size; int build_ver; int minor_ver; int major_ver; } ;
struct cudbg_init {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_0(struct cudbg_init_hdr *VAR_3)
{
 VAR_3->major_ver = VAR_1;
 VAR_3->minor_ver = VAR_2;
 VAR_3->build_ver = VAR_0;
 VAR_3->init_struct_size = sizeof(struct cudbg_init);
}
