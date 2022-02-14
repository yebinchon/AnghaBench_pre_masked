
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ohash_info {int data; int alloc; int free; int (* calloc ) (unsigned long,int,int ) ;int key_offset; } ;
struct TYPE_2__ {int data; int (* calloc ) (unsigned long,int,int ) ;int alloc; int free; int key_offset; } ;
struct ohash {unsigned long size; scalar_t__ deleted; scalar_t__ total; TYPE_1__ info; int t; } ;
struct _ohash_record {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long,int,int ) ;

void
FUNC_1(struct ohash *VAR_3, unsigned int VAR_4, struct ohash_info *VAR_5)
{
 VAR_3->size = 1UL << VAR_4;
 if (VAR_3->size < VAR_0)
  VAR_3->size = VAR_0;





 VAR_3->info.key_offset = VAR_5->key_offset;
 VAR_3->info.calloc = VAR_5->calloc;
 VAR_3->info.free = VAR_5->free;
 VAR_3->info.alloc = VAR_5->alloc;
 VAR_3->info.data = VAR_5->data;
 VAR_3->t = (VAR_3->info.calloc)(VAR_3->size, sizeof(struct _ohash_record),
      VAR_3->info.data);
 VAR_3->total = VAR_3->deleted = 0;
}
