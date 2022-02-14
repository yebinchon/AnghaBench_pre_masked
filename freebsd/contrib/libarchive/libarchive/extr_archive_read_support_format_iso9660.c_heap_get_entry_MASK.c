
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct heap_queue {int used; struct file_info** files; } ;
struct file_info {scalar_t__ key; } ;



__attribute__((used)) static struct file_info *
FUNC_0(struct heap_queue *VAR_0)
{
 uint64_t VAR_1, VAR_2, VAR_3;
 int VAR_4, VAR_5, VAR_6;
 struct file_info *VAR_7, *VAR_8;

 if (VAR_0->used < 1)
  return (((void*)0));




 VAR_7 = VAR_0->files[0];




 VAR_0->files[0] = VAR_0->files[--(VAR_0->used)];




 VAR_4 = 0;
 VAR_1 = VAR_0->files[VAR_4]->key;
 for (;;) {
  VAR_5 = VAR_4 + VAR_4 + 1;
  if (VAR_5 >= VAR_0->used)
   return (VAR_7);
  VAR_2 = VAR_0->files[VAR_5]->key;
  VAR_6 = VAR_5 + 1;
  if (VAR_6 < VAR_0->used) {
   VAR_3 = VAR_0->files[VAR_6]->key;
   if (VAR_3 < VAR_2) {
    VAR_5 = VAR_6;
    VAR_2 = VAR_3;
   }
  }
  if (VAR_1 <= VAR_2)
   return (VAR_7);
  VAR_8 = VAR_0->files[VAR_4];
  VAR_0->files[VAR_4] = VAR_0->files[VAR_5];
  VAR_0->files[VAR_5] = VAR_8;
  VAR_4 = VAR_5;
 }
}
