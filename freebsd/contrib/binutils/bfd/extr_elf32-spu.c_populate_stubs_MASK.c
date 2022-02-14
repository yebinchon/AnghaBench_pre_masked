
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stubarr {size_t count; struct spu_stub_hash_entry** sh; } ;
struct spu_stub_hash_entry {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;
typedef int bfd_boolean ;


 int VAR_0 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (struct bfd_hash_entry *VAR_1, void *VAR_2)
{
  struct stubarr *VAR_3 = VAR_2;

  VAR_3->sh[--VAR_3->count] = (struct spu_stub_hash_entry *) VAR_1;
  return VAR_0;
}
