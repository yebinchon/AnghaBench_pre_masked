
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int chan; scalar_t__ ppp_open; } ;
typedef TYPE_3__ irnet_socket ;
typedef int irnet_event ;
typedef void* __u32 ;
typedef int __u16 ;
struct TYPE_10__ {int index; int rwait; int spinlock; TYPE_2__* log; } ;
struct TYPE_7__ {int word; } ;
struct TYPE_8__ {char* name; int unit; TYPE_1__ hints; void* saddr; void* daddr; int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,TYPE_3__*,int ,void*,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(irnet_socket * VAR_4,
   irnet_event VAR_5,
   __u32 VAR_6,
   __u32 VAR_7,
   char * VAR_8,
   __u16 VAR_9)
{
  int VAR_10;

  FUNC_1(VAR_1, "(ap=0x%p, event=%d, daddr=%08x, name=``%s'')\n",
  VAR_4, VAR_5, VAR_7, VAR_8);





  FUNC_4(&VAR_3.spinlock);


  VAR_10 = VAR_3.index;
  VAR_3.log[VAR_10].event = VAR_5;
  VAR_3.log[VAR_10].daddr = VAR_7;
  VAR_3.log[VAR_10].saddr = VAR_6;

  if(VAR_8)
    FUNC_6(VAR_3.log[VAR_10].name, VAR_8);
  else
    VAR_3.log[VAR_10].name[0] = '\0';

  VAR_3.log[VAR_10].hints.word = VAR_9;

  if((VAR_4 != (irnet_socket *) ((void*)0)) && (VAR_4->ppp_open))
    VAR_3.log[VAR_10].unit = FUNC_3(&VAR_4->chan);
  else
    VAR_3.log[VAR_10].unit = -1;




  VAR_3.index = (VAR_10 + 1) % VAR_2;

  FUNC_0(VAR_0, "New event index is %d\n", VAR_3.index);


  FUNC_5(&VAR_3.spinlock);


  FUNC_7(&VAR_3.rwait);

  FUNC_2(VAR_1, "\n");
}
