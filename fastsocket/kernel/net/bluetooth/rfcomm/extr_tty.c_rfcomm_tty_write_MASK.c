
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct sk_buff {int dummy; } ;
struct rfcomm_dlc {int mtu; } ;
struct rfcomm_dev {struct rfcomm_dlc* dlc; } ;


 int FUNC_0 (char*,struct tty_struct*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,unsigned char const*,int) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct rfcomm_dlc*,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct rfcomm_dev*,scalar_t__,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct tty_struct *VAR_4, const unsigned char *VAR_5, int VAR_6)
{
 struct rfcomm_dev *VAR_7 = (struct rfcomm_dev *) VAR_4->driver_data;
 struct rfcomm_dlc *VAR_8 = VAR_7->dlc;
 struct sk_buff *VAR_9;
 int VAR_10 = 0, VAR_11 = 0, VAR_12;

 FUNC_0("tty %p count %d", VAR_4, VAR_6);

 while (VAR_6) {
  VAR_12 = FUNC_3(VAR_3, VAR_6, VAR_8->mtu);

  VAR_9 = FUNC_5(VAR_7, VAR_12 + VAR_2, VAR_0);

  if (!VAR_9)
   break;

  FUNC_7(VAR_9, VAR_1);

  FUNC_2(FUNC_6(VAR_9, VAR_12), VAR_5 + VAR_11, VAR_12);

  if ((VAR_10 = FUNC_4(VAR_8, VAR_9)) < 0) {
   FUNC_1(VAR_9);
   break;
  }

  VAR_11 += VAR_12;
  VAR_6 -= VAR_12;
 }

 return VAR_11 ? VAR_11 : VAR_10;
}
