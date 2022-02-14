
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ z_domain_str_sz; int z_domains; } ;
typedef TYPE_1__ zfs_fuid_info_t ;
struct TYPE_8__ {scalar_t__ z_domain; } ;
typedef TYPE_2__ zfs_fuid_domain_t ;
typedef int caddr_t ;


 int FUNC_0 (void*,void*,void*) ;
 TYPE_2__* FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *,TYPE_2__*) ;
 void* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void *
FUNC_4(zfs_fuid_info_t *VAR_0, void *VAR_1)
{
 zfs_fuid_domain_t *VAR_2;


 if (VAR_0->z_domain_str_sz != 0) {
  for (VAR_2 = FUNC_1(&VAR_0->z_domains); VAR_2;
      VAR_2 = FUNC_2(&VAR_0->z_domains, VAR_2)) {
   FUNC_0((void *)VAR_2->z_domain, VAR_1,
       FUNC_3(VAR_2->z_domain) + 1);
   VAR_1 = (caddr_t)VAR_1 +
       FUNC_3(VAR_2->z_domain) + 1;
  }
 }
 return (VAR_1);
}
