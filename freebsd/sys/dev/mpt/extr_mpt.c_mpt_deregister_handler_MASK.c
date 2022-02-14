
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
 size_t FUNC_0 (int ) ;

 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mpt_softc*,char*,int) ;
 int * VAR_4 ;

int
FUNC_2(struct mpt_softc *VAR_5, mpt_handler_type VAR_6,
         mpt_handler_t VAR_7, uint32_t VAR_8)
{

 switch (VAR_6) {
 case 128:
 {
  u_int VAR_9;

  VAR_9 = FUNC_0(VAR_8);
  if (VAR_9 >= VAR_2
   || VAR_4[VAR_9] != VAR_7.reply_handler)
   return (VAR_1);
  VAR_4[VAR_9] = VAR_3;
  break;
 }
 default:
  FUNC_1(VAR_5, "mpt_deregister_handler unknown type %d\n", VAR_6);
  return (VAR_0);
 }
 return (0);
}
