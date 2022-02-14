
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct bool_flags {unsigned int flag; char* name; char* noname; } ;
struct TYPE_2__ {unsigned int pr_allow; int pr_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 struct sysctl_oid* FUNC_0 (int *,int ,int ,char const*,int ,int ,char const*) ;
 int FUNC_1 (int *,int ,int ,char const*,int,int *,unsigned int,int ,char*,char const*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 scalar_t__ FUNC_3 (char**,int ,char*,char const*,...) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct bool_flags*) ;
 struct bool_flags* VAR_7 ;
 TYPE_1__ VAR_8 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 struct sysctl_oid VAR_9 ;
 struct sysctl_oid VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

unsigned
FUNC_9(const char *VAR_13, const char *VAR_14, const char *VAR_15,
    const char *VAR_16)
{
 struct bool_flags *VAR_17;
 struct sysctl_oid *VAR_18;
 char *VAR_19, *VAR_20, *VAR_21;

 char *VAR_22;

 unsigned VAR_23;

 if (VAR_13
     ? FUNC_3(&VAR_19, VAR_3, "allow.%s.%s", VAR_13, VAR_14)
  < 0 ||
       FUNC_3(&VAR_20, VAR_3, "allow.%s.no%s", VAR_13, VAR_14)
  < 0
     : FUNC_3(&VAR_19, VAR_3, "allow.%s", VAR_14) < 0 ||
       FUNC_3(&VAR_20, VAR_3, "allow.no%s", VAR_14) < 0) {
  FUNC_4(VAR_19, VAR_3);
  return 0;
 }





 FUNC_5(&VAR_8);
 for (VAR_17 = VAR_7;
      VAR_17 < VAR_7 + FUNC_7(VAR_7) && VAR_17->flag != 0;
      VAR_17++) {
  if (FUNC_8(VAR_17->name, VAR_19) == 0) {
   VAR_23 = VAR_17->flag;
   goto no_add;
  }
 }
 for (VAR_23 = 1;; VAR_23 <<= 1) {
  if (VAR_23 == 0)
   goto no_add;
  if (VAR_23 & VAR_6)
   continue;
  if ((VAR_8 & VAR_23) == 0)
   break;
 }






 for (VAR_17 = VAR_7; VAR_17->flag != 0; VAR_17++)
  if (VAR_17 == VAR_7 + FUNC_7(VAR_7)) {

   VAR_23 = 0;
   goto no_add;
  }
 VAR_8 |= VAR_23;
 VAR_17->name = VAR_19;
 VAR_17->noname = VAR_20;
 VAR_17->flag = VAR_23;
 FUNC_6(&VAR_8);





 VAR_18 = VAR_13
     ? FUNC_0(((void*)0),
    FUNC_2(&VAR_10),
    VAR_5, VAR_13, 0, 0, VAR_15)
     : &VAR_10;
 (void)FUNC_1(((void*)0), FUNC_2(VAR_18), VAR_5,
     VAR_14, VAR_2 | VAR_1 | VAR_0,
     ((void*)0), 0, VAR_12, "B", VAR_16);
 if ((VAR_13
      ? FUNC_3(&VAR_21, VAR_4, "%s_%s_allowed", VAR_13, VAR_14)
      : FUNC_3(&VAR_21, VAR_4, "%s_allowed", VAR_14)) >= 0) {

  (void)FUNC_3(&VAR_22, VAR_4, "%s (deprecated)",
      VAR_16);

  (void)FUNC_1(((void*)0),
      FUNC_2(&VAR_9), VAR_5, VAR_21,
      VAR_2 | VAR_1 | VAR_0, ((void*)0), VAR_23,
      VAR_11, "I", VAR_22);

  FUNC_4(VAR_22, VAR_4);

  FUNC_4(VAR_21, VAR_4);
 }
 return VAR_23;

 no_add:
 FUNC_6(&VAR_8);
 FUNC_4(VAR_19, VAR_3);
 FUNC_4(VAR_20, VAR_3);
 return VAR_23;
}
