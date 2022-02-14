
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsoptlist {int dummy; } ;
struct vfsopt {char* name; char* value; size_t len; unsigned int pos; scalar_t__ seen; } ;
struct uio {unsigned int uio_iovcnt; scalar_t__ uio_segflg; TYPE_1__* uio_iov; } ;
struct TYPE_2__ {size_t iov_len; int iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vfsoptlist*) ;
 int FUNC_1 (struct vfsoptlist*,struct vfsopt*,int ) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (int ,char*,size_t) ;
 int VAR_5 ;
 void* FUNC_4 (size_t,int ,int ) ;
 int FUNC_5 (struct vfsoptlist*) ;
 int FUNC_6 (struct vfsoptlist*) ;

int
FUNC_7(struct uio *VAR_6, struct vfsoptlist **VAR_7)
{
 struct vfsoptlist *VAR_8;
 struct vfsopt *VAR_9;
 size_t VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14;
 int VAR_15;

 VAR_8 = FUNC_4(sizeof(struct vfsoptlist), VAR_1, VAR_2);
 FUNC_0(VAR_8);
 VAR_10 = 0;
 VAR_14 = VAR_6->uio_iovcnt;
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13 += 2) {
  VAR_11 = VAR_6->uio_iov[VAR_13].iov_len;
  VAR_12 = VAR_6->uio_iov[VAR_13 + 1].iov_len;
  VAR_10 += sizeof(struct vfsopt) + VAR_12 + VAR_11;




  if (VAR_10 > VAR_4 ||
      VAR_12 > VAR_4 ||
      VAR_11 > VAR_4) {
   VAR_15 = VAR_0;
   goto bad;
  }

  VAR_9 = FUNC_4(sizeof(struct vfsopt), VAR_1, VAR_2);
  VAR_9->name = FUNC_4(VAR_11, VAR_1, VAR_2);
  VAR_9->value = ((void*)0);
  VAR_9->len = 0;
  VAR_9->pos = VAR_13 / 2;
  VAR_9->seen = 0;





  FUNC_1(VAR_8, VAR_9, VAR_5);

  if (VAR_6->uio_segflg == VAR_3) {
   FUNC_2(VAR_6->uio_iov[VAR_13].iov_base, VAR_9->name, VAR_11);
  } else {
   VAR_15 = FUNC_3(VAR_6->uio_iov[VAR_13].iov_base, VAR_9->name,
       VAR_11);
   if (VAR_15)
    goto bad;
  }

  if (VAR_11 == 0 || VAR_9->name[VAR_11 - 1] != '\0') {
   VAR_15 = VAR_0;
   goto bad;
  }
  if (VAR_12 != 0) {
   VAR_9->len = VAR_12;
   VAR_9->value = FUNC_4(VAR_12, VAR_1, VAR_2);
   if (VAR_6->uio_segflg == VAR_3) {
    FUNC_2(VAR_6->uio_iov[VAR_13 + 1].iov_base, VAR_9->value,
        VAR_12);
   } else {
    VAR_15 = FUNC_3(VAR_6->uio_iov[VAR_13 + 1].iov_base,
        VAR_9->value, VAR_12);
    if (VAR_15)
     goto bad;
   }
  }
 }
 FUNC_6(VAR_8);
 *VAR_7 = VAR_8;
 return (0);
bad:
 FUNC_5(VAR_8);
 return (VAR_15);
}
