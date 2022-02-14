
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int cb_recurse; int cb_doclones; char* cb_target; scalar_t__ cb_create; int cb_error; void* cb_first; int member_0; } ;
typedef TYPE_1__ rollback_cbdata_t ;
typedef int parentname ;
typedef void* boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,TYPE_1__*) ;
 int FUNC_9 (int *,void*,int ,TYPE_1__*,scalar_t__,int ) ;
 int * FUNC_10 (int ,char*,int ) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int *,void*) ;

__attribute__((used)) static int
FUNC_13(int VAR_11, char **VAR_12)
{
 int VAR_13 = 0;
 int VAR_14;
 boolean_t VAR_15 = VAR_0;
 rollback_cbdata_t VAR_16 = { 0 };
 zfs_handle_t *VAR_17, *VAR_18;
 char VAR_19[VAR_2];
 char *VAR_20;
 uint64_t VAR_21 = 0;


 while ((VAR_14 = FUNC_1(VAR_11, VAR_12, "rRf")) != -1) {
  switch (VAR_14) {
  case 'r':
   VAR_16.cb_recurse = 1;
   break;
  case 'R':
   VAR_16.cb_recurse = 1;
   VAR_16.cb_doclones = 1;
   break;
  case 'f':
   VAR_15 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_10, FUNC_2("invalid option '%c'\n"),
       VAR_8);
   FUNC_5(VAR_0);
  }
 }

 VAR_11 -= VAR_7;
 VAR_12 += VAR_7;


 if (VAR_11 < 1) {
  (void) FUNC_0(VAR_10, "%s", FUNC_2("missing dataset argument\n"));
  FUNC_5(VAR_0);
 }
 if (VAR_11 > 1) {
  (void) FUNC_0(VAR_10, "%s", FUNC_2("too many arguments\n"));
  FUNC_5(VAR_0);
 }


 if ((VAR_18 = FUNC_10(VAR_6, VAR_12[0], VAR_5)) == ((void*)0))
  return (1);


 (void) FUNC_3(VAR_19, VAR_12[0], sizeof (VAR_19));
 FUNC_6((VAR_20 = FUNC_4(VAR_19, '@')) != ((void*)0));
 *VAR_20 = '\0';
 if ((VAR_17 = FUNC_10(VAR_6, VAR_19, VAR_4)) == ((void*)0)) {
  FUNC_7(VAR_18);
  return (1);
 }





 VAR_16.cb_target = VAR_12[0];
 VAR_16.cb_create = FUNC_11(VAR_18, VAR_3);
 VAR_16.cb_first = VAR_1;
 VAR_16.cb_error = 0;

 if (VAR_16.cb_create > 0)
  VAR_21 = VAR_16.cb_create;

 if ((VAR_13 = FUNC_9(VAR_17, VAR_0, VAR_9, &VAR_16,
     VAR_21, 0)) != 0)
  goto out;
 if ((VAR_13 = FUNC_8(VAR_17, VAR_9, &VAR_16)) != 0)
  goto out;

 if ((VAR_13 = VAR_16.cb_error) != 0)
  goto out;




 VAR_13 = FUNC_12(VAR_17, VAR_18, VAR_15);

out:
 FUNC_7(VAR_18);
 FUNC_7(VAR_17);

 if (VAR_13 == 0)
  return (0);
 else
  return (1);
}
