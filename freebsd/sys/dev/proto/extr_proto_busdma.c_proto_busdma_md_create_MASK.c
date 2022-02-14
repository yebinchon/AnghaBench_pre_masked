
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_tag {int mds; int maxsegsz; int nsegs; int maxsz; int maxaddr; int bndry; int align; } ;
struct proto_md {int bd_tag; int bd_map; struct proto_tag* tag; } ;
struct proto_ioc_busdma {uintptr_t result; } ;
struct proto_busdma {int mds; int bd_roottag; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct proto_md*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct proto_md*,int ) ;
 struct proto_md* FUNC_5 (int,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_6(struct proto_busdma *VAR_6, struct proto_tag *VAR_7,
    struct proto_ioc_busdma *VAR_8)
{
 struct proto_md *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_1, VAR_2 | VAR_3);
 VAR_9->tag = VAR_7;

 VAR_10 = FUNC_1(VAR_6->bd_roottag, VAR_7->align, VAR_7->bndry,
     VAR_7->maxaddr, VAR_0, ((void*)0), ((void*)0), VAR_7->maxsz,
     VAR_7->nsegs, VAR_7->maxsegsz, 0, ((void*)0), ((void*)0), &VAR_9->bd_tag);
 if (VAR_10) {
  FUNC_4(VAR_9, VAR_1);
  return (VAR_10);
 }
 VAR_10 = FUNC_3(VAR_9->bd_tag, 0, &VAR_9->bd_map);
 if (VAR_10) {
  FUNC_2(VAR_9->bd_tag);
  FUNC_4(VAR_9, VAR_1);
  return (VAR_10);
 }

 FUNC_0(&VAR_7->mds, VAR_9, VAR_5);
 FUNC_0(&VAR_6->mds, VAR_9, VAR_4);
 VAR_8->result = (uintptr_t)(void *)VAR_9;
 return (0);
}
