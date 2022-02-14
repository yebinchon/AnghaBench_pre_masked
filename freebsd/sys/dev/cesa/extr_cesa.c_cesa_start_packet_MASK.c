
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cesa_packet {unsigned int cp_size; int cp_copyout; int cp_copyin; scalar_t__ cp_offset; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct cesa_packet *VAR_0, unsigned int VAR_1)
{

 VAR_0->cp_size = VAR_1;
 VAR_0->cp_offset = 0;
 FUNC_0(&VAR_0->cp_copyin);
 FUNC_0(&VAR_0->cp_copyout);
}
