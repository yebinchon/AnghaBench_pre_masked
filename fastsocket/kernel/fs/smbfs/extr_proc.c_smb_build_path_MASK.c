
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smb_sb_info {int remote_nls; int local_nls; TYPE_3__* ops; TYPE_1__* mnt; } ;
struct qstr {int len; int name; } ;
struct TYPE_5__ {int len; int name; } ;
struct dentry {int d_lock; struct dentry* d_parent; TYPE_2__ d_name; } ;
struct TYPE_6__ {int (* convert ) (unsigned char*,int,int ,int ,int ,int ) ;} ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned char*,int,int ,int ,int ,int ) ;
 int FUNC_7 (unsigned char*,int,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct smb_sb_info *VAR_3, unsigned char *VAR_4,
     int VAR_5,
     struct dentry *VAR_6, struct qstr *VAR_7)
{
 unsigned char *VAR_8 = VAR_4;
 int VAR_9;
 int VAR_10 = (VAR_3->mnt->flags & VAR_2) != 0;

 if (VAR_5 < (2<<VAR_10))
  return -VAR_0;

 if (VAR_5 > VAR_1 + 1)
  VAR_5 = VAR_1 + 1;

 if (VAR_6 == ((void*)0))
  goto test_name_and_out;




 if (FUNC_0(VAR_6) && !VAR_7) {
  *VAR_8++ = '\\';
  if (VAR_10) *VAR_8++ = '\0';
  *VAR_8++ = '\0';
  if (VAR_10) *VAR_8++ = '\0';
  return VAR_8-VAR_4;
 }





 FUNC_1(VAR_6);
 FUNC_4(&VAR_6->d_lock);
 while (!FUNC_0(VAR_6)) {
  struct dentry *VAR_11;

  if (VAR_5 < (3<<VAR_10)) {
   FUNC_5(&VAR_6->d_lock);
   FUNC_2(VAR_6);
   return -VAR_0;
  }

  VAR_9 = VAR_3->ops->convert(VAR_8, VAR_5-2,
          VAR_6->d_name.name, VAR_6->d_name.len,
          VAR_3->local_nls, VAR_3->remote_nls);
  if (VAR_9 < 0) {
   FUNC_5(&VAR_6->d_lock);
   FUNC_2(VAR_6);
   return VAR_9;
  }
  FUNC_3(VAR_8, VAR_9);
  VAR_8 += VAR_9;
  if (VAR_10) {

   *VAR_8++ = '\0';
   VAR_5--;
  }
  *VAR_8++ = '\\';
  VAR_5 -= VAR_9+1;

  VAR_11 = VAR_6->d_parent;
  FUNC_1(VAR_11);
  FUNC_5(&VAR_6->d_lock);
  FUNC_2(VAR_6);
  VAR_6 = VAR_11;
  FUNC_4(&VAR_6->d_lock);
 }
 FUNC_5(&VAR_6->d_lock);
 FUNC_2(VAR_6);
 FUNC_3(VAR_4, VAR_8-VAR_4);


test_name_and_out:
 if (VAR_7) {
  if (VAR_5 < (3<<VAR_10))
   return -VAR_0;
  *VAR_8++ = '\\';
  if (VAR_10) {
   *VAR_8++ = '\0';
   VAR_5--;
  }
  VAR_9 = VAR_3->ops->convert(VAR_8, VAR_5-2,
          VAR_7->name, VAR_7->len,
          VAR_3->local_nls, VAR_3->remote_nls);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_8 += VAR_9;
  VAR_5 -= VAR_9+1;
 }

 *VAR_8++ = '\0';
 if (VAR_10) *VAR_8++ = '\0';
 return VAR_8-VAR_4;
}
