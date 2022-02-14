
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchan_t ;
typedef scalar_t__ u_short ;
struct TYPE_11__ {int mf_refc; int mf_flags; TYPE_3__* mf_server; int mf_info; scalar_t__ mf_error; } ;
typedef TYPE_2__ mntfs ;
typedef int fwd_fun ;
struct TYPE_12__ {TYPE_1__* fs_ip; } ;
typedef TYPE_3__ fserver ;
struct TYPE_10__ {scalar_t__ sin_port; } ;
struct TYPE_13__ {char* fh_path; scalar_t__ fh_error; scalar_t__ fh_id; TYPE_3__* fh_fs; int fh_nfs_version; TYPE_1__ fh_sin; } ;
typedef TYPE_4__ fh_cache ;
typedef int am_nfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int ,int *,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,TYPE_3__*,int *,TYPE_2__*) ;
 char* FUNC_4 (int ,char) ;

__attribute__((used)) static void
FUNC_5(mntfs *VAR_2)
{
  fserver *VAR_3;
  char *VAR_4, *VAR_5;

  if (VAR_2->mf_error || VAR_2->mf_refc > 1)
    return;




  if (VAR_2->mf_flags & VAR_0)
    return;
  VAR_3 = VAR_2->mf_server;
  VAR_4 = VAR_5 = FUNC_4(VAR_2->mf_info, ':');
  if (VAR_3 && VAR_4) {
    fh_cache VAR_6;

    FUNC_2("calling mountd for %s", VAR_2->mf_info);
    *VAR_5++ = '\0';
    VAR_6.fh_path = VAR_5;
    VAR_6.fh_sin = *VAR_3->fs_ip;
    VAR_6.fh_sin.sin_port = (u_short) 0;
    VAR_6.fh_nfs_version = FUNC_0(VAR_3);
    VAR_6.fh_fs = VAR_3;
    VAR_6.fh_id = 0;
    VAR_6.fh_error = 0;
    FUNC_3(VAR_4 + 1, VAR_2->mf_server, (am_nfs_handle_t *) ((void*)0), VAR_2);
    FUNC_1(&VAR_6, VAR_1, (fwd_fun *) ((void*)0), (wchan_t) ((void*)0));
    *VAR_4 = ':';
  }
}
