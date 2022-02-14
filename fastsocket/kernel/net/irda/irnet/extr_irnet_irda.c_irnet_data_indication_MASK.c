
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {unsigned char* data; int len; } ;
struct TYPE_3__ {int chan; int ppp_open; } ;
typedef TYPE_1__ irnet_socket ;


 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,char*,TYPE_1__*,struct sk_buff*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (int *,int) ;
 unsigned char* FUNC_7 (struct sk_buff*,int) ;
 scalar_t__* FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int
FUNC_9(void * VAR_5,
        void * VAR_6,
        struct sk_buff *VAR_7)
{
  irnet_socket * VAR_8 = (irnet_socket *) VAR_5;
  unsigned char * VAR_9;
  int VAR_10 = 0;

  FUNC_1(VAR_2, "(self/ap=0x%p, skb=0x%p)\n",
  VAR_8, VAR_7);
  FUNC_0(VAR_7 != ((void*)0), 0, VAR_1, "skb is NULL !!!\n");


  if(!VAR_8->ppp_open)
    {
      FUNC_2(VAR_1, "PPP not ready, dropping packet...\n");



      return -VAR_0;
    }


  VAR_9 = VAR_7->data;
  if((VAR_9[0] == VAR_3) && (VAR_9[1] == VAR_4))
    {

      if(VAR_7->len < 3)
 goto err_exit;
      VAR_9 = FUNC_7(VAR_7, 2);
    }


  if(VAR_9[0] & 1)
    {

      FUNC_8(VAR_7, 1)[0] = 0;
    }
  else
    if(VAR_7->len < 2)
      goto err_exit;




  FUNC_5(&VAR_8->chan, VAR_7);

  FUNC_3(VAR_2, "\n");
  return 0;

 err_exit:
  FUNC_2(VAR_1, "Packet too small, dropping...\n");
  FUNC_4(VAR_7);
  FUNC_6(&VAR_8->chan, VAR_10);
  return 0;
}
