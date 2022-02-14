
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_array {void* list; unsigned long elem_size; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct snd_array *VAR_0, void *VAR_1)
{
 return (unsigned long)(VAR_1 - VAR_0->list) / VAR_0->elem_size;
}
