
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct uuid {int dummy; } ;
struct efi_cfgtbl {int ct_data; int ct_uuid; } ;
struct TYPE_2__ {int st_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct uuid*,int) ;
 struct efi_cfgtbl* VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_3 ;

int
FUNC_2(struct uuid *VAR_4, void **VAR_5)
{
 struct efi_cfgtbl *VAR_6;
 u_long VAR_7;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (VAR_1);
 VAR_7 = VAR_3->st_entries;
 VAR_6 = VAR_2;
 while (VAR_7--) {
  if (!FUNC_0(&VAR_6->ct_uuid, VAR_4, sizeof(*VAR_4))) {
   *VAR_5 = (void *)FUNC_1(VAR_6->ct_data);
   return (0);
  }
  VAR_6++;
 }
 return (VAR_0);
}
