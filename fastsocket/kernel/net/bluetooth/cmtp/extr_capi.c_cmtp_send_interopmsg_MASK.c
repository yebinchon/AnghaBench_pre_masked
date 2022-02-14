
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cmtp_session {int dummy; } ;
typedef int __u8 ;
typedef int __u16 ;


 int FUNC_0 (char*,struct cmtp_session*,int,int,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned char*,int,int) ;
 int FUNC_4 (unsigned char*,int,int) ;
 int FUNC_5 (struct cmtp_session*,struct sk_buff*) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;
 unsigned char* FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_8(struct cmtp_session *VAR_3,
     __u8 VAR_4, __u16 VAR_5, __u16 VAR_6,
     __u16 VAR_7, unsigned char *VAR_8, int VAR_9)
{
 struct sk_buff *VAR_10;
 unsigned char *VAR_11;

 FUNC_0("session %p subcmd 0x%02x appl %d msgnum %d", VAR_3, VAR_4, VAR_5, VAR_6);

 if (!(VAR_10 = FUNC_2(VAR_1 + 6 + VAR_9, VAR_2))) {
  FUNC_1("Can't allocate memory for interoperability packet");
  return;
 }

 VAR_11 = FUNC_7(VAR_10, VAR_1 + 6 + VAR_9);

 FUNC_3(VAR_11, 0, VAR_1 + 6 + VAR_9);
 FUNC_3(VAR_11, 2, VAR_5);
 FUNC_4 (VAR_11, 4, VAR_0);
 FUNC_4 (VAR_11, 5, VAR_4);
 FUNC_3(VAR_11, 6, VAR_6);


 FUNC_3(VAR_11, 8, 0x0001);

 FUNC_4 (VAR_11, 10, 3 + VAR_9);
 FUNC_3(VAR_11, 11, VAR_7);
 FUNC_4 (VAR_11, 13, VAR_9);

 if (VAR_9 > 0)
  FUNC_6(VAR_11 + 14, VAR_8, VAR_9);

 FUNC_5(VAR_3, VAR_10);
}
