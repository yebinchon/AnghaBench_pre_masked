
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct irda_device_info {int daddr; int info; } ;
struct TYPE_4__ {int rname; int daddr; } ;
typedef TYPE_1__ irnet_socket ;


 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct irda_device_info* FUNC_4 (int*,int,int ) ;
 int FUNC_5 (struct irda_device_info*) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static inline int
FUNC_7(irnet_socket * VAR_6)
{
  struct irda_device_info *VAR_7;
  int VAR_8;
  int VAR_9;

  FUNC_1(VAR_4, "(self=0x%p)\n", VAR_6);


  VAR_7 = FUNC_4(&VAR_8, 0xffff,
          VAR_0);

  if(VAR_7 == ((void*)0))
    FUNC_3(-VAR_2, VAR_3, "Cachelog empty...\n");






  for(VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
    {

      if(!FUNC_6(VAR_7[VAR_9].info, VAR_6->rname, VAR_5))
 {

   VAR_6->daddr = VAR_7[VAR_9].daddr;
   FUNC_0(VAR_3, "discovered device ``%s'' at address 0x%08x.\n",
  VAR_6->rname, VAR_6->daddr);
   FUNC_5(VAR_7);
   FUNC_2(VAR_4, "\n");
   return 0;
 }
    }

  FUNC_0(VAR_3, "cannot discover device ``%s'' !!!\n", VAR_6->rname);
  FUNC_5(VAR_7);
  return(-VAR_1);
}
