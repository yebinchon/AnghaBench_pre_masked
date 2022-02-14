
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ daddr; char* rname; scalar_t__ rdaddr; scalar_t__ ppp_open; int ttp_open; int tsap; int saddr; } ;
typedef TYPE_1__ irnet_socket ;
struct TYPE_10__ {int spinlock; int list; } ;


 int FUNC_0 (int ,char*,TYPE_1__*,...) ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static inline irnet_socket *
FUNC_12(irnet_socket * VAR_4)
{
  irnet_socket * VAR_5 = (irnet_socket *) ((void*)0);
  int VAR_6;

  FUNC_1(VAR_2, "(self=0x%p)\n", VAR_4);


  VAR_4->daddr = FUNC_7(VAR_4->tsap);
  VAR_4->saddr = FUNC_8(VAR_4->tsap);


  VAR_6 = FUNC_6(VAR_4);


  FUNC_9(&VAR_3.spinlock);



  if(VAR_6 == 0)
    {
      VAR_5 = (irnet_socket *) FUNC_3(VAR_3.list,
       0, VAR_4->rname);
      if(VAR_5)
 FUNC_0(VAR_1, "Socket 0x%p matches rname ``%s''.\n",
       VAR_5, VAR_5->rname);
    }





  if(VAR_5 == (irnet_socket *) ((void*)0))
    {
      VAR_5 = (irnet_socket *) FUNC_4(VAR_3.list);
      while(VAR_5 !=(irnet_socket *) ((void*)0))
 {

   if((VAR_5->rdaddr == VAR_4->daddr) || (VAR_5->daddr == VAR_4->daddr))
     {

       FUNC_0(VAR_1, "Socket 0x%p matches daddr %#08x.\n",
      VAR_5, VAR_4->daddr);
       break;
     }
   VAR_5 = (irnet_socket *) FUNC_5(VAR_3.list);
 }
    }


  if(VAR_5 == (irnet_socket *) ((void*)0))
    {
      VAR_5 = (irnet_socket *) FUNC_4(VAR_3.list);
      while(VAR_5 !=(irnet_socket *) ((void*)0))
 {

   if(!(FUNC_11(0, &VAR_5->ttp_open)) && (VAR_5->rdaddr == VAR_0) &&
      (VAR_5->rname[0] == '\0') && (VAR_5->ppp_open))
     {

       FUNC_0(VAR_1, "Socket 0x%p is free.\n",
      VAR_5);
       break;
     }
   VAR_5 = (irnet_socket *) FUNC_5(VAR_3.list);
 }
    }


  FUNC_10(&VAR_3.spinlock);

  FUNC_2(VAR_2, " - new = 0x%p\n", VAR_5);
  return VAR_5;
}
