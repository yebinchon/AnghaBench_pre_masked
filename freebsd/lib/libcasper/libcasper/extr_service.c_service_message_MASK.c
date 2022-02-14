
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct service_connection {int dummy; } ;
struct service {int s_flags; int (* s_limit ) (int *,int *) ;int (* s_command ) (char const*,int *,int *,int *) ;} ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int const*) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int) ;
 int * FUNC_9 (int *,char*) ;
 int FUNC_10 (struct service*,struct service_connection*) ;
 int FUNC_11 (struct service_connection*) ;
 int * FUNC_12 (struct service_connection*) ;
 int FUNC_13 (struct service*,struct service_connection*) ;
 int FUNC_14 (struct service_connection*,int *) ;
 scalar_t__ FUNC_15 (char const*,char*) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (char const*,int *,int *,int *) ;

void
FUNC_18(struct service *VAR_5, struct service_connection *VAR_6)
{
 nvlist_t *VAR_7, *VAR_8;
 const char *VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = 0;
 if ((VAR_5->s_flags & VAR_0) != 0)
  VAR_11 = VAR_3;

 VAR_7 = FUNC_0(FUNC_11(VAR_6));
 if (VAR_7 == ((void*)0)) {
  FUNC_13(VAR_5, VAR_6);
  return;
 }

 VAR_10 = VAR_1;
 VAR_8 = FUNC_5(VAR_11);

 VAR_9 = FUNC_7(VAR_7, "cmd");
 if (FUNC_15(VAR_9, "limit_set") == 0) {
  nvlist_t *VAR_12;

  VAR_12 = FUNC_9(VAR_7, "limits");
  if (VAR_5->s_limit == ((void*)0)) {
   VAR_10 = VAR_2;
  } else {
   VAR_10 = VAR_5->s_limit(
       FUNC_12(VAR_6), VAR_12);
  }
  if (VAR_10 == 0) {
   FUNC_14(VAR_6, VAR_12);

  } else {
   FUNC_6(VAR_12);
  }
 } else if (FUNC_15(VAR_9, "limit_get") == 0) {
  const nvlist_t *VAR_13;

  VAR_13 = FUNC_12(VAR_6);
  if (VAR_13 != ((void*)0))
   FUNC_4(VAR_8, "limits", VAR_13);
  else
   FUNC_2(VAR_8, "limits");
  VAR_10 = 0;
 } else if (FUNC_15(VAR_9, "clone") == 0) {
  int VAR_14;

  VAR_14 = FUNC_10(VAR_5, VAR_6);
  if (VAR_14 == -1) {
   VAR_10 = VAR_4;
  } else {
   FUNC_8(VAR_8, "sock", VAR_14);
   VAR_10 = 0;
  }
 } else {
  VAR_10 = VAR_5->s_command(VAR_9,
      FUNC_12(VAR_6), VAR_7, VAR_8);
 }

 FUNC_6(VAR_7);
 FUNC_3(VAR_8, "error", (uint64_t)VAR_10);

 if (FUNC_1(FUNC_11(VAR_6), VAR_8) == -1)
  FUNC_13(VAR_5, VAR_6);

 FUNC_6(VAR_8);
}
