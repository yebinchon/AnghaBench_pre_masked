
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_14__ {int mtx; } ;
struct TYPE_13__ {int mtx; } ;
struct TYPE_12__ {int mtx; } ;
struct TYPE_11__ {int mnt_explock; int mnt_mtx; } ;
struct TYPE_10__ {int * vndeleg_disable; int * vndeleg_recall; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 int VAR_9 ;
 int FUNC_8 () ;
 int VAR_10 ;
 TYPE_3__* VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int * VAR_15 ;
 TYPE_3__* VAR_16 ;
 TYPE_3__* VAR_17 ;
 int VAR_18 ;
 TYPE_5__* VAR_19 ;
 TYPE_4__* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int * VAR_24 ;
 int VAR_25 ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int * VAR_26 ;
 TYPE_3__* VAR_27 ;
 int * VAR_28 ;
 TYPE_2__ VAR_29 ;
 int FUNC_15 (int *) ;
 TYPE_1__ VAR_30 ;

__attribute__((used)) static int
FUNC_16(module_t VAR_31, int VAR_32, void *VAR_33)
{
 int VAR_34 = 0, VAR_35;
 static int VAR_36 = 0;

 switch (VAR_32) {
 case 129:
  if (VAR_36)
   goto out;
  FUNC_8();
  for (VAR_35 = 0; VAR_35 < VAR_6; VAR_35++) {
   FUNC_7(&VAR_20[VAR_35].mtx, "nfsrtc", ((void*)0),
       VAR_2);
   FUNC_7(&VAR_19[VAR_35].mtx, "nfsrtca", ((void*)0),
       VAR_2);
  }
  FUNC_7(&VAR_18, "nfsuc", ((void*)0), VAR_2);
  FUNC_7(&VAR_10, "nfs4rt", ((void*)0), VAR_2);
  FUNC_7(&VAR_29.mnt_mtx, "nfs4mnt", ((void*)0), VAR_2);
  FUNC_7(&VAR_21, "nfs4dnl", ((void*)0), VAR_2);
  FUNC_7(&VAR_23, "nfs4rec", ((void*)0), VAR_2);
  FUNC_5(&VAR_29.mnt_explock, VAR_7, "explock", 0, 0);
  FUNC_14();
  FUNC_9();
  FUNC_0();
  FUNC_13(0);
  FUNC_1();
  FUNC_10();




  VAR_13 = VAR_24;
  VAR_12 = VAR_28;
  VAR_36 = 1;
  break;

 case 128:
  if (VAR_9 != 0) {
   VAR_34 = VAR_0;
   break;
  }





  VAR_13 = ((void*)0);
  VAR_12 = ((void*)0);


  FUNC_11(VAR_8);


  FUNC_12();


  if (VAR_26 != ((void*)0))
   FUNC_15(VAR_26);


  for (VAR_35 = 0; VAR_35 < VAR_6; VAR_35++) {
   FUNC_6(&VAR_20[VAR_35].mtx);
   FUNC_6(&VAR_19[VAR_35].mtx);
  }
  FUNC_6(&VAR_18);
  FUNC_6(&VAR_10);
  FUNC_6(&VAR_29.mnt_mtx);
  FUNC_6(&VAR_21);
  FUNC_6(&VAR_23);
  for (VAR_35 = 0; VAR_35 < VAR_25; VAR_35++)
   FUNC_6(&VAR_27[VAR_35].mtx);
  if (VAR_16 != ((void*)0)) {
   for (VAR_35 = 0; VAR_35 < VAR_22; VAR_35++)
    FUNC_6(&VAR_16[VAR_35].mtx);
   FUNC_3(VAR_16, VAR_5);
  }
  FUNC_4(&VAR_29.mnt_explock);
  FUNC_3(VAR_11, VAR_3);
  FUNC_3(VAR_17, VAR_4);
  FUNC_3(VAR_27, VAR_5);
  VAR_36 = 0;
  break;
 default:
  VAR_34 = VAR_1;
  break;
 }

out:
 FUNC_2(VAR_34);
 return (VAR_34);
}
