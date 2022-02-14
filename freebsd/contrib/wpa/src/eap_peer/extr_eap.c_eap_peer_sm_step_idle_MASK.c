
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {scalar_t__ decision; scalar_t__ methodState; scalar_t__ selectedMethod; scalar_t__ peap_done; scalar_t__ leap_done; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (struct eap_sm*,int ) ;
 scalar_t__ FUNC_2 (struct eap_sm*,int ) ;

__attribute__((used)) static void FUNC_3(struct eap_sm *VAR_14)
{





 if (FUNC_1(VAR_14, VAR_5))
  FUNC_0(VAR_2, VAR_12);
 else if ((FUNC_1(VAR_14, VAR_3) &&
    VAR_14->decision != VAR_0) ||
   (FUNC_2(VAR_14, VAR_6) == 0 &&
    VAR_14->decision == VAR_1))
  FUNC_0(VAR_2, VAR_13);
 else if (FUNC_1(VAR_14, VAR_4) ||
   (FUNC_2(VAR_14, VAR_6) == 0 &&
    VAR_14->decision != VAR_1) ||
   (FUNC_1(VAR_14, VAR_3) &&
    VAR_14->methodState != VAR_10 &&
    VAR_14->decision == VAR_0))
  FUNC_0(VAR_2, VAR_9);
 else if (VAR_14->selectedMethod == VAR_7 &&
   VAR_14->leap_done && VAR_14->decision != VAR_0 &&
   VAR_14->methodState == VAR_11)
  FUNC_0(VAR_2, VAR_13);
 else if (VAR_14->selectedMethod == VAR_8 &&
   VAR_14->peap_done && VAR_14->decision != VAR_0 &&
   VAR_14->methodState == VAR_11)
  FUNC_0(VAR_2, VAR_13);
}
