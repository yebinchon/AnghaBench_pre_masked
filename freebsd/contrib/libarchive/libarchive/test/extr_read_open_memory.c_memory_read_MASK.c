
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_memory_data {size_t end; size_t p; size_t read_size; void* copy_buff; int copy_buff_offset; int copy_buff_size; } ;
struct archive {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (void*,size_t,size_t) ;
 int FUNC_1 (void*,int,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(struct archive *VAR_0, void *VAR_1, const void **VAR_2)
{
 struct read_memory_data *VAR_3 = (struct read_memory_data *)VAR_1;
 ssize_t VAR_4;

 (void)VAR_0;
 VAR_4 = VAR_3->end - VAR_3->p;
 if (VAR_4 < 0) {
  VAR_2 = ((void*)0);
  return 0;
 }
 if ((size_t)VAR_4 > VAR_3->read_size)
  VAR_4 = VAR_3->read_size;
 else
  FUNC_1(VAR_3->copy_buff, 0xA5, VAR_3->copy_buff_size);
 FUNC_0(VAR_3->copy_buff + VAR_3->copy_buff_offset, VAR_3->p, VAR_4);
 *VAR_2 = VAR_3->copy_buff + VAR_3->copy_buff_offset;

        VAR_3->p += VAR_4;
 return ((ssize_t)VAR_4);
}
