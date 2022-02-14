
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct qos_info {int dummy; } ;
struct TYPE_4__ {int rname; int daddr; int saddr; int chan; int ttp_connect; int ttp_open; int tsap; scalar_t__ max_data_size; scalar_t__ max_sdu_size_tx; int max_header_size; } ;
typedef TYPE_1__ irnet_socket ;
typedef int __u8 ;
typedef scalar_t__ __u32 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (void*,void*,struct sk_buff*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static void
FUNC_13(void * VAR_4,
        void * VAR_5,
        struct qos_info *VAR_6,
        __u32 VAR_7,
        __u8 VAR_8,
        struct sk_buff *VAR_9)
{
  irnet_socket * VAR_10 = (irnet_socket *) VAR_4;

  FUNC_1(VAR_2, "(self=0x%p)\n", VAR_10);


  if(! FUNC_12(0, &VAR_10->ttp_connect))
    {
      FUNC_2(VAR_0, "Socket no longer connecting. Ouch !\n");
      return;
    }


  VAR_10->max_header_size = VAR_8;


  VAR_10->max_sdu_size_tx = VAR_7;
  VAR_10->max_data_size = VAR_7;






  VAR_10->saddr = FUNC_8(VAR_10->tsap);


  FUNC_11(0, &VAR_10->ttp_open);
  FUNC_4(0, &VAR_10->ttp_connect);

  FUNC_10(&VAR_10->chan);


  if(VAR_9->len > 0)
    {





      FUNC_2(VAR_0, "Dropping non empty packet.\n");
      FUNC_9(VAR_9);

    }
  else
    FUNC_9(VAR_9);


  FUNC_6(VAR_10, VAR_3,
     VAR_10->saddr, VAR_10->daddr, VAR_10->rname, 0);

  FUNC_3(VAR_2, "\n");
}
