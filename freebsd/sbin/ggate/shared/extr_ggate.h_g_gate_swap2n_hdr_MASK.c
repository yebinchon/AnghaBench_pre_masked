
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_gate_hdr {int gh_error; void* gh_seq; int gh_length; void* gh_offset; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static __inline void
FUNC_3(struct g_gate_hdr *VAR_0)
{


 VAR_0->gh_offset = FUNC_2(VAR_0->gh_offset);
 VAR_0->gh_length = FUNC_1(VAR_0->gh_length);
 VAR_0->gh_seq = FUNC_2(VAR_0->gh_seq);
 VAR_0->gh_error = FUNC_0(VAR_0->gh_error);
}
