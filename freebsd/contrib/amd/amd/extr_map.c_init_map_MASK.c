
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int nt_seconds; } ;
struct TYPE_13__ {int na_fsid; TYPE_8__ na_atime; TYPE_8__ na_ctime; TYPE_8__ na_mtime; int na_fileid; } ;
struct TYPE_10__ {int s_mtime; } ;
struct TYPE_9__ {int ns_status; } ;
struct TYPE_11__ {int am_dev; int am_rdev; int* am_fd; TYPE_7__ am_fattr; TYPE_2__ am_stats; int am_gen; TYPE_1__ am_attr; int am_timeo; int * am_autofs_fh; void* am_path; void* am_name; int * am_alarray; int am_al; } ;
typedef TYPE_3__ am_node ;
struct TYPE_12__ {int am_timeo; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_8__*) ;
 TYPE_7__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_3__*) ;
 void* FUNC_4 (char*) ;

void
FUNC_5(am_node *VAR_3, char *VAR_4)
{





  VAR_3->am_al = FUNC_2();
  VAR_3->am_alarray = ((void*)0);
  VAR_3->am_name = FUNC_4(VAR_4);
  VAR_3->am_path = FUNC_4(VAR_4);
  VAR_3->am_gen = FUNC_1();




  VAR_3->am_timeo = VAR_2.am_timeo;
  VAR_3->am_attr.ns_status = VAR_0;
  VAR_3->am_fattr = VAR_1;
  VAR_3->am_fattr.na_fsid = 42;
  VAR_3->am_fattr.na_fileid = VAR_3->am_gen;
  FUNC_0(&VAR_3->am_fattr.na_atime);

  VAR_3->am_fattr.na_mtime = VAR_3->am_fattr.na_ctime = VAR_3->am_fattr.na_atime;

  FUNC_3(VAR_3);
  VAR_3->am_stats.s_mtime = VAR_3->am_fattr.na_atime.nt_seconds;
  VAR_3->am_dev = -1;
  VAR_3->am_rdev = -1;
  VAR_3->am_fd[0] = -1;
  VAR_3->am_fd[1] = -1;
}
