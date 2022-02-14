
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
struct TYPE_7__ {int ddt_checksum; } ;
typedef TYPE_1__ ddt_t ;
struct TYPE_8__ {scalar_t__ ddp_phys_birth; scalar_t__ ddp_refcnt; } ;
typedef TYPE_2__ ddt_phys_t ;
typedef int ddt_key_t ;
struct TYPE_9__ {int dde_key; TYPE_2__* dde_phys; } ;
typedef TYPE_3__ ddt_entry_t ;
typedef int blkptr_t ;
typedef int blkbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*,TYPE_2__ const*,int *) ;
 int FUNC_1 (char*,int ,int ,char const*,char*) ;
 int FUNC_2 (char*,int,int *) ;

__attribute__((used)) static void
FUNC_3(const ddt_t *VAR_2, const ddt_entry_t *VAR_3, uint64_t VAR_4)
{
 const ddt_phys_t *VAR_5 = VAR_3->dde_phys;
 const ddt_key_t *VAR_6 = &VAR_3->dde_key;
 const char *VAR_7[4] = { "ditto", "single", "double", "triple" };
 char VAR_8[VAR_0];
 blkptr_t VAR_9;

 for (int VAR_10 = 0; VAR_10 < VAR_1; VAR_10++, VAR_5++) {
  if (VAR_5->ddp_phys_birth == 0)
   continue;
  FUNC_0(VAR_2->ddt_checksum, VAR_6, VAR_5, &VAR_9);
  FUNC_2(VAR_8, sizeof (VAR_8), &VAR_9);
  (void) FUNC_1("index %llx refcnt %llu %s %s\n",
      (u_longlong_t)VAR_4, (u_longlong_t)VAR_5->ddp_refcnt,
      VAR_7[VAR_10], VAR_8);
 }
}
