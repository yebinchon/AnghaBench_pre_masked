
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; } ;
struct thread {int dummy; } ;
struct sf_hdtr {int trl_cnt; int * trailers; int hdr_cnt; int * headers; } ;
struct sendfile_args {scalar_t__ nbytes; int * sbytes; int flags; int offset; int s; int fd; int * hdtr; } ;
struct file {int dummy; } ;
typedef scalar_t__ off_t ;
typedef int hdtr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct sf_hdtr*,int) ;
 int FUNC_2 (int *,int ,struct uio**) ;
 int FUNC_3 (scalar_t__*,int *,int) ;
 int FUNC_4 (struct file*,struct thread*) ;
 int FUNC_5 (struct thread*,int ,int *,struct file**) ;
 int FUNC_6 (struct file*,int ,struct uio*,struct uio*,int ,scalar_t__,scalar_t__*,int ,struct thread*) ;
 int FUNC_7 (struct uio*,int ) ;

__attribute__((used)) static int
FUNC_8(struct thread *VAR_3, struct sendfile_args *VAR_4, int VAR_5)
{
 struct sf_hdtr VAR_6;
 struct uio *VAR_7, *VAR_8;
 struct file *VAR_9;
 off_t VAR_10;
 int VAR_11;





 if (VAR_4->offset < 0)
  return (VAR_0);

 VAR_10 = 0;
 VAR_7 = VAR_8 = ((void*)0);

 if (VAR_4->hdtr != ((void*)0)) {
  VAR_11 = FUNC_1(VAR_4->hdtr, &VAR_6, sizeof(VAR_6));
  if (VAR_11 != 0)
   goto out;
  if (VAR_6.headers != ((void*)0)) {
   VAR_11 = FUNC_2(VAR_6.headers, VAR_6.hdr_cnt,
       &VAR_7);
   if (VAR_11 != 0)
    goto out;
  }
  if (VAR_6.trailers != ((void*)0)) {
   VAR_11 = FUNC_2(VAR_6.trailers, VAR_6.trl_cnt,
       &VAR_8);
   if (VAR_11 != 0)
    goto out;
  }
 }

 FUNC_0(VAR_4->fd);





 if ((VAR_11 = FUNC_5(VAR_3, VAR_4->fd, &VAR_2, &VAR_9)) != 0)
  goto out;

 VAR_11 = FUNC_6(VAR_9, VAR_4->s, VAR_7, VAR_8, VAR_4->offset,
     VAR_4->nbytes, &VAR_10, VAR_4->flags, VAR_3);
 FUNC_4(VAR_9, VAR_3);

 if (VAR_4->sbytes != ((void*)0))
  FUNC_3(&VAR_10, VAR_4->sbytes, sizeof(off_t));

out:
 FUNC_7(VAR_7, VAR_1);
 FUNC_7(VAR_8, VAR_1);
 return (VAR_11);
}
