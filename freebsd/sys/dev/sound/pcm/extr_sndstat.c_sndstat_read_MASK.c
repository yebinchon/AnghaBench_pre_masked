
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_resid; } ;
struct sndstat_file {scalar_t__ out_offset; scalar_t__ in_offset; int sbuf; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sndstat_file*) ;
 int FUNC_6 (int,int,struct uio*) ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_2, struct uio *VAR_3, int VAR_4)
{
 struct sndstat_file *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2((void **)&VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);


 if (VAR_3->uio_resid == 0)
  return (0);

 FUNC_0();
 if (VAR_5->out_offset != 0) {

  VAR_6 = VAR_0;
  goto done;
 } else if (VAR_5->in_offset == 0) {
  VAR_6 = FUNC_5(VAR_5);
  if (VAR_6 <= 0) {
   VAR_6 = VAR_1;
   goto done;
  }
 }
 VAR_7 = FUNC_4(&VAR_5->sbuf) - VAR_5->in_offset;
 if (VAR_7 > VAR_3->uio_resid)
  VAR_7 = VAR_3->uio_resid;
 if (VAR_7 > 0)
  VAR_6 = FUNC_6(FUNC_3(&VAR_5->sbuf) + VAR_5->in_offset, VAR_7, VAR_3);
 VAR_5->in_offset += VAR_7;
done:
 FUNC_1();
 return (VAR_6);
}
