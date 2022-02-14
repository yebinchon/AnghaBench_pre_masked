
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_chunk {int free_size; int contig_hint; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const struct pcpu_chunk *VAR_0)
{
 if (VAR_0->free_size < sizeof(int) || VAR_0->contig_hint < sizeof(int))
  return 0;

 return FUNC_0(VAR_0->free_size);
}
