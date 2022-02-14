
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct local_zones {int ztree; } ;
struct TYPE_2__ {struct local_zone* key; } ;
struct local_zone {scalar_t__ dclass; size_t namelen; int namelabs; struct local_zone* parent; int taglen; int taglist; int * name; TYPE_1__ node; } ;
typedef int rbnode_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int *,int,int*) ;
 int FUNC_2 (int **,size_t*) ;
 int FUNC_3 (int *,struct local_zone*,int **) ;
 scalar_t__ FUNC_4 (int ,int ,int *,size_t) ;

struct local_zone*
FUNC_5(struct local_zones* VAR_1,
        uint8_t* VAR_2, size_t VAR_3, int VAR_4, uint16_t VAR_5, uint16_t VAR_6,
 uint8_t* VAR_7, size_t VAR_8, int VAR_9)
{
 rbnode_type* VAR_10 = ((void*)0);
 struct local_zone *VAR_11;
 struct local_zone VAR_12;
 int VAR_13;

 if(VAR_6 == VAR_0 && !FUNC_0(VAR_2)) {
  FUNC_2(&VAR_2, &VAR_3);
  VAR_4--;
 }
 VAR_12.node.key = &VAR_12;
 VAR_12.dclass = VAR_5;
 VAR_12.name = VAR_2;
 VAR_12.namelen = VAR_3;
 VAR_12.namelabs = VAR_4;
 FUNC_3(&VAR_1->ztree, &VAR_12, &VAR_10);
 VAR_11 = (struct local_zone*)VAR_10;

 if(!VAR_11 || VAR_11->dclass != VAR_5)
  return ((void*)0);

 (void)FUNC_1(VAR_11->name, VAR_11->namelabs, VAR_12.name,
  VAR_12.namelabs, &VAR_13);
 while(VAR_11) {
  if(VAR_11->namelabs <= VAR_13)
   if(VAR_9 || !VAR_11->taglist ||
    FUNC_4(VAR_11->taglist,
    VAR_11->taglen, VAR_7, VAR_8))
    break;
  VAR_11 = VAR_11->parent;
 }
 return VAR_11;
}
