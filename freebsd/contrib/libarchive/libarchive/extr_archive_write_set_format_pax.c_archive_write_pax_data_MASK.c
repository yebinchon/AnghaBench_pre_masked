
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sparse_block {size_t remaining; scalar_t__ is_hole; struct sparse_block* next; } ;
struct TYPE_3__ {unsigned char const* s; } ;
struct pax {struct sparse_block* sparse_list; TYPE_1__ sparse_map; int sparse_map_padding; } ;
struct archive_write {scalar_t__ format_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct archive_write*,int ) ;
 int FUNC_1 (struct archive_write*,unsigned char const*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct sparse_block*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct archive_write *VAR_1, const void *VAR_2, size_t VAR_3)
{
 struct pax *VAR_4;
 size_t VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_4 = (struct pax *)VAR_1->format_data;





 if (FUNC_3(&(VAR_4->sparse_map))) {
  VAR_7 = FUNC_1(VAR_1, VAR_4->sparse_map.s,
      FUNC_3(&(VAR_4->sparse_map)));
  if (VAR_7 != VAR_0)
   return (VAR_7);
  VAR_7 = FUNC_0(VAR_1, VAR_4->sparse_map_padding);
  if (VAR_7 != VAR_0)
   return (VAR_7);
  FUNC_2(&(VAR_4->sparse_map));
 }

 VAR_6 = 0;
 while (VAR_6 < VAR_3) {
  const unsigned char *VAR_8;

  while (VAR_4->sparse_list != ((void*)0) &&
      VAR_4->sparse_list->remaining == 0) {
   struct sparse_block *VAR_9 = VAR_4->sparse_list->next;
   FUNC_4(VAR_4->sparse_list);
   VAR_4->sparse_list = VAR_9;
  }

  if (VAR_4->sparse_list == ((void*)0))
   return (VAR_6);

  VAR_8 = ((const unsigned char *)VAR_2) + VAR_6;
  VAR_5 = VAR_3 - VAR_6;
  if (VAR_5 > VAR_4->sparse_list->remaining)
   VAR_5 = (size_t)VAR_4->sparse_list->remaining;

  if (VAR_4->sparse_list->is_hole) {


   VAR_4->sparse_list->remaining -= VAR_5;
   VAR_6 += VAR_5;
   continue;
  }

  VAR_7 = FUNC_1(VAR_1, VAR_8, VAR_5);
  VAR_4->sparse_list->remaining -= VAR_5;
  VAR_6 += VAR_5;
  if (VAR_7 != VAR_0)
   return (VAR_7);
 }
 return (VAR_6);
}
