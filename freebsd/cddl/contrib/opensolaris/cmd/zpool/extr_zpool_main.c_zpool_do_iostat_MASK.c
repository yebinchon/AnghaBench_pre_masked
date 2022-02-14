
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zpool_list_t ;
struct TYPE_5__ {int cb_iteration; scalar_t__ cb_namewidth; scalar_t__ cb_verbose; int * cb_list; } ;
typedef TYPE_1__ iostat_cbdata_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int*,char**,unsigned long*,unsigned long*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char**,char*) ;
 char* FUNC_5 (char*) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int,char**,int *,int*) ;
 int FUNC_9 (int *,scalar_t__,int ,TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int VAR_7 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (char*) ;
 int VAR_8 ;
 int FUNC_15 (unsigned long) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_16 (scalar_t__) ;

int
FUNC_17(int VAR_12, char **VAR_13)
{
 int VAR_14;
 int VAR_15;
 int VAR_16;
 unsigned long VAR_17 = 0, VAR_18 = 0;
 zpool_list_t *VAR_19;
 boolean_t VAR_20 = VAR_0;
 iostat_cbdata_t VAR_21;


 while ((VAR_14 = FUNC_4(VAR_12, VAR_13, "T:v")) != -1) {
  switch (VAR_14) {
  case 'T':
   FUNC_3(*VAR_4);
   break;
  case 'v':
   VAR_20 = VAR_1;
   break;
  case '?':
   (void) FUNC_1(VAR_9, FUNC_5("invalid option '%c'\n"),
       VAR_6);
   FUNC_16(VAR_0);
  }
 }

 VAR_12 -= VAR_5;
 VAR_13 += VAR_5;

 FUNC_2(&VAR_12, VAR_13, &VAR_17, &VAR_18);




 VAR_15 = 0;
 if ((VAR_19 = FUNC_8(VAR_12, VAR_13, ((void*)0), &VAR_15)) == ((void*)0))
  return (1);

 if (FUNC_6(VAR_19) == 0 && VAR_12 != 0) {
  FUNC_7(VAR_19);
  return (1);
 }

 if (FUNC_6(VAR_19) == 0 && VAR_17 == 0) {
  FUNC_7(VAR_19);
  (void) FUNC_1(VAR_9, "%s", FUNC_5("no pools available\n"));
  return (1);
 }




 VAR_21.cb_list = VAR_19;
 VAR_21.cb_verbose = VAR_20;
 VAR_21.cb_iteration = 0;
 VAR_21.cb_namewidth = 0;

 for (;;) {
  FUNC_10(VAR_19);

  if ((VAR_16 = FUNC_6(VAR_19)) == 0)
   break;






  (void) FUNC_9(VAR_19, VAR_0, VAR_8, &VAR_21);





  VAR_21.cb_namewidth = 0;
  (void) FUNC_9(VAR_19, VAR_0, VAR_3, &VAR_21);

  if (VAR_11 != VAR_2)
   FUNC_13(VAR_11);




  if (++VAR_21.cb_iteration == 1 || VAR_20)
   FUNC_11(&VAR_21);

  (void) FUNC_9(VAR_19, VAR_0, VAR_7, &VAR_21);





  if (VAR_16 > 1 && !VAR_20)
   FUNC_12(&VAR_21);

  if (VAR_20)
   (void) FUNC_14("\n");





  (void) FUNC_0(VAR_10);

  if (VAR_17 == 0)
   break;

  if (VAR_18 != 0 && --VAR_18 == 0)
   break;

  (void) FUNC_15(VAR_17);
 }

 FUNC_7(VAR_19);

 return (VAR_15);
}
