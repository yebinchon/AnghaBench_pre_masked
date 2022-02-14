
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct nfscllayout {int nfsly_flags; int nfsly_lock; scalar_t__ nfsly_timestamp; } ;
struct nfsclflayout {int dummy; } ;
struct nfsclclient {int nfsc_layout; TYPE_1__* nfsc_nmp; } ;
typedef int mount_t ;
struct TYPE_2__ {int nm_mountp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int *,struct nfscllayout*,int ) ;
 int FUNC_4 (int *,struct nfscllayout*,int ) ;
 struct nfscllayout* FUNC_5 (struct nfsclclient*,int *,int) ;
 int FUNC_6 (struct nfscllayout*,int ,int ,struct nfsclflayout**) ;
 int VAR_4 ;
 int FUNC_7 (int *,int *,int ,int ) ;
 int FUNC_8 (int *,int,int *,int ,int ) ;

struct nfscllayout *
FUNC_9(struct nfsclclient *VAR_5, uint8_t *VAR_6, int VAR_7,
    uint64_t VAR_8, struct nfsclflayout **VAR_9, int *VAR_10)
{
 struct nfscllayout *VAR_11;
 mount_t VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = VAR_5->nfsc_nmp->nm_mountp;
 *VAR_10 = 0;
 *VAR_9 = ((void*)0);
 FUNC_1();
 VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_7);
 if (VAR_11 != ((void*)0)) {
  if ((VAR_11->nfsly_flags & VAR_2) == 0) {
   FUNC_4(&VAR_5->nfsc_layout, VAR_11, VAR_4);
   FUNC_3(&VAR_5->nfsc_layout, VAR_11, VAR_4);
   VAR_11->nfsly_timestamp = VAR_1 + 120;
   VAR_13 = FUNC_6(VAR_11, VAR_8,
       VAR_3, VAR_9);
   if (VAR_13 == 0)
    FUNC_7(&VAR_11->nfsly_lock, ((void*)0),
        VAR_0, VAR_12);
   else {
    do {
     VAR_14 = FUNC_8(&VAR_11->nfsly_lock,
         1, ((void*)0), VAR_0, VAR_12);
    } while (VAR_14 == 0 && !FUNC_0(VAR_12));
    *VAR_9 = ((void*)0);
   }
   if (FUNC_0(VAR_12)) {
    VAR_11 = ((void*)0);
    *VAR_10 = 1;
   }
  } else {
   VAR_11 = ((void*)0);
   *VAR_10 = 1;
  }
 }
 FUNC_2();
 return (VAR_11);
}
