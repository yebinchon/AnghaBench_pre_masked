
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbdr_entry_t {int buf_addr; } ;
struct TYPE_2__ {int q_len; } ;
struct rbdr {int idx; int * rbdr_buff_dmaps; TYPE_1__ dmem; int enable; struct nicvf* nic; } ;
struct queue_set {int rbdr_len; } ;
struct nicvf {struct queue_set* qs; } ;
typedef int bus_dmamap_t ;
typedef int bus_addr_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rbdr_entry_t* FUNC_0 (struct rbdr*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct nicvf*,struct rbdr*,int ,int,int ,int*) ;
 int FUNC_2 (struct nicvf*,int ,int) ;
 int FUNC_3 (struct nicvf*,int ,int) ;
 int FUNC_4 (struct nicvf*,int ,int,int) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct rbdr *VAR_9, int VAR_10)
{
 struct nicvf *VAR_11;
 struct queue_set *VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;
 struct rbdr_entry_t *VAR_17;
 bus_dmamap_t VAR_18;
 bus_addr_t VAR_19;
 boolean_t VAR_20;
 int VAR_21;

 VAR_20 = VAR_8;
 VAR_21 = 0;
 VAR_11 = VAR_9->nic;
 VAR_12 = VAR_11->qs;
 VAR_13 = VAR_9->idx;


 if (!VAR_9->enable)
  return (0);


 VAR_15 = FUNC_3(VAR_11, VAR_6, VAR_13);
 VAR_15 &= 0x7FFFF;

 if (VAR_15 >= (VAR_12->rbdr_len - 1)) {
  VAR_20 = VAR_2;
  goto out;
 } else
  VAR_16 = VAR_12->rbdr_len - VAR_15 - 1;


 VAR_14 = FUNC_3(VAR_11, VAR_7, VAR_13) >> 3;
 while (VAR_16) {
  VAR_14++;
  VAR_14 &= (VAR_9->dmem.q_len - 1);

  VAR_18 = VAR_9->rbdr_buff_dmaps[VAR_14];
  if (FUNC_1(VAR_11, VAR_9, VAR_18, VAR_10,
      VAR_0, &VAR_19)) {

   break;
  }
  VAR_17 = FUNC_0(VAR_9, VAR_14);
  VAR_17->buf_addr = (VAR_19 >> VAR_4);
  VAR_16--;
  VAR_21++;
 }


 FUNC_5();


 if (VAR_16 == 0)
  VAR_20 = VAR_2;


 FUNC_4(VAR_11, VAR_5,
         VAR_13, VAR_21);
out:
 if (!VAR_20) {




  FUNC_2(VAR_11, VAR_3, VAR_13);

  return (0);
 }

 return (VAR_1);
}
