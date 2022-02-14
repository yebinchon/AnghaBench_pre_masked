
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_offset; int uio_resid; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 long FUNC_1 (int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,long,struct uio*) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_5, struct uio *VAR_6, int VAR_7)
{
 long VAR_8;
 int VAR_9;

 FUNC_0(4, FUNC_2("midistat_read\n"));
 FUNC_5(&VAR_3);
 if (!VAR_2) {
  FUNC_6(&VAR_3);
  return VAR_0;
 }
 if (VAR_6->uio_offset < 0 || VAR_6->uio_offset > FUNC_4(&VAR_4)) {
  FUNC_6(&VAR_3);
  return VAR_1;
 }
 VAR_9 = 0;
 VAR_8 = FUNC_1(VAR_6->uio_resid, FUNC_4(&VAR_4) - VAR_6->uio_offset);
 if (VAR_8 > 0) {
  VAR_9 = FUNC_7(FUNC_3(&VAR_4) + VAR_6->uio_offset, VAR_8,
      VAR_6);
 }
 FUNC_6(&VAR_3);
 return VAR_9;
}
