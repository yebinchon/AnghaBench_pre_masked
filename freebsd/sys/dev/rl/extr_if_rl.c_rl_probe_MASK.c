
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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rl_type*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 struct rl_type* VAR_4 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5)
{
 const struct rl_type *VAR_6;
 uint16_t VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(VAR_5);
 VAR_7 = FUNC_2(VAR_5);
 VAR_8 = FUNC_3(VAR_5);

 if (VAR_9 == VAR_3 && VAR_7 == VAR_2) {
  if (VAR_8 == 0x20) {

   return (VAR_1);
  }
 }
 VAR_6 = VAR_4;
 for (VAR_10 = 0; VAR_10 < FUNC_1(VAR_4); VAR_10++, VAR_6++) {
  if (VAR_9 == VAR_6->rl_vid && VAR_7 == VAR_6->rl_did) {
   FUNC_0(VAR_5, VAR_6->rl_name);
   return (VAR_0);
  }
 }

 return (VAR_1);
}
