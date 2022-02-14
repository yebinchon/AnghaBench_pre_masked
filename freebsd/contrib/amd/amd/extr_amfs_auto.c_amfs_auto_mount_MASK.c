
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int opts ;
struct TYPE_18__ {char* mf_info; int mf_flags; TYPE_4__* mf_fo; } ;
typedef TYPE_6__ mntfs ;
struct TYPE_19__ {int am_autofs_fh; int am_name; void* am_pref; TYPE_5__* am_parent; } ;
typedef TYPE_7__ am_node ;
struct TYPE_13__ {int na_nlink; } ;
struct TYPE_17__ {char* am_pref; TYPE_3__* am_al; TYPE_1__ am_fattr; } ;
struct TYPE_16__ {char* opt_pref; } ;
struct TYPE_15__ {TYPE_2__* al_mnt; } ;
struct TYPE_14__ {int mf_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_7__*,TYPE_6__*,char*) ;
 int FUNC_3 (char*,int,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (char*,char*,int ,char*) ;
 char* FUNC_6 (char*,int ) ;
 void* FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(am_node *VAR_5, mntfs *VAR_6)
{
  if (VAR_5->am_parent == ((void*)0))
    return VAR_0;







  VAR_5->am_parent->am_fattr.na_nlink++;





  if (VAR_6->mf_info[0] == '.' && VAR_6->mf_info[1] == '\0')
    VAR_6->mf_info = FUNC_6(VAR_6->mf_info, VAR_5->am_parent->am_al->al_mnt->mf_info);
  if (VAR_6->mf_fo->opt_pref) {

    if (FUNC_0(VAR_6->mf_fo->opt_pref, "null")) {
      VAR_5->am_pref = FUNC_7("");
    } else {



      VAR_5->am_pref = FUNC_7(VAR_6->mf_fo->opt_pref);
    }
  } else {





    char *VAR_7 = VAR_5->am_parent->am_pref;
    if (VAR_7 == 0)
      VAR_7 = "";
    VAR_5->am_pref = FUNC_5((char *) ((void*)0), VAR_7, VAR_5->am_name, "/");
  }
  FUNC_1(VAR_6);

  return 0;
}
