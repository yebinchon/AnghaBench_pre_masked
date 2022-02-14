
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct snddev_info {struct cdev* mixer_dev; } ;
struct cdev {int dummy; } ;


 scalar_t__ FUNC_0 (struct snddev_info*) ;
 int FUNC_1 (struct cdev*) ;
 struct snddev_info* FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2,
    struct ucred *VAR_3,
    char *VAR_4, int VAR_5, struct cdev **VAR_6)
{
 struct snddev_info *VAR_7;

 if (*VAR_6 != ((void*)0))
  return;
 if (FUNC_3(VAR_4, "mixer") == 0) {
  VAR_7 = FUNC_2(VAR_0, VAR_1);
  if (FUNC_0(VAR_7) && VAR_7->mixer_dev != ((void*)0)) {
   *VAR_6 = VAR_7->mixer_dev;
   FUNC_1(*VAR_6);
  }
 }
}
