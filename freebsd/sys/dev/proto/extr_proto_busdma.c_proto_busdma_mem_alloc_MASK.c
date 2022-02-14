
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proto_tag {int maxsz; int mds; int maxsegsz; int nsegs; int maxaddr; int bndry; int align; } ;
struct proto_md {int physaddr; scalar_t__ virtaddr; int bd_tag; int bd_map; struct proto_tag* tag; } ;
struct TYPE_3__ {uintptr_t virt_addr; int phys_nsegs; int phys_addr; int virt_size; } ;
struct TYPE_4__ {TYPE_1__ md; } ;
struct proto_ioc_busdma {uintptr_t result; TYPE_2__ u; } ;
struct proto_callback_bundle {struct proto_ioc_busdma* ioc; struct proto_md* md; struct proto_busdma* busdma; } ;
struct proto_busdma {int mds; int bd_roottag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct proto_md*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int ,int ,struct proto_callback_bundle*,int ) ;
 int FUNC_4 (int ,scalar_t__*,int ,int *) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (struct proto_md*,int ) ;
 struct proto_md* FUNC_7 (int,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (uintptr_t) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_9(struct proto_busdma *VAR_8, struct proto_tag *VAR_9,
    struct proto_ioc_busdma *VAR_10)
{
 struct proto_callback_bundle VAR_11;
 struct proto_md *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_2, VAR_3 | VAR_4);
 VAR_12->tag = VAR_9;

 VAR_13 = FUNC_1(VAR_8->bd_roottag, VAR_9->align, VAR_9->bndry,
     VAR_9->maxaddr, VAR_1, ((void*)0), ((void*)0), VAR_9->maxsz,
     VAR_9->nsegs, VAR_9->maxsegsz, 0, ((void*)0), ((void*)0), &VAR_12->bd_tag);
 if (VAR_13) {
  FUNC_6(VAR_12, VAR_2);
  return (VAR_13);
 }
 VAR_13 = FUNC_4(VAR_12->bd_tag, &VAR_12->virtaddr, 0, &VAR_12->bd_map);
 if (VAR_13) {
  FUNC_2(VAR_12->bd_tag);
  FUNC_6(VAR_12, VAR_2);
  return (VAR_13);
 }
 VAR_12->physaddr = FUNC_8((uintptr_t)(VAR_12->virtaddr));
 VAR_11.busdma = VAR_8;
 VAR_11.md = VAR_12;
 VAR_11.ioc = VAR_10;
 VAR_13 = FUNC_3(VAR_12->bd_tag, VAR_12->bd_map, VAR_12->virtaddr,
     VAR_9->maxsz, VAR_7, &VAR_11, VAR_0);
 if (VAR_13) {
  FUNC_5(VAR_12->bd_tag, VAR_12->virtaddr, VAR_12->bd_map);
  FUNC_2(VAR_12->bd_tag);
  FUNC_6(VAR_12, VAR_2);
  return (VAR_13);
 }
 FUNC_0(&VAR_9->mds, VAR_12, VAR_6);
 FUNC_0(&VAR_8->mds, VAR_12, VAR_5);
 VAR_10->u.md.virt_addr = (uintptr_t)VAR_12->virtaddr;
 VAR_10->u.md.virt_size = VAR_9->maxsz;
 VAR_10->u.md.phys_nsegs = 1;
 VAR_10->u.md.phys_addr = VAR_12->physaddr;
 VAR_10->result = (uintptr_t)(void *)VAR_12;
 return (0);
}
