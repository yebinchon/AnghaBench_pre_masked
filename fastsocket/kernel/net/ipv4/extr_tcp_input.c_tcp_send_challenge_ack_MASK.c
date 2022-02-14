
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sock {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sock*) ;
 unsigned int VAR_3 ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_4)
{

 static u32 VAR_5;
 static unsigned int VAR_6;
 u32 VAR_7 = VAR_2 / VAR_0;

 if (VAR_7 != VAR_5) {
  VAR_5 = VAR_7;
  VAR_6 = 0;
 }
 if (++VAR_6 <= VAR_3) {
  FUNC_0(FUNC_1(VAR_4), VAR_1);
  FUNC_2(VAR_4);
 }
}
