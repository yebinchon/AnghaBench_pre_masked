
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_func_state_params {int cmd; scalar_t__ ramrod_flags; } ;
struct ecore_func_sp_obj {int state; int next_state; scalar_t__ pending; } ;
struct bxe_softc {int dummy; } ;
typedef enum ecore_func_state { ____Placeholder_ecore_func_state } ecore_func_state ;
typedef enum ecore_func_cmd { ____Placeholder_ecore_func_cmd } ecore_func_cmd ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;



 int VAR_12 ;
 int FUNC_1 (struct bxe_softc*,char*,int,int,...) ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int,scalar_t__*) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_3(struct bxe_softc *VAR_15,
         struct ecore_func_sp_obj *VAR_16,
         struct ecore_func_state_params *VAR_17)
{
 enum ecore_func_state VAR_18 = VAR_16->state, VAR_19 = VAR_11;
 enum ecore_func_cmd VAR_20 = VAR_17->cmd;




 if (FUNC_2(VAR_14, &VAR_17->ramrod_flags)) {
  VAR_16->pending = 0;
  VAR_16->next_state = VAR_11;
 }




 if (VAR_16->pending)
  return VAR_0;

 switch (VAR_18) {
 case 130:
  if (VAR_20 == VAR_3)
   VAR_19 = 131;

  break;
 case 131:
  if (VAR_20 == VAR_6)
   VAR_19 = 129;

  else if (VAR_20 == VAR_4)
   VAR_19 = 130;

  break;
 case 129:
  if (VAR_20 == VAR_7)
   VAR_19 = 131;




  else if ((VAR_20 == VAR_1) &&
    (!FUNC_2(VAR_7, &VAR_16->pending)))
   VAR_19 = 129;

  else if ((VAR_20 == VAR_2) &&
    (!FUNC_2(VAR_7, &VAR_16->pending)))
   VAR_19 = 129;




  else if ((VAR_20 == VAR_8) &&
    (!FUNC_2(VAR_7, &VAR_16->pending)))
   VAR_19 = 129;

  else if ((VAR_20 == VAR_5) &&
    (!FUNC_2(VAR_7, &VAR_16->pending)))
   VAR_19 = 129;

  else if (VAR_20 == VAR_10)
   VAR_19 = 128;

  break;
 case 128:
  if ((VAR_20 == VAR_8) &&
      (!FUNC_2(VAR_7, &VAR_16->pending)))
   VAR_19 = 128;

  else if ((VAR_20 == VAR_5) &&
      (!FUNC_2(VAR_7, &VAR_16->pending)))
   VAR_19 = 128;

  else if (VAR_20 == VAR_9)
   VAR_19 = 129;

  break;
 default:
  FUNC_0("Unknown state: %d\n", VAR_18);
 }


 if (VAR_19 != VAR_11) {
  FUNC_1(VAR_15, "Good function state transition: %d(%d)->%d\n",
     VAR_18, VAR_20, VAR_19);
  VAR_16->next_state = VAR_19;
  return VAR_13;
 }

 FUNC_1(VAR_15, "Bad function state transition request: %d %d\n",
    VAR_18, VAR_20);

 return VAR_12;
}
