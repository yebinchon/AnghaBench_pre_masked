
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * v_object; int * v_mount; } ;
typedef TYPE_1__ vnode_t ;
typedef int * vm_page_t ;
typedef int * vm_object_t ;
typedef int uint64_t ;
struct sf_buf {int dummy; } ;
typedef int objset_t ;
typedef int int64_t ;
typedef int dmu_tx_t ;
typedef int caddr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int,int,int ,int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int * FUNC_3 (TYPE_1__*,int,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct sf_buf**) ;
 int FUNC_8 (struct sf_buf*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(vnode_t *VAR_5, int64_t VAR_6, int VAR_7, objset_t *VAR_8, uint64_t VAR_9,
    int VAR_10, dmu_tx_t *VAR_11)
{
 vm_object_t VAR_12;
 struct sf_buf *VAR_13;
 caddr_t VAR_14;
 int VAR_15;

 FUNC_0(VAR_10 != VAR_4);
 FUNC_0(VAR_5->v_mount != ((void*)0));
 VAR_12 = VAR_5->v_object;
 FUNC_0(VAR_12 != ((void*)0));

 VAR_15 = VAR_6 & VAR_2;
 FUNC_9(VAR_12);
 FUNC_5(VAR_12, 1);
 for (VAR_6 &= VAR_1; VAR_7 > 0; VAR_6 += VAR_3) {
  vm_page_t VAR_16;
  int VAR_17 = FUNC_2(VAR_3 - VAR_15, VAR_7);

  if ((VAR_16 = FUNC_3(VAR_5, VAR_6, VAR_15, VAR_17)) != ((void*)0)) {
   FUNC_10(VAR_12);

   VAR_14 = FUNC_7(VAR_16, &VAR_13);
   (void) FUNC_1(VAR_8, VAR_9, VAR_6+VAR_15, VAR_17,
       VAR_14+VAR_15, VAR_0);;
   FUNC_8(VAR_13);

   FUNC_9(VAR_12);
   FUNC_4(VAR_16);
  }
  VAR_7 -= VAR_17;
  VAR_15 = 0;
 }
 FUNC_6(VAR_12);
 FUNC_10(VAR_12);
}
