
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidp_session {int terminate; int intr_transmit; int ctrl_transmit; } ;


 int FUNC_0 (char*,struct hidp_session*,unsigned char) ;
 unsigned char VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hidp_session*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hidp_session *VAR_1,
     unsigned char VAR_2)
{
 FUNC_0("session %p param 0x%02x", VAR_1, VAR_2);

 if (VAR_2 == VAR_0) {

  FUNC_3(&VAR_1->ctrl_transmit);
  FUNC_3(&VAR_1->intr_transmit);


  FUNC_1(&VAR_1->terminate);
  FUNC_2(VAR_1);
 }
}
