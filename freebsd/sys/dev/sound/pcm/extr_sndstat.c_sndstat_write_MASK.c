
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int temp ;
struct uio {int uio_resid; } ;
struct sndstat_file {scalar_t__ in_offset; scalar_t__ out_offset; int sbuf; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (void**) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int,struct uio*) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_2, struct uio *VAR_3, int VAR_4)
{
 struct sndstat_file *VAR_5;
 uint8_t VAR_6[64];
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2((void **)&VAR_5);
 if (VAR_7 != 0)
  return (VAR_7);


 if (VAR_3->uio_resid == 0)
  return (0);


 if (VAR_3->uio_resid > 65536)
  return (VAR_1);

 FUNC_0();
 if (VAR_5->in_offset != 0) {

  VAR_7 = VAR_0;
 } else {

  FUNC_4(&VAR_5->sbuf);
  while (1) {
   VAR_8 = sizeof(VAR_6);
   if (VAR_8 > VAR_3->uio_resid)
    VAR_8 = VAR_3->uio_resid;
   if (VAR_8 > 0) {
    VAR_7 = FUNC_7(VAR_6, VAR_8, VAR_3);
    if (VAR_7)
     break;
   } else {
    break;
   }
   if (FUNC_3(&VAR_5->sbuf, VAR_6, VAR_8) < 0) {
    VAR_7 = VAR_1;
    break;
   }
  }
  FUNC_5(&VAR_5->sbuf);
  if (VAR_7 == 0)
   VAR_5->out_offset = FUNC_6(&VAR_5->sbuf);
  else
   VAR_5->out_offset = 0;
 }
 FUNC_1();
 return (VAR_7);
}
