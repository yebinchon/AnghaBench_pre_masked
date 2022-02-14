
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int* data; } ;
struct net_device {int dummy; } ;
typedef int rose_address ;


 unsigned short VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 struct net_device* FUNC_1 (int *) ;
 struct sock* FUNC_2 (unsigned int,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct net_device*,int ,unsigned int) ;
 struct sk_buff* FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_3)
{
 struct sk_buff *VAR_4;
 struct net_device *VAR_5;
 rose_address *VAR_6;
 struct sock *VAR_7;
 unsigned short VAR_8;
 unsigned int VAR_9, VAR_10;

 while ((VAR_4 = FUNC_5(&VAR_1)) != ((void*)0)) {
  VAR_9 = ((VAR_4->data[0] << 8) & 0xF00) + ((VAR_4->data[1] << 0) & 0x0FF);
  VAR_8 = VAR_4->data[2];
  VAR_6 = (rose_address *)(VAR_4->data + 4);
  VAR_10 = 0xFFF - VAR_9;

  FUNC_6(VAR_4);

  VAR_7 = FUNC_2(VAR_10, VAR_2);
  if (VAR_7) {
   if (FUNC_3(VAR_7, VAR_4) == 0)
    FUNC_0(VAR_4);
   continue;
  }

  if (VAR_8 == VAR_0) {
   if ((VAR_5 = FUNC_1(VAR_6)) != ((void*)0)) {
    if (FUNC_4(VAR_4, VAR_5, VAR_2, VAR_10) == 0)
     FUNC_0(VAR_4);
   } else {
    FUNC_0(VAR_4);
   }
  } else {
   FUNC_0(VAR_4);
  }
 }
}
