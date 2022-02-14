
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct block {int dummy; } ;
typedef int compiler_state_t ;
typedef int bpf_u_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct block* FUNC_0 (int *,int ,int ,int,int*) ;

__attribute__((used)) static struct block *
FUNC_1(compiler_state_t *VAR_2, bpf_u_int32 VAR_3, bpf_u_int32 VAR_4)
{
 u_char VAR_5[8];

 VAR_5[0] = VAR_0;
 VAR_5[1] = VAR_0;
 VAR_5[2] = 0x03;
 VAR_5[3] = (u_char)(VAR_3 >> 16);
 VAR_5[4] = (u_char)(VAR_3 >> 8);
 VAR_5[5] = (u_char)(VAR_3 >> 0);
 VAR_5[6] = (u_char)(VAR_4 >> 8);
 VAR_5[7] = (u_char)(VAR_4 >> 0);
 return FUNC_0(VAR_2, VAR_1, 0, 8, VAR_5);
}
