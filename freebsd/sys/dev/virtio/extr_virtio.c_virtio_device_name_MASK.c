
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct virtio_ident {char const* name; scalar_t__ devid; } ;


 struct virtio_ident* VAR_0 ;

const char *
FUNC_0(uint16_t VAR_1)
{
 struct virtio_ident *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->name != ((void*)0); VAR_2++) {
  if (VAR_2->devid == VAR_1)
   return (VAR_2->name);
 }

 return (((void*)0));
}
