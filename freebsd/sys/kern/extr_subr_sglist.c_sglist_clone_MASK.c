
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sglist_seg {int dummy; } ;
struct sglist {int sg_nseg; int sg_segs; int sg_maxseg; } ;


 int FUNC_0 (int ,int ,int) ;
 struct sglist* FUNC_1 (int ,int) ;

struct sglist *
FUNC_2(struct sglist *VAR_0, int VAR_1)
{
 struct sglist *VAR_2;

 if (VAR_0 == ((void*)0))
  return (((void*)0));
 VAR_2 = FUNC_1(VAR_0->sg_maxseg, VAR_1);
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 VAR_2->sg_nseg = VAR_0->sg_nseg;
 FUNC_0(VAR_0->sg_segs, VAR_2->sg_segs, sizeof(struct sglist_seg) *
     VAR_0->sg_nseg);
 return (VAR_2);
}
