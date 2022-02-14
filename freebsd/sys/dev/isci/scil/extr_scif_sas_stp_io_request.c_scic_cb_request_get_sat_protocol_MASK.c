
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_5__ {int protocol; } ;
struct TYPE_6__ {TYPE_1__ sequence; } ;
struct TYPE_7__ {TYPE_2__ stp; } ;
struct TYPE_8__ {TYPE_3__ parent; } ;
typedef TYPE_4__ SCIF_SAS_IO_REQUEST_T ;



U8 FUNC_0(
   void * VAR_0
)
{
   SCIF_SAS_IO_REQUEST_T * VAR_1 = (SCIF_SAS_IO_REQUEST_T*) VAR_0;

   return VAR_1->parent.stp.sequence.protocol;
}
