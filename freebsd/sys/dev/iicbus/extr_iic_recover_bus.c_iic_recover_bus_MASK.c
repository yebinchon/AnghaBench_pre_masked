
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct iicrb_pin_access {int ctx; int (* setsda ) (int ,int) ;int (* setscl ) (int ,int) ;scalar_t__ (* getsda ) (int ) ;scalar_t__ (* getscl ) (int ) ;} ;


 int FUNC_0 (int const) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;

int
FUNC_9(struct iicrb_pin_access *VAR_1)
{
 const u_int VAR_2 = 40000;
 const u_int VAR_3 = 500;
 int VAR_4;




 VAR_1->setsda(VAR_1->ctx, 1);
 VAR_1->setscl(VAR_1->ctx, 1);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += VAR_3) {
  if (VAR_1->getscl(VAR_1->ctx))
   break;
  FUNC_0(VAR_3);
 }
 if (VAR_4 >= VAR_2)
  return (VAR_0);
 for (VAR_4 = 0; ; ++VAR_4) {
  if (VAR_1->getsda(VAR_1->ctx))
   break;
  if (VAR_4 == 9)
   return (VAR_0);
  VAR_1->setscl(VAR_1->ctx, 0);
  FUNC_0(5);
  VAR_1->setscl(VAR_1->ctx, 1);
  FUNC_0(5);
 }
 VAR_1->setsda(VAR_1->ctx, 0);
 FUNC_0(5);
 VAR_1->setsda(VAR_1->ctx, 1);
 FUNC_0(5);

 return (0);
}
