
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vmstate {int mapsz; uintptr_t dmphdrsz; TYPE_2__* eh; void* ph; TYPE_2__* map; } ;
struct kerneldumpheader {int dummy; } ;
struct TYPE_8__ {int program; int pmfd; struct vmstate* vmst; } ;
typedef TYPE_1__ kvm_t ;
struct TYPE_9__ {int e_phoff; int e_phnum; int e_phentsize; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 uintptr_t FUNC_1 (int ) ;
 uintptr_t FUNC_2 (int ) ;
 uintptr_t FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (int *,int,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_7(kvm_t *VAR_3)
{
 struct vmstate *VAR_4;
 size_t VAR_5;

 VAR_4 = VAR_3->vmst;

 VAR_4->mapsz = sizeof(*VAR_4->eh) + sizeof(struct kerneldumpheader);
 VAR_4->map = FUNC_4(((void*)0), VAR_4->mapsz, VAR_2, VAR_1, VAR_3->pmfd, 0);
 if (VAR_4->map == VAR_0) {
  FUNC_0(VAR_3, VAR_3->program, "cannot map corefile");
  return (-1);
 }
 VAR_4->dmphdrsz = 0;
 VAR_4->eh = VAR_4->map;
 if (!FUNC_6(VAR_4->eh)) {






  VAR_4->dmphdrsz = FUNC_3(VAR_4->map);
  if (VAR_4->dmphdrsz == 0)
   goto inval;
  VAR_4->eh = (void *)((uintptr_t)VAR_4->map + VAR_4->dmphdrsz);
  if (!FUNC_6(VAR_4->eh))
   goto inval;
 }
 VAR_5 = FUNC_1(VAR_4->eh->e_phentsize) * FUNC_1(VAR_4->eh->e_phnum) +
     FUNC_2(VAR_4->eh->e_phoff);
 FUNC_5(VAR_4->map, VAR_4->mapsz);


 VAR_4->mapsz = VAR_4->dmphdrsz + VAR_5;
 VAR_4->map = FUNC_4(((void*)0), VAR_4->mapsz, VAR_2, VAR_1, VAR_3->pmfd, 0);
 if (VAR_4->map == VAR_0) {
  FUNC_0(VAR_3, VAR_3->program, "cannot map corefile headers");
  return (-1);
 }
 VAR_4->eh = (void *)((uintptr_t)VAR_4->map + VAR_4->dmphdrsz);
 VAR_4->ph = (void *)((uintptr_t)VAR_4->eh + FUNC_2(VAR_4->eh->e_phoff));
 return (0);

 inval:
 FUNC_0(VAR_3, VAR_3->program, "invalid corefile");
 return (-1);
}
