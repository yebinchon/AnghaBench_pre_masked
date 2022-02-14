
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * q_next; } ;
struct TYPE_10__ {char* rname; scalar_t__ rdaddr; scalar_t__ daddr; TYPE_1__ q; int * tsap; int * iriap; int ttp_connect; } ;
typedef TYPE_2__ irnet_socket ;
typedef int irda_queue_t ;
struct TYPE_11__ {int spinlock; int list; scalar_t__ running; } ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*,TYPE_2__*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int *,int ,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_3__ VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

int
FUNC_12(irnet_socket * VAR_6)
{
  int VAR_7;

  FUNC_1(VAR_4, "(self=0x%p)\n", VAR_6);





  if(FUNC_11(0, &VAR_6->ttp_connect))
    FUNC_4(-VAR_1, VAR_3, "Already connecting...\n");
  if((VAR_6->iriap != ((void*)0)) || (VAR_6->tsap != ((void*)0)))
    FUNC_2(VAR_2, "Socket not cleaned up...\n");





  if((VAR_5.running) && (VAR_6->q.q_next == ((void*)0)))
    {
      FUNC_9(&VAR_5.spinlock);
      FUNC_5(VAR_5.list, (irda_queue_t *) VAR_6, 0, VAR_6->rname);
      FUNC_10(&VAR_5.spinlock);
      FUNC_0(VAR_3, "Inserted ``%s'' in hashbin...\n", VAR_6->rname);
    }


  if((VAR_6->rdaddr == VAR_0) && (VAR_6->rname[0] == '\0'))
    {

      if((VAR_7 = FUNC_6(VAR_6)) != 0)
 FUNC_4(VAR_7, VAR_3, "auto-connect failed!\n");

    }
  else
    {

      if(VAR_6->rdaddr == VAR_0)
 {
   if((VAR_7 = FUNC_7(VAR_6)) != 0)
     FUNC_4(VAR_7, VAR_3, "name connect failed!\n");
 }
      else

 VAR_6->daddr = VAR_6->rdaddr;


      FUNC_8(VAR_6);

    }





  FUNC_3(VAR_4, "\n");
  return(0);
}
