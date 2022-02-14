
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct cmtp_session {struct sk_buff** reassembly; } ;


 int FUNC_0 (char*,struct cmtp_session*,unsigned char const*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,unsigned char const*,int) ;
 int FUNC_5 (struct sk_buff*,int ,int) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static inline void FUNC_7(struct cmtp_session *VAR_1, int VAR_2, const unsigned char *VAR_3, int VAR_4)
{
 struct sk_buff *VAR_5 = VAR_1->reassembly[VAR_2], *VAR_6;
 int VAR_7;

 FUNC_0("session %p buf %p count %d", VAR_1, VAR_3, VAR_4);

 VAR_7 = (VAR_5) ? VAR_5->len + VAR_4 : VAR_4;

 if (!(VAR_6 = FUNC_2(VAR_7, VAR_0))) {
  FUNC_1("Can't allocate memory for CAPI message");
  return;
 }

 if (VAR_5 && (VAR_5->len > 0))
  FUNC_5(VAR_5, FUNC_6(VAR_6, VAR_5->len), VAR_5->len);

 FUNC_4(FUNC_6(VAR_6, VAR_4), VAR_3, VAR_4);

 VAR_1->reassembly[VAR_2] = VAR_6;

 FUNC_3(VAR_5);
}
