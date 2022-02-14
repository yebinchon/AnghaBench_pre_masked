
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_8__ {int status; } ;
struct TYPE_7__ {int state_machine; } ;
struct TYPE_9__ {TYPE_2__ operation; TYPE_1__ parent; } ;
typedef TYPE_3__ SCIF_SAS_DOMAIN_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static
void FUNC_6(
   void * VAR_3
)
{
   SCIF_SAS_DOMAIN_T * VAR_4 = (SCIF_SAS_DOMAIN_T*) VAR_3;
   U32 VAR_5;

   VAR_5 = FUNC_3(&VAR_4->parent.state_machine);



   if (VAR_5 == VAR_1)
   {
      FUNC_1((
         FUNC_2(VAR_4),
         VAR_0,
         "Domain:0x%x State:0x%x DISCOVER timeout!\n",
         VAR_4, VAR_5
      ));

      VAR_4->operation.status = VAR_2;




      FUNC_4(VAR_4);

      FUNC_5(VAR_4);
   }
   else
   {
      FUNC_0((
         FUNC_2(VAR_4),
         VAR_0,
         "Domain:0x%x State:0x%x operation timeout in invalid state\n",
         VAR_4, VAR_5
      ));
   }
}
