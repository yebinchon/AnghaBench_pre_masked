
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_resid; } ;
struct sbuf {int dummy; } ;
struct ledsc {int dummy; } ;
struct cdev {struct ledsc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,struct sbuf**,int*) ;
 int FUNC_2 (struct ledsc*,struct sbuf**,int) ;
 char* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sbuf*) ;
 int FUNC_7 (char*,size_t,struct uio*) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_4, struct uio *VAR_5, int VAR_6)
{
 struct ledsc *VAR_7;
 char *VAR_8;
 struct sbuf *VAR_9 = ((void*)0);
 int VAR_10, VAR_11 = 0;

 if (VAR_5->uio_resid > 512)
  return (VAR_0);
 VAR_8 = FUNC_3(VAR_5->uio_resid + 1, VAR_1, VAR_2);
 VAR_8[VAR_5->uio_resid] = '\0';
 VAR_10 = FUNC_7(VAR_8, VAR_5->uio_resid, VAR_5);
 if (VAR_10) {
  FUNC_0(VAR_8, VAR_1);
  return (VAR_10);
 }
 VAR_10 = FUNC_1(VAR_8, &VAR_9, &VAR_11);
 FUNC_0(VAR_8, VAR_1);
 if (VAR_10)
  return (VAR_10);
 FUNC_4(&VAR_3);
 VAR_7 = VAR_4->si_drv1;
 if (VAR_7 != ((void*)0))
  VAR_10 = FUNC_2(VAR_7, &VAR_9, VAR_11);
 FUNC_5(&VAR_3);
 if (VAR_9 != ((void*)0))
  FUNC_6(VAR_9);
 return (VAR_10);
}
