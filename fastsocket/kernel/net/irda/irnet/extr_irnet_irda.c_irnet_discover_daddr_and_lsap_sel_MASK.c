
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int disco_number; int disco_index; int ttp_connect; int * discoveries; int * iriap; int daddr; int mask; } ;
typedef TYPE_1__ irnet_socket ;


 int FUNC_0 (int ,char*,int *,int) ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int*,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static inline int
FUNC_9(irnet_socket * VAR_5)
{
  int VAR_6;

  FUNC_1(VAR_4, "(self=0x%p)\n", VAR_5);


  VAR_5->discoveries = FUNC_6(&VAR_5->disco_number, VAR_5->mask,
         VAR_1);


  if(VAR_5->discoveries == ((void*)0))
    {
      VAR_5->disco_number = -1;
      FUNC_4(0, &VAR_5->ttp_connect);
      FUNC_3(-VAR_2, VAR_3, "No Cachelog...\n");
    }
  FUNC_0(VAR_3, "Got the log (0x%p), size is %d\n",
 VAR_5->discoveries, VAR_5->disco_number);


  VAR_5->disco_index = -1;
  VAR_5->daddr = VAR_0;


  VAR_6 = FUNC_7(VAR_5);
  if(VAR_6)
    {

      if(VAR_5->iriap)
 FUNC_5(VAR_5->iriap);
      VAR_5->iriap = ((void*)0);


      FUNC_8(VAR_5->discoveries);
      VAR_5->discoveries = ((void*)0);

      FUNC_4(0, &VAR_5->ttp_connect);
      FUNC_3(-VAR_2, VAR_3, "Cachelog empty...\n");
    }



  FUNC_2(VAR_4, "\n");
  return(0);
}
