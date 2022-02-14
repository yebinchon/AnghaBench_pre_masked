
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {char const* si_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct cdev*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,struct cdev**,struct cdev*,char*,char*) ;
 char* FUNC_3 (int,int ,int) ;
 int FUNC_4 (char*,char const*,char const*,char const*) ;
 int FUNC_5 (char*,char*,char const*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char*,char const*,int) ;

int
FUNC_9(int VAR_9, struct cdev **VAR_10, struct cdev *VAR_11,
    struct cdev *VAR_12, const char *VAR_13)
{
 char *VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;

 *VAR_10 = ((void*)0);
 VAR_14 = ((void*)0);
 VAR_15 = FUNC_7(VAR_13);
 VAR_20 = VAR_0;
 if (VAR_15 == 0)
  goto out;

 if (FUNC_8("id1,", VAR_13, 4) == 0) {
  VAR_13 += 4;
  VAR_15 -= 4;
  if (VAR_15 == 0)
   goto out;
 }

 VAR_16 = VAR_7 - VAR_15 - 1;
 VAR_17 = FUNC_7(VAR_11->si_name);
 if (VAR_16 < VAR_17) {
  if (VAR_8)
   FUNC_4("WARNING: Unable to alias %s "
       "to %s/%s - path too long\n",
       VAR_11->si_name, VAR_13, VAR_11->si_name);
  VAR_20 = VAR_1;
  goto out;
 }

 VAR_19 = (VAR_9 & VAR_3) ? VAR_5 : VAR_6;
 VAR_18 = VAR_15 + 1 + VAR_17 + 1;
 VAR_14 = FUNC_3(VAR_18, VAR_4, VAR_19);
 if (VAR_14 == ((void*)0)) {
  VAR_20 = VAR_2;
  goto out;
 }

 FUNC_5(VAR_14, "%s/%s", VAR_13, VAR_11->si_name);
 if (VAR_12 != ((void*)0) && FUNC_6(VAR_12->si_name, VAR_14) == 0) {

  *VAR_10 = VAR_12;
  VAR_12 = ((void*)0);
  VAR_20 = 0;
 } else {
  VAR_20 = FUNC_2(VAR_9, VAR_10, VAR_11, "%s", VAR_14);
 }
out:
 if (VAR_12 != ((void*)0))
  FUNC_0(VAR_12);
 if (VAR_14 != ((void*)0))
  FUNC_1(VAR_14, VAR_4);
 return (VAR_20);
}
