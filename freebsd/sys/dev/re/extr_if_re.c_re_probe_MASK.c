
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct rl_type {scalar_t__ rl_vid; scalar_t__ rl_did; int rl_name; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rl_type*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 struct rl_type* VAR_7 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_8)
{
 const struct rl_type *VAR_9;
 uint16_t VAR_10, VAR_11;
 uint16_t VAR_12, VAR_13;
 int VAR_14;

 VAR_11 = FUNC_5(VAR_8);
 VAR_10 = FUNC_2(VAR_8);
 VAR_12 = FUNC_3(VAR_8);
 VAR_13 = FUNC_4(VAR_8);

 if (VAR_11 == VAR_4 && VAR_10 == VAR_2) {
  if (VAR_13 != VAR_3) {




   return (VAR_1);
  }
 }

 if (VAR_11 == VAR_6 && VAR_10 == VAR_5) {
  if (VAR_12 != 0x20) {

   return (VAR_1);
  }
 }

 VAR_9 = VAR_7;
 for (VAR_14 = 0; VAR_14 < FUNC_1(VAR_7); VAR_14++, VAR_9++) {
  if (VAR_11 == VAR_9->rl_vid && VAR_10 == VAR_9->rl_did) {
   FUNC_0(VAR_8, VAR_9->rl_name);
   return (VAR_0);
  }
 }

 return (VAR_1);
}
