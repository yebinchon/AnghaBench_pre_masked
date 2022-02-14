
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {unsigned int sb_sectsize; } ;
struct TYPE_9__ {int * m_sb_bp; TYPE_3__ m_sb; int * m_ddev_targp; } ;
typedef TYPE_1__ xfs_mount_t ;
typedef int xfs_buf_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (TYPE_1__*,int *,int ,unsigned int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_1__*,char*,...) ;

int
FUNC_10(xfs_mount_t *VAR_4, int VAR_5)
{
 unsigned int VAR_6;
 xfs_buf_t *VAR_7;
 int VAR_8;
 int VAR_9 = !(VAR_5 & VAR_2);

 FUNC_0(VAR_4->m_sb_bp == ((void*)0));
 FUNC_0(VAR_4->m_ddev_targp != ((void*)0));






 VAR_6 = FUNC_5(VAR_4->m_ddev_targp);

reread:
 VAR_7 = FUNC_2(VAR_4, VAR_4->m_ddev_targp,
     VAR_3, VAR_6, 0);
 if (!VAR_7) {
  if (VAR_9)
   FUNC_9(VAR_4, "SB buffer read failed");
  return VAR_0;
 }





 FUNC_8(&VAR_4->m_sb, FUNC_1(VAR_7));
 VAR_8 = FUNC_7(VAR_4, &(VAR_4->m_sb), VAR_5);
 if (VAR_8) {
  if (VAR_9)
   FUNC_9(VAR_4, "SB validate failed");
  goto release_buf;
 }




 if (VAR_6 > VAR_4->m_sb.sb_sectsize) {
  if (VAR_9)
   FUNC_9(VAR_4, "device supports %u byte sectors (not %u)",
    VAR_6, VAR_4->m_sb.sb_sectsize);
  VAR_8 = VAR_1;
  goto release_buf;
 }





 if (VAR_6 < VAR_4->m_sb.sb_sectsize) {
  FUNC_3(VAR_7);
  VAR_6 = VAR_4->m_sb.sb_sectsize;
  goto reread;
 }


 FUNC_6(VAR_4);

 VAR_4->m_sb_bp = VAR_7;
 FUNC_4(VAR_7);
 return 0;

release_buf:
 FUNC_3(VAR_7);
 return VAR_8;
}
