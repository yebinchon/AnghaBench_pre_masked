
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int dummy; } ;
struct buffer_page {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct ring_buffer_per_cpu*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct ring_buffer_per_cpu *VAR_1,
     struct buffer_page *VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_2;

 if (FUNC_0(VAR_1, VAR_3 & VAR_0))
  return 1;

 return 0;
}
