
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct recvbuf {int dummy; } ;
struct ctl_var {int flags; char* text; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long VAR_7 ;
 scalar_t__ FUNC_0 (char*,long*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ctl_var* FUNC_3 (int ,char**) ;
 int FUNC_4 () ;
 char* FUNC_5 (size_t) ;
 int VAR_8 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,int) ;
 scalar_t__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (char*) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_11(
 struct recvbuf *VAR_12,
 int VAR_13
 )
{
 const struct ctl_var *VAR_14;
 int VAR_15;
 char *VAR_16;
 long VAR_17;
 size_t VAR_18;
 char *VAR_19;
 const char *VAR_20;
 char *VAR_21;

 VAR_17 = 0;



 if (VAR_9 != 0) {
  FUNC_1(VAR_3);
  return;
 }




 VAR_10.status = FUNC_7(FUNC_4());





 while ((VAR_14 = FUNC_3(VAR_11, &VAR_16)) != ((void*)0)) {
  VAR_15 = 0;
  if (VAR_14->flags & VAR_6) {
   VAR_14 = FUNC_3(VAR_8, &VAR_16);
   if (VAR_14 != ((void*)0)) {
    if (VAR_14->flags & VAR_6) {
     FUNC_1(VAR_4);
     return;
    }
    VAR_15 = 1;
   } else {
    break;
   }
  }
  if (!(VAR_14->flags & VAR_0)) {
   FUNC_1(VAR_3);
   return;
  }



  if (VAR_16 == ((void*)0)) {
   FUNC_1(VAR_1);
   return;
  }
  if (!VAR_15) {
   if ( !(*VAR_16 && FUNC_0(VAR_16, &VAR_17))) {
    FUNC_1(VAR_1);
    return;
   }
   if ((VAR_17 & ~VAR_7) != 0) {
    FUNC_1(VAR_2);
    return;
   }
  }

  if (VAR_15) {
   VAR_18 = FUNC_10(VAR_14->text) + FUNC_10(VAR_16) + 2;
   VAR_19 = FUNC_5(VAR_18);
   VAR_21 = VAR_19;
   VAR_20 = VAR_14->text;
   while (*VAR_20 && *VAR_20 != '=')
    *VAR_21++ = *VAR_20++;
   *VAR_21++ = '=';
   FUNC_8(VAR_21, VAR_16, 1 + FUNC_10(VAR_16));
   FUNC_9(VAR_19, 1 + FUNC_10(VAR_19), VAR_14->flags);
   FUNC_6(VAR_19);
  } else {
   FUNC_1(VAR_5);
   return;
  }
 }
 FUNC_2(0);
}
