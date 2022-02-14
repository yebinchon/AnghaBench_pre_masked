
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_chunk {int dummy; } ;
struct page {unsigned long index; } ;



__attribute__((used)) static void FUNC_0(struct page *VAR_0, struct pcpu_chunk *VAR_1)
{
 VAR_0->index = (unsigned long)VAR_1;
}
