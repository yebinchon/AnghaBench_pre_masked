
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int q_back; } ;
typedef TYPE_2__ qelem ;
struct TYPE_10__ {int m_q; void* m_mount; int m_name; } ;
typedef TYPE_3__ fsi_mount ;
struct TYPE_11__ {scalar_t__ d_passno; scalar_t__ d_freq; int d_mask; int d_dev; TYPE_1__* d_host; int d_ioloc; int d_fstype; TYPE_2__* d_mount; } ;
typedef TYPE_4__ disk_fs ;
struct TYPE_8__ {int h_hostname; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 TYPE_3__* FUNC_6 () ;
 void* FUNC_7 () ;
 int FUNC_8 (TYPE_4__*,int ,int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(disk_fs *VAR_5)
{



  if (FUNC_1(VAR_5->d_mask, VAR_1)) {
    if (FUNC_2(VAR_5->d_fstype, "swap")) {




      if (!FUNC_1(VAR_5->d_mask, VAR_4)) {
 VAR_5->d_passno = 0;
 FUNC_0(VAR_5->d_mask, VAR_4);
      } else if (VAR_5->d_freq != 0) {
 FUNC_5(VAR_5->d_ioloc,
   "Pass number for %s:%s is non-zero",
   VAR_5->d_host->h_hostname, VAR_5->d_dev);
      }




      if (!FUNC_1(VAR_5->d_mask, VAR_0)) {
 VAR_5->d_freq = 0;
 FUNC_0(VAR_5->d_mask, VAR_0);
      } else if (VAR_5->d_freq != 0) {
 FUNC_5(VAR_5->d_ioloc,
   "dump frequency for %s:%s is non-zero",
   VAR_5->d_host->h_hostname, VAR_5->d_dev);
      }




      if (!FUNC_1(VAR_5->d_mask, VAR_3))
 FUNC_8(VAR_5, VAR_3, FUNC_9("swap"));




      if (!FUNC_1(VAR_5->d_mask, VAR_2)) {
 qelem *VAR_6 = FUNC_7();
 fsi_mount *VAR_7 = FUNC_6();

 VAR_7->m_name = FUNC_9("swap");
 VAR_7->m_mount = FUNC_7();
 FUNC_3(&VAR_7->m_q, VAR_6->q_back);
 VAR_5->d_mount = VAR_6;
 FUNC_0(VAR_5->d_mask, VAR_2);
      } else {
 FUNC_4(VAR_5->d_ioloc, "%s: mount field specified for swap partition", VAR_5->d_host->h_hostname);
      }
    } else if (FUNC_2(VAR_5->d_fstype, "export")) {




      if (!FUNC_1(VAR_5->d_mask, VAR_4)) {
 VAR_5->d_passno = 0;
 FUNC_0(VAR_5->d_mask, VAR_4);
      } else if (VAR_5->d_passno != 0) {
 FUNC_5(VAR_5->d_ioloc,
   "pass number for %s:%s is non-zero",
   VAR_5->d_host->h_hostname, VAR_5->d_dev);
      }




      if (!FUNC_1(VAR_5->d_mask, VAR_0)) {
 VAR_5->d_freq = 0;
 FUNC_0(VAR_5->d_mask, VAR_0);
      } else if (VAR_5->d_freq != 0) {
 FUNC_5(VAR_5->d_ioloc,
   "dump frequency for %s:%s is non-zero",
   VAR_5->d_host->h_hostname, VAR_5->d_dev);
      }




      if (!FUNC_1(VAR_5->d_mask, VAR_3))
 FUNC_8(VAR_5, VAR_3, FUNC_9("rw,defaults"));

    }
  }
}
