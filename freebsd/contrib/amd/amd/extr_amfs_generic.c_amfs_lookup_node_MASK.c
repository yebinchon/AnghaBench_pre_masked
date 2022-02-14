
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int mf_fsflags; int mf_error; int mf_flags; int mf_mount; } ;
typedef TYPE_2__ mntfs ;
struct TYPE_10__ {int am_error; int am_path; int am_flags; TYPE_1__* am_al; int am_name; struct TYPE_10__* am_osib; struct TYPE_10__* am_child; struct TYPE_10__* am_parent; } ;
typedef TYPE_3__ am_node ;
struct TYPE_8__ {TYPE_2__* al_mnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (char*) ;
 TYPE_3__* FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static am_node *
FUNC_9(am_node *VAR_11, char *VAR_12, int *VAR_13)
{
  am_node *VAR_14;
  int VAR_15 = 0;
  int VAR_16 = 0;
  mntfs *VAR_17;
  char *VAR_18 = ((void*)0);

  FUNC_2("in amfs_lookup_node");






  if (VAR_10 == VAR_5) {
    if (VAR_11->am_al == ((void*)0) || VAR_11->am_al->al_mnt == ((void*)0) || VAR_11->am_al->al_mnt->mf_fsflags & VAR_4) {
      FUNC_2("%s mount ignored - going down", VAR_12);
    } else {
      FUNC_2("%s/%s mount ignored - going down", VAR_11->am_path, VAR_12);
    }
    FUNC_3(VAR_1);
  }




  if (VAR_12[0] == '.') {
    if (VAR_12[1] == '\0')
      return VAR_11;
    if (VAR_12[1] == '.' && VAR_12[2] == '\0') {
      if (VAR_11->am_parent) {
 FUNC_2(".. in %s gives %s", VAR_11->am_path, VAR_11->am_parent->am_path);
 return VAR_11->am_parent;
      }
      FUNC_3(VAR_3);
    }
  }





  if (!FUNC_8(VAR_12)) {
    FUNC_6(VAR_9, "Key \"%s\" contains a disallowed character", VAR_12);
    FUNC_3(VAR_1);
  }





  VAR_18 = FUNC_4(VAR_12);




  for (VAR_14 = VAR_11->am_child; VAR_14; VAR_14 = VAR_14->am_osib) {
    if (FUNC_0(VAR_14->am_name, VAR_18)) {
      if (VAR_14->am_error) {
 VAR_15 = VAR_14->am_error;
 continue;
      }





      VAR_17 = VAR_14->am_al->al_mnt;
      if (VAR_17->mf_error < 0)
 goto in_progrss;





      if (VAR_17->mf_flags & VAR_6) {
 VAR_15 = VAR_17->mf_error;
 continue;
      }
      if (!(VAR_17->mf_flags & VAR_7) || (VAR_17->mf_flags & VAR_8)) {
      in_progrss:







 FUNC_2("ignoring mount of %s in %s -- %smounting in progress, flags %x",
      VAR_18, VAR_17->mf_mount,
      (VAR_17->mf_flags & VAR_8) ? "un" : "", VAR_17->mf_flags);
 VAR_16++;
 if (VAR_17->mf_flags & VAR_8) {
   FUNC_2("will remount later");
   VAR_14->am_flags |= VAR_0;
 }
 continue;
      }




      FUNC_2("matched %s in %s", VAR_18, VAR_14->am_path);
      FUNC_1(VAR_18);
      return VAR_14;
    }
  }

  if (VAR_16) {
    FUNC_2("Waiting while %d mount(s) in progress", VAR_16);
    FUNC_1(VAR_18);
    FUNC_3(-1);
  }




  if (VAR_15) {
    FUNC_2("Returning error: %s", FUNC_7(VAR_15));
    FUNC_1(VAR_18);
    FUNC_3(VAR_15);
  }





  if ((int) VAR_10 >= (int) VAR_5) {
    FUNC_2("not found - server going down anyway");
    FUNC_3(VAR_1);
  }




  VAR_14 = FUNC_5(VAR_11, VAR_18);
  FUNC_1(VAR_18);
  if (VAR_14 == ((void*)0))
    FUNC_3(VAR_2);

  *VAR_13 = -1;
  return VAR_14;
}
