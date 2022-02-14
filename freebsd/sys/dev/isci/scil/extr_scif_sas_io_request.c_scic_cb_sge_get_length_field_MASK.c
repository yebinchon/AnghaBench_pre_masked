
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_5__ {int associated_object; } ;
struct TYPE_6__ {TYPE_1__ parent; } ;
struct TYPE_7__ {TYPE_2__ parent; } ;
struct TYPE_8__ {TYPE_3__ parent; } ;
typedef TYPE_4__ SCIF_SAS_IO_REQUEST_T ;


 int FUNC_0 (int ,void*) ;

U32 FUNC_1(
   void * VAR_0,
   void * VAR_1
)
{
   SCIF_SAS_IO_REQUEST_T * VAR_2 = (SCIF_SAS_IO_REQUEST_T*)
                                   VAR_0;

   return FUNC_0(
             VAR_2->parent.parent.parent.associated_object,
             VAR_1
          );
}
