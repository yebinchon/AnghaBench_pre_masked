
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {struct TYPE_8__* mdl_next; int mdl_flags; } ;
typedef TYPE_1__ mdl ;
struct TYPE_9__ {TYPE_1__* irp_mdl; } ;
typedef TYPE_2__ irp ;


 TYPE_1__* FUNC_0 (int ,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,void*,int ) ;
 scalar_t__ FUNC_2 (void*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (int ,int) ;

mdl *
FUNC_5(void *VAR_7, uint32_t VAR_8, uint8_t VAR_9,
 uint8_t VAR_10, irp *VAR_11)
{
 mdl *VAR_12;
 int VAR_13 = 0;

 if (FUNC_2(VAR_7, VAR_8) > VAR_1)
  VAR_12 = FUNC_0(VAR_4,
      FUNC_2(VAR_7, VAR_8), 0);
 else {
  VAR_12 = FUNC_4(VAR_6, VAR_2 | VAR_3);
  VAR_13++;
 }

 if (VAR_12 == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_12, VAR_7, VAR_8);







 if (VAR_13)
  VAR_12->mdl_flags = VAR_0;

 if (VAR_11 != ((void*)0)) {
  if (VAR_9 == VAR_5) {
   mdl *VAR_14;
   VAR_14 = VAR_11->irp_mdl;
   while (VAR_14->mdl_next != ((void*)0))
    VAR_14 = VAR_14->mdl_next;
   VAR_14->mdl_next = VAR_12;
  } else {
   if (VAR_11->irp_mdl != ((void*)0))
    FUNC_3("leaking an MDL in IoAllocateMdl()");
   VAR_11->irp_mdl = VAR_12;
  }
 }

 return (VAR_12);
}
