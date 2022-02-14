
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vdev_ashift; struct TYPE_4__* vdev_top; } ;
typedef TYPE_1__ vdev_t ;
typedef int vdev_label_t ;
typedef int uint64_t ;
typedef int uberblock_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (char*,int,char*,int) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(vdev_label_t *VAR_1, uint64_t VAR_2)
{
 vdev_t VAR_3;
 vdev_t *VAR_4 = &VAR_3;
 char VAR_5[VAR_0];

 VAR_3.vdev_ashift = VAR_2;
 VAR_4->vdev_top = VAR_4;

 for (int VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++) {
  uint64_t VAR_7 = FUNC_1(VAR_4, VAR_6);
  uberblock_t *VAR_8 = (void *)((char *)VAR_1 + VAR_7);

  if (FUNC_4(VAR_8))
   continue;
  (void) FUNC_3(VAR_5, VAR_0,
      "Uberblock[%d]\n", VAR_6);
  FUNC_2(VAR_8, VAR_5, "");
 }
}
