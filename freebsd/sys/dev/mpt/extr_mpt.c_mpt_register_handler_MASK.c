
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t u_int ;
struct mpt_softc {int dummy; } ;
typedef int mpt_handler_type ;
struct TYPE_3__ {int reply_handler; } ;
typedef TYPE_1__ mpt_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 size_t VAR_2 ;

 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mpt_softc*,char*,int) ;
 int * VAR_5 ;

int
FUNC_2(struct mpt_softc *VAR_6, mpt_handler_type VAR_7,
       mpt_handler_t VAR_8, uint32_t *VAR_9)
{

 switch (VAR_7) {
 case 128:
 {
  u_int VAR_10;
  u_int VAR_11;

  if (VAR_9 == ((void*)0))
   return (VAR_0);

  VAR_11 = VAR_2;
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {





   if (VAR_5[VAR_10] == VAR_8.reply_handler) {
    *VAR_9 = FUNC_0(VAR_10);
    return (0);
   }
   if (VAR_11 == VAR_2 &&
       (VAR_5[VAR_10]
     == VAR_4))
    VAR_11 = VAR_10;
  }
  if (VAR_11 == VAR_2) {
   return (VAR_1);
  }
  VAR_5[VAR_11] = VAR_8.reply_handler;
  *VAR_9 = FUNC_0(VAR_11);
  break;
 }
 default:
  FUNC_1(VAR_6, "mpt_register_handler unknown type %d\n", VAR_7);
  return (VAR_0);
 }
 return (0);
}
