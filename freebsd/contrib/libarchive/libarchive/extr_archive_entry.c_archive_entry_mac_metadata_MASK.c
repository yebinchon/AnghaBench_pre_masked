
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {size_t mac_metadata_size; void const* mac_metadata; } ;



const void *
FUNC_0(struct archive_entry *VAR_0, size_t *VAR_1)
{
  *VAR_1 = VAR_0->mac_metadata_size;
  return VAR_0->mac_metadata;
}
