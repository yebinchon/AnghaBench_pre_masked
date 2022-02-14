
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hidp_session {int ctrl_transmit; } ;


 int FUNC_0 (char*,struct hidp_session*,unsigned char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 unsigned char* FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct hidp_session *VAR_2,
   unsigned char VAR_3, unsigned char *VAR_4, int VAR_5)
{
 struct sk_buff *VAR_6;

 FUNC_0("session %p data %p size %d", VAR_2, VAR_4, VAR_5);

 if (!(VAR_6 = FUNC_2(VAR_5 + 1, VAR_1))) {
  FUNC_1("Can't allocate memory for new frame");
  return -VAR_0;
 }

 *FUNC_4(VAR_6, 1) = VAR_3;
 if (VAR_4 && VAR_5 > 0)
  FUNC_3(FUNC_4(VAR_6, VAR_5), VAR_4, VAR_5);

 FUNC_5(&VAR_2->ctrl_transmit, VAR_6);

 return 0;
}
