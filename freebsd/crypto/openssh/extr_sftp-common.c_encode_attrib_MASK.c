
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sshbuf {int dummy; } ;
struct TYPE_3__ {int flags; int uid; int gid; int perm; int atime; int mtime; int size; } ;
typedef TYPE_1__ Attrib ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sshbuf*,int) ;
 int FUNC_1 (struct sshbuf*,int ) ;

int
FUNC_2(struct sshbuf *VAR_4, const Attrib *VAR_5)
{
 int VAR_6;

 if ((VAR_6 = FUNC_0(VAR_4, VAR_5->flags)) != 0)
  return VAR_6;
 if (VAR_5->flags & VAR_2) {
  if ((VAR_6 = FUNC_1(VAR_4, VAR_5->size)) != 0)
   return VAR_6;
 }
 if (VAR_5->flags & VAR_3) {
  if ((VAR_6 = FUNC_0(VAR_4, VAR_5->uid)) != 0 ||
      (VAR_6 = FUNC_0(VAR_4, VAR_5->gid)) != 0)
   return VAR_6;
 }
 if (VAR_5->flags & VAR_1) {
  if ((VAR_6 = FUNC_0(VAR_4, VAR_5->perm)) != 0)
   return VAR_6;
 }
 if (VAR_5->flags & VAR_0) {
  if ((VAR_6 = FUNC_0(VAR_4, VAR_5->atime)) != 0 ||
      (VAR_6 = FUNC_0(VAR_4, VAR_5->mtime)) != 0)
   return VAR_6;
 }
 return 0;
}
