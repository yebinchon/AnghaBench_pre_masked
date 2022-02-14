
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct tuntap_driver {int cdevsw; int clones; } ;
struct cdev {int dummy; } ;
typedef int devname ;


 int FUNC_0 (struct ucred*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int *,int*,struct cdev**,int ) ;
 int FUNC_4 (char*,int,int *) ;
 scalar_t__ FUNC_5 (struct ucred*,int ) ;
 int FUNC_6 (char*,int,char*,char*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (struct tuntap_driver*,int,struct ucred*,struct cdev**,char*) ;
 scalar_t__ VAR_6 ;
 struct tuntap_driver* FUNC_8 (int) ;
 scalar_t__ FUNC_9 (char*,int*,int*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_7, struct ucred *VAR_8, char *VAR_9, int VAR_10,
    struct cdev **VAR_11)
{
 char VAR_12[VAR_2 + 1];
 struct tuntap_driver *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 bool VAR_18;

 if (*VAR_11 != ((void*)0))
  return;

 VAR_17 = 0;
 FUNC_2(FUNC_0(VAR_8));
 if (FUNC_9(VAR_9, &VAR_16, &VAR_17) != 0)
  goto out;

 if (VAR_16 != -1 && VAR_16 > VAR_0)
  goto out;

 VAR_18 = FUNC_5(VAR_8, VAR_1) == 0;
 if ((VAR_17 & VAR_3) != 0) {

  VAR_18 = (VAR_18 || VAR_4) && VAR_5;
 } else {
  VAR_18 = VAR_18 && VAR_6;
 }





 if (!VAR_18)
  goto out;

 if (VAR_16 == -1)
  VAR_14 = 1;
 else
  VAR_14 = 0;

 VAR_13 = FUNC_8(VAR_17);
 if (VAR_13 == ((void*)0))
  goto out;


 VAR_15 = FUNC_3(&VAR_13->clones, &VAR_13->cdevsw, &VAR_16, VAR_11, 0);
 if (VAR_15) {
  if (VAR_14) {
   VAR_10 = FUNC_6(VAR_12, sizeof(VAR_12), "%s%d",
       VAR_9, VAR_16);
   VAR_9 = VAR_12;
  }

  VAR_15 = FUNC_7(VAR_13, VAR_16, VAR_8, VAR_11, VAR_9);
 }
 if (VAR_15 == 0)
  FUNC_4(VAR_9, VAR_10, ((void*)0));
out:
 FUNC_1();
}
