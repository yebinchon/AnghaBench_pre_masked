
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct seq_file {int dummy; } ;
typedef int data ;


 int FUNC_0 (struct seq_file*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, u64 VAR_1)
{
 u32 VAR_2[2];

 VAR_2[0] = (VAR_1 & 0xffffffffUL);
 VAR_2[1] = (VAR_1 >> 32);
 return FUNC_0(VAR_0, VAR_2, sizeof(VAR_2));
}
