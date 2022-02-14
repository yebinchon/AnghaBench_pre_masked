
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rdl_prot; int rdl_path; int rdl_offset; scalar_t__ rdl_saddr; scalar_t__ rdl_eaddr; } ;
typedef TYPE_1__ rd_loadobj_t ;
struct TYPE_6__ {int pr_mapname; int pr_mflags; int pr_offset; scalar_t__ pr_size; scalar_t__ pr_vaddr; } ;
typedef TYPE_2__ prmap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(const rd_loadobj_t *VAR_6, prmap_t *VAR_7)
{

 VAR_7->pr_vaddr = VAR_6->rdl_saddr;
 VAR_7->pr_size = VAR_6->rdl_eaddr - VAR_6->rdl_saddr;
 VAR_7->pr_offset = VAR_6->rdl_offset;
 VAR_7->pr_mflags = 0;
 if (VAR_6->rdl_prot & VAR_3)
  VAR_7->pr_mflags |= VAR_1;
 if (VAR_6->rdl_prot & VAR_4)
  VAR_7->pr_mflags |= VAR_2;
 if (VAR_6->rdl_prot & VAR_5)
  VAR_7->pr_mflags |= VAR_0;
 (void)FUNC_0(VAR_7->pr_mapname, VAR_6->rdl_path,
     sizeof(VAR_7->pr_mapname));
}
