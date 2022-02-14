
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct uio {int dummy; } ;
struct pseudo_dirent {int dummy; } ;
struct fuse_iov {int len; scalar_t__ base; } ;
struct fuse_dirent {char* namelen; scalar_t__ off; int type; int ino; } ;
struct dirent {int d_reclen; char* d_namlen; int d_type; int d_fileno; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 size_t FUNC_0 (struct fuse_dirent*) ;
 size_t VAR_1 ;
 int FUNC_1 (struct pseudo_dirent*) ;
 char* VAR_2 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct dirent*) ;
 int FUNC_4 (struct fuse_iov*,int) ;
 scalar_t__ FUNC_5 (void*,size_t) ;
 int FUNC_6 (int,char*,char*) ;
 int FUNC_7 (struct uio*) ;
 int FUNC_8 (struct uio*,scalar_t__) ;
 int FUNC_9 (scalar_t__,int ,struct uio*) ;

int
FUNC_10(struct uio *VAR_3,
    off_t VAR_4,
    int *VAR_5,
    size_t VAR_6,
    void *VAR_7,
    size_t VAR_8,
    struct fuse_iov *VAR_9,
    int *VAR_10,
    u_long **VAR_11)
{
 int VAR_12 = 0;
 int VAR_13;
 size_t VAR_14;

 struct dirent *VAR_15;
 struct fuse_dirent *VAR_16;
 u_long *VAR_17;

 VAR_17 = *VAR_11;
 if (VAR_8 < VAR_1)
  return -1;
 for (;;) {
  if (VAR_8 < VAR_1) {
   VAR_12 = -1;
   break;
  }
  VAR_16 = (struct fuse_dirent *)VAR_7;
  VAR_14 = FUNC_0(VAR_16);

  if (VAR_8 < VAR_14) {




   VAR_12 = -1;
   break;
  }







  if (!VAR_16->namelen || VAR_16->namelen > VAR_2) {
   VAR_12 = VAR_0;
   break;
  }
  VAR_13 = FUNC_1((struct pseudo_dirent *)
         &VAR_16->namelen);

  if (VAR_13 > FUNC_7(VAR_3)) {

   VAR_12 = -1;
   break;
  }




  if (*VAR_5 != 0) {
   FUNC_4(VAR_9, VAR_13);
   FUNC_2(VAR_9->base, VAR_13);

   VAR_15 = (struct dirent *)VAR_9->base;
   VAR_15->d_fileno = VAR_16->ino;
   VAR_15->d_reclen = VAR_13;
   VAR_15->d_type = VAR_16->type;
   VAR_15->d_namlen = VAR_16->namelen;
   FUNC_6((char *)VAR_9->base + sizeof(struct dirent) -
          VAR_2 - 1,
          (char *)VAR_7 + VAR_1, VAR_16->namelen);
   FUNC_3(VAR_15);

   VAR_12 = FUNC_9(VAR_9->base, VAR_9->len, VAR_3);
   if (VAR_12)
    break;
   if (VAR_17 != ((void*)0)) {
    if (*VAR_10 == 0) {
     VAR_12 = -1;
     break;
    }
    *VAR_17 = VAR_16->off;
    VAR_17++;
    (*VAR_10)--;
   }
  } else if (VAR_4 == VAR_16->off)
   *VAR_5 = 1;
  VAR_7 = (char *)VAR_7 + VAR_14;
  VAR_8 -= VAR_14;
  FUNC_8(VAR_3, VAR_16->off);
 }
 *VAR_11 = VAR_17;

 return VAR_12;
}
