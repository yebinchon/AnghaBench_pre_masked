
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {int end_of_stream; int out_block_size; int * stackp; int * stack; scalar_t__ out_block; } ;
struct archive_read_filter {scalar_t__ data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct archive_read_filter*) ;

__attribute__((used)) static ssize_t
FUNC_1(struct archive_read_filter *VAR_1, const void **VAR_2)
{
 struct private_data *VAR_3;
 unsigned char *VAR_4, *VAR_5, *VAR_6;
 int VAR_7;

 VAR_3 = (struct private_data *)VAR_1->data;
 if (VAR_3->end_of_stream) {
  *VAR_2 = ((void*)0);
  return (0);
 }
 VAR_4 = VAR_5 = (unsigned char *)VAR_3->out_block;
 VAR_6 = VAR_5 + VAR_3->out_block_size;

 while (VAR_4 < VAR_6 && !VAR_3->end_of_stream) {
  if (VAR_3->stackp > VAR_3->stack) {
   *VAR_4++ = *--VAR_3->stackp;
  } else {
   VAR_7 = FUNC_0(VAR_1);
   if (VAR_7 == -1)
    VAR_3->end_of_stream = VAR_7;
   else if (VAR_7 != VAR_0)
    return (VAR_7);
  }
 }

 *VAR_2 = VAR_5;
 return (VAR_4 - VAR_5);
}
