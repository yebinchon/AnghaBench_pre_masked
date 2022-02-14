
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct bios_smap_xattr {int type; int xattr; scalar_t__ length; scalar_t__ base; } ;


 int FUNC_0 (char*,int,int,int ,int ) ;
 int FUNC_1 (char*,size_t,int) ;

__attribute__((used)) static int
FUNC_2(size_t VAR_0, void *VAR_1)
{
 struct bios_smap_xattr *VAR_2, *VAR_3;

 if (VAR_0 % sizeof(*VAR_2) != 0) {
  FUNC_1("S_bios_smap_xattr %zu is not a multiple of %zu", VAR_0,
      sizeof(*VAR_2));
  return (1);
 }

 VAR_3 = (struct bios_smap_xattr *)((char *)VAR_1 + VAR_0);
 for (VAR_2 = VAR_1; VAR_2 < VAR_3; VAR_2++)
  FUNC_0("\nSMAP type=%02x, xattr=%02x, base=%016jx, len=%016jx",
      VAR_2->type, VAR_2->xattr, (uintmax_t)VAR_2->base,
      (uintmax_t)VAR_2->length);
 return (0);
}
