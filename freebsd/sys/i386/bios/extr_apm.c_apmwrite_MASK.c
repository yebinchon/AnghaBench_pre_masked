
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef int u_char ;
struct uio {int uio_resid; } ;
struct cdev {int dummy; } ;
struct apm_softc {int* event_filter; } ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,size_t,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct apm_softc VAR_5 ;
 scalar_t__ FUNC_1 (struct cdev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,struct uio*) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_6, struct uio *VAR_7, int VAR_8)
{
 struct apm_softc *VAR_9 = &VAR_5;
 u_int VAR_10;
 int VAR_11;
 u_char VAR_12;

 if (FUNC_1(VAR_6) != VAR_0)
  return(VAR_4);
 if (VAR_7->uio_resid != sizeof(u_int))
  return(VAR_2);

 if ((VAR_11 = FUNC_3((caddr_t)&VAR_10, sizeof(u_int), VAR_7)))
  return(VAR_11);

 if (VAR_10 >= VAR_1)
  return(VAR_3);

 if (VAR_9->event_filter[VAR_10] == 0) {
  VAR_12 = 1;
 } else {
  VAR_12 = 0;
 }
 VAR_9->event_filter[VAR_10] = VAR_12;
 FUNC_0("apmwrite: event 0x%x %s\n", VAR_10, FUNC_2(VAR_12));

 return VAR_7->uio_resid;
}
