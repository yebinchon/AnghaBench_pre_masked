
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptsstat {int devname; int dev; } ;
struct procstat {int dummy; } ;
struct freebsd12_ptsstat {int devname; int dev; } ;
struct filestat {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct procstat*,struct filestat*,struct ptsstat*,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

int
FUNC_4(struct procstat *VAR_1,
    struct filestat *VAR_2, struct freebsd12_ptsstat *VAR_3, char *VAR_4)
{
 struct ptsstat VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_5, VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_3->dev = VAR_5.dev;
 if (FUNC_3(VAR_5.devname) >= sizeof(VAR_3->devname))
  FUNC_2(VAR_3->devname, VAR_0);
 else
  FUNC_0(VAR_3->devname, VAR_5.devname,
      sizeof(VAR_3->devname));
 return (0);
}
