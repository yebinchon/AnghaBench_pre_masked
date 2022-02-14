
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {unsigned char* data; } ;
struct TYPE_4__ {int flags; scalar_t__ max_header_size; } ;
typedef TYPE_1__ irnet_socket ;


 int FUNC_0 (int ,int *,int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,TYPE_1__*,struct sk_buff*) ;
 int FUNC_3 (int ,char*) ;
 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static inline struct sk_buff *
FUNC_10(irnet_socket * VAR_8,
    struct sk_buff * VAR_9)
{
  unsigned char * VAR_10;
  int VAR_11;
  int VAR_12;
  int VAR_13;

  FUNC_2(VAR_4, "(ap=0x%p, skb=0x%p)\n",
  VAR_8, VAR_9);


  VAR_10 = VAR_9->data;
  VAR_11 = (VAR_10[0] << 8) + VAR_10[1];




  VAR_12 = (VAR_11 == VAR_3) && (1 <= VAR_10[2]) && (VAR_10[2] <= 7);


  if((VAR_10[0] == 0) && (VAR_8->flags & VAR_7) && (!VAR_12))
    FUNC_6(VAR_9,1);


  VAR_13 = 2*((VAR_8->flags & VAR_6) == 0 || VAR_12);


  if((FUNC_5(VAR_9) < (VAR_8->max_header_size + VAR_13)) ||
      (FUNC_9(VAR_9)))
    {
      struct sk_buff * VAR_14;

      FUNC_1(VAR_2, "Reallocating skb\n");


      VAR_14 = FUNC_8(VAR_9, VAR_8->max_header_size + VAR_13);


      FUNC_4(VAR_9);


      FUNC_0(VAR_14 == ((void*)0), ((void*)0), VAR_1, "Could not realloc skb\n");


      VAR_9 = VAR_14;
    }


  if(VAR_13)
    {
      FUNC_7(VAR_9, 2);
      VAR_9->data[0] = VAR_0;
      VAR_9->data[1] = VAR_5;
    }

  FUNC_3(VAR_4, "\n");

  return VAR_9;
}
