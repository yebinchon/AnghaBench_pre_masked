
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proto_tag {int bndry; int maxaddr; int maxsz; int maxsegsz; int nsegs; int datarate; int align; int children; struct proto_tag* parent; } ;
struct TYPE_3__ {int bndry; int maxsegsz; int maxsz; int nsegs; int maxaddr; int datarate; int align; } ;
struct TYPE_4__ {TYPE_1__ tag; } ;
struct proto_ioc_busdma {uintptr_t result; TYPE_2__ u; } ;
struct proto_busdma {int tags; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct proto_tag*,int ) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct proto_tag* FUNC_4 (int,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(struct proto_busdma *VAR_6, struct proto_tag *VAR_7,
    struct proto_ioc_busdma *VAR_8)
{
 struct proto_tag *VAR_9;


 if (VAR_8->u.tag.bndry != 0 &&
     (VAR_8->u.tag.bndry & (VAR_8->u.tag.bndry - 1)) != 0)
  return (VAR_0);






 if (VAR_8->u.tag.maxsegsz > VAR_8->u.tag.maxsz || VAR_8->u.tag.nsegs == 1)
  VAR_8->u.tag.maxsegsz = VAR_8->u.tag.maxsz;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1, VAR_2 | VAR_3);
 if (VAR_7 != ((void*)0)) {
  VAR_9->parent = VAR_7;
  FUNC_1(&VAR_7->children, VAR_9, VAR_4);
  VAR_9->align = FUNC_2(VAR_8->u.tag.align, VAR_7->align);
  VAR_9->bndry = FUNC_0(VAR_8->u.tag.bndry, VAR_7->bndry);
  VAR_9->maxaddr = FUNC_3(VAR_8->u.tag.maxaddr, VAR_7->maxaddr);
  VAR_9->maxsz = FUNC_3(VAR_8->u.tag.maxsz, VAR_7->maxsz);
  VAR_9->maxsegsz = FUNC_3(VAR_8->u.tag.maxsegsz, VAR_7->maxsegsz);
  VAR_9->nsegs = FUNC_3(VAR_8->u.tag.nsegs, VAR_7->nsegs);
  VAR_9->datarate = FUNC_3(VAR_8->u.tag.datarate, VAR_7->datarate);

  VAR_8->u.tag.align = VAR_9->align;
  VAR_8->u.tag.bndry = VAR_9->bndry;
  VAR_8->u.tag.maxaddr = VAR_9->maxaddr;
  VAR_8->u.tag.maxsz = VAR_9->maxsz;
  VAR_8->u.tag.maxsegsz = VAR_9->maxsegsz;
  VAR_8->u.tag.nsegs = VAR_9->nsegs;
  VAR_8->u.tag.datarate = VAR_9->datarate;
 } else {
  VAR_9->align = VAR_8->u.tag.align;
  VAR_9->bndry = VAR_8->u.tag.bndry;
  VAR_9->maxaddr = VAR_8->u.tag.maxaddr;
  VAR_9->maxsz = VAR_8->u.tag.maxsz;
  VAR_9->maxsegsz = VAR_8->u.tag.maxsegsz;
  VAR_9->nsegs = VAR_8->u.tag.nsegs;
  VAR_9->datarate = VAR_8->u.tag.datarate;
 }
 FUNC_1(&VAR_6->tags, VAR_9, VAR_5);
 VAR_8->result = (uintptr_t)(void *)VAR_9;
 return (0);
}
