
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {size_t mac_metadata_size; int * mac_metadata; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,void const*,size_t) ;

void
FUNC_4(struct archive_entry *VAR_0,
    const void *VAR_1, size_t VAR_2)
{
  FUNC_1(VAR_0->mac_metadata);
  if (VAR_1 == ((void*)0) || VAR_2 == 0) {
    VAR_0->mac_metadata = ((void*)0);
    VAR_0->mac_metadata_size = 0;
  } else {
    VAR_0->mac_metadata_size = VAR_2;
    VAR_0->mac_metadata = FUNC_2(VAR_2);
    if (VAR_0->mac_metadata == ((void*)0))
      FUNC_0();
    FUNC_3(VAR_0->mac_metadata, VAR_1, VAR_2);
  }
}
