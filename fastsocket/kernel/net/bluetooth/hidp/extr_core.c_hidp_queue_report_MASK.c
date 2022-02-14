
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hidp_session {int intr_transmit; int hid; } ;


 int FUNC_0 (char*,struct hidp_session*,int ,unsigned char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (struct hidp_session*) ;
 int FUNC_4 (int*,unsigned char*,int) ;
 int* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct hidp_session *VAR_2,
    unsigned char *VAR_3, int VAR_4)
{
 struct sk_buff *VAR_5;

 FUNC_0("session %p hid %p data %p size %d", VAR_2, VAR_2->hid, VAR_3, VAR_4);

 if (!(VAR_5 = FUNC_2(VAR_4 + 1, VAR_1))) {
  FUNC_1("Can't allocate memory for new frame");
  return -VAR_0;
 }

 *FUNC_5(VAR_5, 1) = 0xa2;
 if (VAR_4 > 0)
  FUNC_4(FUNC_5(VAR_5, VAR_4), VAR_3, VAR_4);

 FUNC_6(&VAR_2->intr_transmit, VAR_5);

 FUNC_3(VAR_2);

 return 0;
}
