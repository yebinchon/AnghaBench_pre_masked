
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_array {unsigned int elem_size; unsigned int alloc_align; } ;



__attribute__((used)) static inline void FUNC_0(struct snd_array *VAR_0, unsigned int VAR_1,
      unsigned int VAR_2)
{
 VAR_0->elem_size = VAR_1;
 VAR_0->alloc_align = VAR_2;
}
