
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
struct make_dev_args {int mda_size; int mda_flags; int mda_mode; int mda_gid; int mda_uid; int * mda_cr; TYPE_1__* mda_devsw; } ;
struct cdev {int si_flags; int si_mode; int si_gid; int si_uid; int si_cred; int si_name; } ;
typedef int args ;
struct TYPE_2__ {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct cdev*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct make_dev_args*,struct make_dev_args*,int) ;
 int FUNC_3 (struct make_dev_args*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct cdev*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct cdev*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 struct cdev* FUNC_11 (int) ;
 int FUNC_12 (struct cdev*) ;
 int FUNC_13 (struct cdev*) ;
 int VAR_9 ;
 int FUNC_14 (struct cdev*) ;
 struct cdev* FUNC_15 (struct make_dev_args*,struct cdev*) ;
 int FUNC_16 (struct cdev*,int) ;
 int FUNC_17 (char*,int,int ) ;
 int FUNC_18 (TYPE_1__*,int) ;
 int FUNC_19 (struct cdev*,char const*,int ) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_20(struct make_dev_args *VAR_11, struct cdev **VAR_12,
    const char *VAR_13, va_list VAR_14)
{
 struct cdev *VAR_15, *VAR_16;
 struct make_dev_args VAR_17;
 int VAR_18;

 FUNC_3(&VAR_17, sizeof(VAR_17));
 if (sizeof(VAR_17) < VAR_11->mda_size)
  return (VAR_0);
 FUNC_2(VAR_11, &VAR_17, VAR_11->mda_size);
 FUNC_0((VAR_17.mda_flags & VAR_6) == 0 ||
     (VAR_17.mda_flags & VAR_4) == 0,
     ("make_dev_sv: both WAITOK and NOWAIT specified"));
 VAR_16 = FUNC_11(VAR_17.mda_flags);
 if (VAR_16 == ((void*)0))
  return (VAR_1);
 FUNC_7();
 VAR_18 = FUNC_18(VAR_17.mda_devsw, VAR_17.mda_flags);
 if (VAR_18 != 0) {
  FUNC_9();
  FUNC_13(VAR_16);
  return (VAR_18);
 }
 VAR_15 = FUNC_15(&VAR_17, VAR_16);
 if ((VAR_15->si_flags & VAR_8) == 0) {
  VAR_18 = FUNC_19(VAR_15, VAR_13, VAR_14);
  if (VAR_18 != 0) {
   if ((VAR_17.mda_flags & VAR_2) == 0) {
    FUNC_17(
   "make_dev_sv: bad si_name (error=%d, si_name=%s)",
        VAR_18, VAR_15->si_name);
   }
   if (VAR_15 == VAR_16) {
    FUNC_1(VAR_15, VAR_10);
    FUNC_9();
    FUNC_13(VAR_15);
   } else
    FUNC_9();
   return (VAR_18);
  }
 }
 if ((VAR_17.mda_flags & VAR_5) != 0)
  FUNC_8(VAR_15);
 if ((VAR_17.mda_flags & VAR_3) != 0)
  VAR_15->si_flags |= VAR_7;
 FUNC_0(!(VAR_15->si_flags & VAR_8),
     ("make_dev() by driver %s on pre-existing device (min=%x, name=%s)",
     VAR_17.mda_devsw->d_name, FUNC_6(VAR_15), FUNC_14(VAR_15)));
 VAR_15->si_flags |= VAR_8;
 if (VAR_17.mda_cr != ((void*)0))
  VAR_15->si_cred = FUNC_5(VAR_17.mda_cr);
 VAR_15->si_uid = VAR_17.mda_uid;
 VAR_15->si_gid = VAR_17.mda_gid;
 VAR_15->si_mode = VAR_17.mda_mode;

 FUNC_12(VAR_15);
 FUNC_4(VAR_9);
 FUNC_10();

 FUNC_16(VAR_15, VAR_17.mda_flags);

 *VAR_12 = VAR_15;
 return (0);
}
