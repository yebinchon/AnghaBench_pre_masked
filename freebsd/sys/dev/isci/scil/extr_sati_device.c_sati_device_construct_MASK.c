
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_3__ {int capabilities; int ncq_depth; int descriptor_sense_enable; int state; } ;
typedef TYPE_1__ SATI_DEVICE_T ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_0(
   SATI_DEVICE_T * VAR_5,
   BOOL VAR_6,
   U8 VAR_7,
   BOOL VAR_8
)
{
   VAR_5->state = VAR_2;
   VAR_5->capabilities = 0;
   VAR_5->descriptor_sense_enable = VAR_3;



   if (VAR_6 == VAR_4)
      VAR_5->capabilities |= VAR_1;

   VAR_5->ncq_depth = VAR_7;


   if (VAR_8 == VAR_4)
      VAR_5->capabilities |= VAR_0;

}
