
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tar {scalar_t__ entry_bytes_remaining; scalar_t__ entry_padding; scalar_t__ entry_bytes_unconsumed; struct sparse_block* sparse_list; } ;
struct sparse_block {scalar_t__ remaining; int hole; struct sparse_block* next; } ;
struct archive_read {TYPE_1__* format; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct archive_read*,scalar_t__) ;
 int FUNC_1 (struct tar*) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_3)
{
 int64_t VAR_4;
 int64_t VAR_5;
 struct sparse_block *VAR_6;
 struct tar* VAR_7;

 VAR_7 = (struct tar *)(VAR_3->format->data);


 VAR_5 = 0;
 for (VAR_6 = VAR_7->sparse_list; VAR_6 != ((void*)0); VAR_6 = VAR_6->next) {
  if (!VAR_6->hole) {
   if (VAR_6->remaining >= VAR_2 - VAR_5) {
    return VAR_0;
   }
   VAR_5 += VAR_6->remaining;
  }
 }
 if (VAR_5 > VAR_7->entry_bytes_remaining)
  VAR_5 = VAR_7->entry_bytes_remaining;
 VAR_5 += VAR_7->entry_padding + VAR_7->entry_bytes_unconsumed;

 VAR_4 = FUNC_0(VAR_3, VAR_5);
 if (VAR_4 < 0)
  return (VAR_0);

 VAR_7->entry_bytes_remaining = 0;
 VAR_7->entry_bytes_unconsumed = 0;
 VAR_7->entry_padding = 0;


 FUNC_1(VAR_7);

 return (VAR_1);
}
