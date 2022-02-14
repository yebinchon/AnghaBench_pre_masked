
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cg {int dummy; } ;
struct TYPE_4__ {struct cg* b_cg; } ;
struct bufarea {TYPE_1__ b_un; } ;
struct TYPE_5__ {scalar_t__ fs_cgsize; int fs_ncg; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bufarea* FUNC_0 (int ,int) ;
 struct bufarea VAR_2 ;
 struct bufarea* VAR_3 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct bufarea*,int ,scalar_t__) ;
 int FUNC_4 (struct bufarea*,int ) ;
 struct cg* FUNC_5 (unsigned int) ;
 TYPE_2__ VAR_5 ;

struct bufarea *
FUNC_6(int VAR_6)
{
 struct bufarea *VAR_7;
 struct cg *VAR_8;

 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_0(VAR_5.fs_ncg, sizeof(struct bufarea));
  if (VAR_3 == ((void*)0))
   FUNC_2(VAR_1, "cannot allocate cylinder group buffers");
 }
 VAR_7 = &VAR_3[VAR_6];
 if (VAR_7->b_un.b_cg != ((void*)0))
  return (VAR_7);
 VAR_8 = ((void*)0);
 if (VAR_4 == 0)
  VAR_8 = FUNC_5((unsigned int)VAR_5.fs_cgsize);
 if (VAR_8 == ((void*)0)) {
  FUNC_3(&VAR_2, FUNC_1(&VAR_5, VAR_6), VAR_5.fs_cgsize);
  return (&VAR_2);
 }
 VAR_7->b_un.b_cg = VAR_8;
 FUNC_4(VAR_7, VAR_0);
 FUNC_3(VAR_7, FUNC_1(&VAR_5, VAR_6), VAR_5.fs_cgsize);
 return (VAR_7);
}
