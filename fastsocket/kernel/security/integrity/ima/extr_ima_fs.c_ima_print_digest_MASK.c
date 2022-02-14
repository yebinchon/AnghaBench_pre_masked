
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_1, u8 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_1, "%02x", *(VAR_2 + VAR_3));
}
