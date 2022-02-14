
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rfcomm_session {scalar_t__ state; } ;
struct rfcomm_dlc {scalar_t__ state; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,struct rfcomm_session*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rfcomm_dlc*,int) ;
 struct rfcomm_dlc* FUNC_2 (struct rfcomm_session*,scalar_t__) ;
 int FUNC_3 (struct rfcomm_session*,scalar_t__) ;
 int FUNC_4 (struct rfcomm_session*,scalar_t__) ;
 int FUNC_5 (struct rfcomm_session*,int) ;

__attribute__((used)) static int FUNC_6(struct rfcomm_session *VAR_5, u8 VAR_6)
{
 int VAR_7 = 0;

 FUNC_0("session %p state %ld dlci %d", VAR_5, VAR_5->state, VAR_6);

 if (VAR_6) {
  struct rfcomm_dlc *VAR_8 = FUNC_2(VAR_5, VAR_6);
  if (VAR_8) {
   FUNC_4(VAR_5, VAR_6);

   if (VAR_8->state == VAR_2 || VAR_8->state == VAR_1)
    VAR_7 = VAR_3;
   else
    VAR_7 = VAR_4;

   VAR_8->state = VAR_0;
   FUNC_1(VAR_8, VAR_7);
  } else
   FUNC_3(VAR_5, VAR_6);

 } else {
  FUNC_4(VAR_5, 0);

  if (VAR_5->state == VAR_2)
   VAR_7 = VAR_3;
  else
   VAR_7 = VAR_4;

  VAR_5->state = VAR_0;
  FUNC_5(VAR_5, VAR_7);
 }

 return 0;
}
