
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* zfs_name; TYPE_6__* zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_9__ {int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int uint64_t ;
struct TYPE_10__ {char* tosnap; char* fromsnap; void* err; void* seento; void* seenfrom; scalar_t__ replicate; scalar_t__ prevsnap_obj; void** prevsnap; } ;
typedef TYPE_3__ send_dump_data_t ;
typedef void* boolean_t ;
struct TYPE_11__ {int libzfs_fd; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,char*,char*,...) ;
 int FUNC_2 (TYPE_6__*,char*,char*) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 (int ,int,char*,char*,char*) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*,int ,void*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(zfs_handle_t *VAR_6, void *VAR_7)
{
 int VAR_8 = 0;
 uint64_t VAR_9 = 0, VAR_10 = 0;
 send_dump_data_t *VAR_11 = VAR_7;
 boolean_t VAR_12 = VAR_0;
 zfs_cmd_t VAR_13 = { 0 };

 (void) FUNC_4(VAR_13.zc_name, sizeof (VAR_13.zc_name), "%s@%s",
     VAR_6->zfs_name, VAR_11->tosnap);
 if (FUNC_3(VAR_6->zfs_hdl->libzfs_fd, VAR_3, &VAR_13) != 0) {
  (void) FUNC_1(VAR_5, FUNC_0(VAR_2,
      "WARNING: could not send %s@%s: does not exist\n"),
      VAR_6->zfs_name, VAR_11->tosnap);
  VAR_11->err = VAR_1;
  return (0);
 }

 if (VAR_11->replicate && VAR_11->fromsnap) {







  (void) FUNC_4(VAR_13.zc_name, sizeof (VAR_13.zc_name), "%s@%s",
      VAR_6->zfs_name, VAR_11->fromsnap);
  if (FUNC_3(VAR_6->zfs_hdl->libzfs_fd,
      VAR_3, &VAR_13) != 0) {
   VAR_12 = VAR_1;
  }
 }

 VAR_11->seenfrom = VAR_11->seento = VAR_11->prevsnap[0] = 0;
 VAR_11->prevsnap_obj = 0;
 if (VAR_11->fromsnap == ((void*)0) || VAR_12)
  VAR_11->seenfrom = VAR_1;

 if (!VAR_11->replicate && VAR_11->fromsnap != ((void*)0))
  VAR_9 = FUNC_2(VAR_6->zfs_hdl, VAR_6->zfs_name,
      VAR_11->fromsnap);
 if (!VAR_11->replicate && VAR_11->tosnap != ((void*)0))
  VAR_10 = FUNC_2(VAR_6->zfs_hdl, VAR_6->zfs_name,
      VAR_11->tosnap);

 VAR_8 = FUNC_5(VAR_6, VAR_4, VAR_7,
     VAR_9, VAR_10);
 if (!VAR_11->seenfrom) {
  (void) FUNC_1(VAR_5, FUNC_0(VAR_2,
      "WARNING: could not send %s@%s:\n"
      "incremental source (%s@%s) does not exist\n"),
      VAR_6->zfs_name, VAR_11->tosnap,
      VAR_6->zfs_name, VAR_11->fromsnap);
  VAR_11->err = VAR_1;
 } else if (!VAR_11->seento) {
  if (VAR_11->fromsnap) {
   (void) FUNC_1(VAR_5, FUNC_0(VAR_2,
       "WARNING: could not send %s@%s:\n"
       "incremental source (%s@%s) "
       "is not earlier than it\n"),
       VAR_6->zfs_name, VAR_11->tosnap,
       VAR_6->zfs_name, VAR_11->fromsnap);
  } else {
   (void) FUNC_1(VAR_5, FUNC_0(VAR_2,
       "WARNING: "
       "could not send %s@%s: does not exist\n"),
       VAR_6->zfs_name, VAR_11->tosnap);
  }
  VAR_11->err = VAR_1;
 }

 return (VAR_8);
}
