
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_resid; } ;
struct cdev {int dummy; } ;
typedef int evtchn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char*,int,struct uio*) ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_2, struct uio *VAR_3, int VAR_4)
{
 char VAR_5[VAR_1];
 int VAR_6, VAR_7;

 VAR_7 = FUNC_0(VAR_5, sizeof(VAR_5), "%u", FUNC_2());
 if (VAR_7 < 0 || VAR_7 > VAR_3->uio_resid)
  return (VAR_0);

 VAR_6 = FUNC_1(VAR_5, VAR_7, VAR_3);
 if (VAR_6)
  return (VAR_6);

 return (0);
}
