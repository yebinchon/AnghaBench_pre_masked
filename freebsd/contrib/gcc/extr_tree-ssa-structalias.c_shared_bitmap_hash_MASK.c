
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* shared_bitmap_info_t ;
typedef int hashval_t ;
struct TYPE_2__ {int hashcode; } ;



__attribute__((used)) static hashval_t
FUNC_0 (const void *VAR_0)
{
  const shared_bitmap_info_t VAR_1 = (shared_bitmap_info_t) VAR_0;
  return VAR_1->hashcode;
}
