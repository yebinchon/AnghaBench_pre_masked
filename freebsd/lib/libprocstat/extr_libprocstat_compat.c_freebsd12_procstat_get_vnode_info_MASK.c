
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnstat {int vn_devname; int vn_mode; int vn_type; int vn_fsid; int vn_dev; int vn_mntdir; int vn_size; int vn_fileid; } ;
struct procstat {int dummy; } ;
struct freebsd12_vnstat {int vn_devname; int vn_mode; int vn_type; int vn_fsid; int vn_dev; int vn_mntdir; int vn_size; int vn_fileid; } ;
struct filestat {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct procstat*,struct filestat*,struct vnstat*,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

int
FUNC_4(struct procstat *VAR_1,
    struct filestat *VAR_2, struct freebsd12_vnstat *VAR_3, char *VAR_4)
{
 struct vnstat VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_5, VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_3->vn_fileid = VAR_5.vn_fileid;
 VAR_3->vn_size = VAR_5.vn_size;
 VAR_3->vn_mntdir = VAR_5.vn_mntdir;
 VAR_3->vn_dev = VAR_5.vn_dev;
 VAR_3->vn_fsid = VAR_5.vn_fsid;
 VAR_3->vn_type = VAR_5.vn_type;
 VAR_3->vn_mode = VAR_5.vn_mode;
 if (FUNC_3(VAR_5.vn_devname) >= sizeof(VAR_3->vn_devname))
  FUNC_2(VAR_3->vn_devname, VAR_0);
 else
  FUNC_0(VAR_3->vn_devname, VAR_5.vn_devname,
      sizeof(VAR_3->vn_devname));
 return (0);
}
