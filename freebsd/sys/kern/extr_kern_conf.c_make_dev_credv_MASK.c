
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int uid_t ;
struct ucred {int dummy; } ;
struct make_dev_args {int mda_flags; int mda_mode; int mda_unit; int mda_gid; int mda_uid; struct ucred* mda_cr; struct cdevsw* mda_devsw; } ;
struct cdevsw {int dummy; } ;
struct cdev {int dummy; } ;
typedef int gid_t ;


 int FUNC_0 (struct make_dev_args*) ;
 int FUNC_1 (struct make_dev_args*,struct cdev**,char const*,int ) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, struct cdev **VAR_1, struct cdevsw *VAR_2, int VAR_3,
    struct ucred *VAR_4, uid_t VAR_5, gid_t VAR_6, int VAR_7, const char *VAR_8,
    va_list VAR_9)
{
 struct make_dev_args VAR_10;

 FUNC_0(&VAR_10);
 VAR_10.mda_flags = VAR_0;
 VAR_10.mda_devsw = VAR_2;
 VAR_10.mda_cr = VAR_4;
 VAR_10.mda_uid = VAR_5;
 VAR_10.mda_gid = VAR_6;
 VAR_10.mda_mode = VAR_7;
 VAR_10.mda_unit = VAR_3;
 return (FUNC_1(&VAR_10, VAR_1, VAR_8, VAR_9));
}
