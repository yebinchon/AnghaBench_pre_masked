
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int z_sa_hdl; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_13__ {int * v_object; int * v_mount; } ;
typedef TYPE_2__ vnode_t ;
typedef int vm_page_t ;
typedef int * vm_object_t ;
struct TYPE_14__ {int uio_loffset; } ;
typedef TYPE_3__ uio_t ;
typedef scalar_t__ uint64_t ;
struct sf_buf {int dummy; } ;
typedef int int64_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_3__*,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,scalar_t__,int ,TYPE_3__*) ;
 int FUNC_8 (scalar_t__,scalar_t__,TYPE_3__*) ;
 scalar_t__ FUNC_9 (int ,struct sf_buf**) ;
 int FUNC_10 (struct sf_buf*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(vnode_t *VAR_4, int VAR_5, uio_t *VAR_6)
{
 znode_t *VAR_7 = FUNC_2(VAR_4);
 vm_object_t VAR_8;
 int64_t VAR_9;
 caddr_t VAR_10;
 int VAR_11 = VAR_5;
 int VAR_12;
 int VAR_13 = 0;

 FUNC_0(VAR_4->v_mount != ((void*)0));
 VAR_8 = VAR_4->v_object;
 FUNC_0(VAR_8 != ((void*)0));

 VAR_9 = VAR_6->uio_loffset;
 VAR_12 = VAR_9 & VAR_1;
 FUNC_11(VAR_8);
 for (VAR_9 &= VAR_0; VAR_11 > 0; VAR_9 += VAR_2) {
  vm_page_t VAR_14;
  uint64_t VAR_15 = FUNC_1(VAR_2 - VAR_12, VAR_11);

  if ((VAR_14 = FUNC_5(VAR_4, VAR_9))) {
   struct sf_buf *VAR_16;
   caddr_t VAR_17;

   FUNC_12(VAR_8);
   VAR_17 = FUNC_9(VAR_14, &VAR_16);



   VAR_13 = FUNC_8(VAR_17 + VAR_12, VAR_15, VAR_6);

   FUNC_10(VAR_16);
   FUNC_11(VAR_8);
   FUNC_4(VAR_14);
  } else {
   FUNC_12(VAR_8);
   VAR_13 = FUNC_3(FUNC_6(VAR_7->z_sa_hdl),
       VAR_6, VAR_15);
   FUNC_11(VAR_8);
  }
  VAR_11 -= VAR_15;
  VAR_12 = 0;
  if (VAR_13)
   break;
 }
 FUNC_12(VAR_8);
 return (VAR_13);
}
