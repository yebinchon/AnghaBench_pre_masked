
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct sockaddr_un {int sun_len; int * sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int sname ;
typedef scalar_t__ isc_result_t ;
struct TYPE_12__ {int handle; } ;
struct TYPE_11__ {int handle; scalar_t__ sz_to_recv; int status; } ;
struct TYPE_13__ {TYPE_2__ file; TYPE_1__ usocket; } ;
struct TYPE_14__ {int type; TYPE_3__ sources; struct sockaddr_un* name; void* bad; scalar_t__ total; TYPE_5__* ent; int magic; } ;
typedef TYPE_4__ isc_entropysource_t ;
struct TYPE_15__ {int lock; int nsources; int sources; int mctx; } ;
typedef TYPE_5__ isc_entropy_t ;
typedef void* isc_boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int ,TYPE_4__*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct sockaddr_un*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 TYPE_4__* FUNC_12 (int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct sockaddr_un*,int ,int) ;
 int FUNC_15 (char const*,int,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 scalar_t__ FUNC_17 (char const*,struct stat*) ;
 int FUNC_18 (int *,char const*,int) ;

isc_result_t
FUNC_19(isc_entropy_t *VAR_17, const char *VAR_18) {
 int VAR_19;
 struct stat VAR_20;
 isc_boolean_t VAR_21 = VAR_4;
 isc_boolean_t VAR_22 = VAR_4;
 isc_result_t VAR_23;
 isc_entropysource_t *VAR_24;

 FUNC_3(FUNC_8(VAR_17));
 FUNC_3(VAR_18 != ((void*)0));

 FUNC_2(&VAR_17->lock);

 if (FUNC_17(VAR_18, &VAR_20) < 0) {
  VAR_23 = FUNC_11(VAR_13);
  goto errout;
 }
 if (VAR_21)
  VAR_19 = FUNC_16(VAR_9, VAR_11, 0);
 else
  VAR_19 = FUNC_15(VAR_18, VAR_8 | VAR_10, 0);

 if (VAR_19 < 0) {
  VAR_23 = FUNC_11(VAR_13);
  goto errout;
 }

 VAR_23 = FUNC_13(VAR_19);
 if (VAR_23 != VAR_6)
  goto closefd;

 if (VAR_21) {
  struct sockaddr_un VAR_25;

  FUNC_14(&VAR_25, 0, sizeof(VAR_25));
  VAR_25.sun_family = VAR_0;
  FUNC_18(VAR_25.sun_path, VAR_18, sizeof(VAR_25.sun_path));
  VAR_25.sun_path[sizeof(VAR_25.sun_path)-1] = '0';
  if (FUNC_10(VAR_19, (struct sockaddr *) &VAR_25,
       sizeof(struct sockaddr_un)) < 0) {
   if (VAR_13 != VAR_1) {
    VAR_23 = FUNC_11(VAR_13);
    goto closefd;
   }
  } else
   VAR_22 = VAR_7;
 }

 VAR_24 = FUNC_12(VAR_17->mctx, sizeof(isc_entropysource_t));
 if (VAR_24 == ((void*)0)) {
  VAR_23 = VAR_5;
  goto closefd;
 }




 VAR_24->magic = VAR_12;
 VAR_24->ent = VAR_17;
 VAR_24->total = 0;
 VAR_24->bad = VAR_4;
 FUNC_14(VAR_24->name, 0, sizeof(VAR_24->name));
 FUNC_0(VAR_24, VAR_16);
 if (VAR_21) {
  VAR_24->sources.usocket.handle = VAR_19;
  if (VAR_22)
   VAR_24->sources.usocket.status =
     VAR_14;
  else
   VAR_24->sources.usocket.status =
     VAR_15;
  VAR_24->sources.usocket.sz_to_recv = 0;
  VAR_24->type = VAR_3;
 } else {
  VAR_24->sources.file.handle = VAR_19;
  VAR_24->type = VAR_2;
 }




 FUNC_1(VAR_17->sources, VAR_24, VAR_16);
 VAR_17->nsources++;

 FUNC_7(&VAR_17->lock);
 return (VAR_6);

 closefd:
 (void)FUNC_9(VAR_19);

 errout:
 FUNC_7(&VAR_17->lock);

 return (VAR_23);
}
