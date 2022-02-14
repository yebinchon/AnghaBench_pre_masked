
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int disco_number; size_t disco_index; TYPE_2__* discoveries; } ;
typedef TYPE_1__ irnet_socket ;
struct TYPE_7__ {int daddr; char* info; int saddr; int* hints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,char*,int,char*,int,int,int) ;

__attribute__((used)) static inline int
FUNC_5(irnet_socket * VAR_2,
    char * VAR_3)
{
  int VAR_4 = 0;

  FUNC_1(VAR_1, "(ap=0x%p, event=0x%p)\n",
  VAR_2, VAR_3);


  if(VAR_2->disco_number == -1)
    {
      FUNC_0(VAR_0, "Already done\n");
      return 0;
    }


  if(VAR_2->discoveries == ((void*)0))
    FUNC_2(VAR_2);


  if(VAR_2->disco_index < VAR_2->disco_number)
    {

      FUNC_4(VAR_3, "Found %08x (%s) behind %08x {hints %02X-%02X}\n",
       VAR_2->discoveries[VAR_2->disco_index].daddr,
       VAR_2->discoveries[VAR_2->disco_index].info,
       VAR_2->discoveries[VAR_2->disco_index].saddr,
       VAR_2->discoveries[VAR_2->disco_index].hints[0],
       VAR_2->discoveries[VAR_2->disco_index].hints[1]);
      FUNC_0(VAR_0, "Writing discovery %d : %s\n",
     VAR_2->disco_index, VAR_2->discoveries[VAR_2->disco_index].info);


      VAR_4 = 1;

      VAR_2->disco_index++;
    }


  if(VAR_2->disco_index >= VAR_2->disco_number)
    {

      FUNC_0(VAR_0, "Cleaning up log (0x%p)\n",
     VAR_2->discoveries);
      if(VAR_2->discoveries != ((void*)0))
 {

   FUNC_3(VAR_2->discoveries);
   VAR_2->discoveries = ((void*)0);
 }
      VAR_2->disco_number = -1;
    }

  return VAR_4;
}
