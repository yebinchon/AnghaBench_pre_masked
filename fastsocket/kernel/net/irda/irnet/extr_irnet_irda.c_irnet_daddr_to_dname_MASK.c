
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct irda_device_info {scalar_t__ daddr; int info; } ;
struct TYPE_4__ {scalar_t__ daddr; char* rname; } ;
typedef TYPE_1__ irnet_socket ;


 int FUNC_0 (int ,char*,scalar_t__,char*) ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct irda_device_info* FUNC_4 (int*,int,int ) ;
 int FUNC_5 (struct irda_device_info*) ;
 int FUNC_6 (char*,int ,int) ;

__attribute__((used)) static inline int
FUNC_7(irnet_socket * VAR_5)
{
  struct irda_device_info *VAR_6;
  int VAR_7;
  int VAR_8;

  FUNC_1(VAR_4, "(self=0x%p)\n", VAR_5);


  VAR_6 = FUNC_4(&VAR_7, 0xffff,
          VAR_0);

  if (VAR_6 == ((void*)0))
    FUNC_3(-VAR_2, VAR_3, "Cachelog empty...\n");


  for(VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
    {

      if(VAR_6[VAR_8].daddr == VAR_5->daddr)
 {

   FUNC_6(VAR_5->rname, VAR_6[VAR_8].info, sizeof(VAR_5->rname));
   VAR_5->rname[sizeof(VAR_5->rname) - 1] = '\0';
   FUNC_0(VAR_3, "Device 0x%08x is in fact ``%s''.\n",
  VAR_5->daddr, VAR_5->rname);
   FUNC_5(VAR_6);
   FUNC_2(VAR_4, "\n");
   return 0;
 }
    }

  FUNC_2(VAR_3, ": cannot discover device 0x%08x !!!\n", VAR_5->daddr);
  FUNC_5(VAR_6);
  return(-VAR_1);
}
