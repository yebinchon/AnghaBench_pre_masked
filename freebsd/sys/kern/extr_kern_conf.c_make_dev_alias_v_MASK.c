
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct cdev {int si_flags; int si_name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cdev*,struct cdev*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct cdev* FUNC_5 (int) ;
 int FUNC_6 (struct cdev*) ;
 int FUNC_7 (struct cdev*) ;
 int VAR_6 ;
 int FUNC_8 (struct cdev*,int) ;
 int FUNC_9 (char*,int,int ) ;
 int FUNC_10 (struct cdev*,char const*,int ) ;

__attribute__((used)) static int
FUNC_11(int VAR_7, struct cdev **VAR_8, struct cdev *VAR_9,
    const char *VAR_10, va_list VAR_11)
{
 struct cdev *VAR_12;
 int VAR_13;

 FUNC_0(VAR_9 != ((void*)0), ("make_dev_alias_v: pdev is NULL"));
 FUNC_0((VAR_7 & VAR_3) == 0 || (VAR_7 & VAR_2) == 0,
     ("make_dev_alias_v: both WAITOK and NOWAIT specified"));
 FUNC_0((VAR_7 & ~(VAR_3 | VAR_2 |
     VAR_1)) == 0,
     ("make_dev_alias_v: invalid flags specified (flags=%02x)", VAR_7));

 VAR_12 = FUNC_5(VAR_7);
 if (VAR_12 == ((void*)0))
  return (VAR_0);
 FUNC_3();
 VAR_12->si_flags |= VAR_4;
 VAR_13 = FUNC_10(VAR_12, VAR_10, VAR_11);
 if (VAR_13 != 0) {
  if ((VAR_7 & VAR_1) == 0) {
   FUNC_9("make_dev_alias_v: bad si_name "
       "(error=%d, si_name=%s)", VAR_13, VAR_12->si_name);
  }
  FUNC_4();
  FUNC_7(VAR_12);
  return (VAR_13);
 }
 VAR_12->si_flags |= VAR_5;
 FUNC_6(VAR_12);
 FUNC_2(VAR_9, VAR_12);
 FUNC_1(VAR_6);
 FUNC_4();

 FUNC_8(VAR_12, VAR_7);
 *VAR_8 = VAR_12;

 return (0);
}
