
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct make_dev_args {int mda_mode; int mda_gid; int mda_uid; int * mda_devsw; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct make_dev_args*) ;
 scalar_t__ FUNC_2 (struct make_dev_args*,struct cdev**,char*) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (char*,char*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_5(const void *VAR_8)
{
 struct make_dev_args VAR_9;
 struct cdev *VAR_10;

 FUNC_3(&VAR_5, "kcov lock", ((void*)0), VAR_2);

 FUNC_1(&VAR_9);
 VAR_9.mda_devsw = &VAR_4;
 VAR_9.mda_uid = VAR_3;
 VAR_9.mda_gid = VAR_1;
 VAR_9.mda_mode = 0600;
 if (FUNC_2(&VAR_9, &VAR_10, "kcov") != 0) {
  FUNC_4("%s", "Failed to create kcov device");
  return;
 }

 FUNC_0(VAR_7, VAR_6, ((void*)0),
     VAR_0);
}
