
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct qos_info {int dummy; } ;
struct TYPE_15__ {int rname; int daddr; int saddr; int chan; int * discoveries; int * iriap; int ttp_connect; int ttp_open; int max_sdu_size_rx; TYPE_2__* tsap; scalar_t__ max_data_size; scalar_t__ max_sdu_size_tx; int max_header_size; int dtsap_sel; int stsap_sel; } ;
typedef TYPE_1__ irnet_socket ;
typedef int __u8 ;
typedef scalar_t__ __u32 ;
struct TYPE_16__ {int dtsap_sel; int stsap_sel; } ;


 int FUNC_0 (int ,int,int ,char*) ;
 int FUNC_1 (int ,char*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int *) ;
 TYPE_2__* FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static inline int
FUNC_15(irnet_socket * VAR_3,
       irnet_socket * VAR_4,
       struct qos_info * VAR_5,
       __u32 VAR_6,
       __u8 VAR_7)
{
  FUNC_1(VAR_1, "(server=0x%p, new=0x%p)\n",
  VAR_3, VAR_4);


  VAR_4->tsap = FUNC_7(VAR_3->tsap, VAR_4);
  FUNC_0(VAR_4->tsap == ((void*)0), -1, VAR_0, "dup failed!\n");


  VAR_4->stsap_sel = VAR_4->tsap->stsap_sel;
  VAR_4->dtsap_sel = VAR_4->tsap->dtsap_sel;
  VAR_4->saddr = FUNC_10(VAR_4->tsap);
  VAR_4->daddr = FUNC_8(VAR_4->tsap);

  VAR_4->max_header_size = VAR_7;
  VAR_4->max_sdu_size_tx = VAR_6;
  VAR_4->max_data_size = VAR_6;







  FUNC_11(VAR_3->tsap);


  FUNC_6(VAR_4->tsap, VAR_4->max_sdu_size_rx, ((void*)0));


  FUNC_14(0, &VAR_4->ttp_open);



  FUNC_3(0, &VAR_4->ttp_connect);
  if(VAR_4->iriap)
    {
      FUNC_4(VAR_4->iriap);
      VAR_4->iriap = ((void*)0);
    }
  if(VAR_4->discoveries != ((void*)0))
    {
      FUNC_12(VAR_4->discoveries);
      VAR_4->discoveries = ((void*)0);
    }
  FUNC_5(VAR_4, VAR_2,
     VAR_4->saddr, VAR_4->daddr, VAR_3->rname, 0);

  FUNC_2(VAR_1, "\n");
  return 0;
}
