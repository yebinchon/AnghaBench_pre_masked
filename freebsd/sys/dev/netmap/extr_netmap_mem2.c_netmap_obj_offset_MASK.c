
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_obj_pool {int _clustentries; int objtotal; scalar_t__ _clustsize; int name; TYPE_1__* lut; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {char* vaddr; } ;


 int FUNC_0 (char*,int ,scalar_t__,int,void const*) ;
 int FUNC_1 (char*,void const*,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(struct netmap_obj_pool *VAR_0, const void *VAR_1)
{
 int VAR_2, VAR_3 = VAR_0->_clustentries, VAR_4 = VAR_0->objtotal;
 ssize_t VAR_5 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2 += VAR_3, VAR_5 += VAR_0->_clustsize) {
  const char *VAR_6 = VAR_0->lut[VAR_2].vaddr;
  ssize_t VAR_7 = (const char *) VAR_1 - VAR_6;

  if (VAR_7 < 0 || VAR_7 >= VAR_0->_clustsize)
   continue;

  VAR_5 = VAR_5 + VAR_7;
  FUNC_0("%s: return offset %d (cluster %d) for pointer %p",
      VAR_0->name, VAR_5, VAR_2, VAR_1);
  return VAR_5;
 }
 FUNC_1("address %p is not contained inside any cluster (%s)",
     VAR_1, VAR_0->name);
 return 0;
}
