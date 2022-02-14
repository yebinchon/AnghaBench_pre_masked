
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int supported_out_devices; int model; int outmask; int submodel; } ;
typedef TYPE_1__ sb_devc ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char* VAR_3 ;
 unsigned char* VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_1(sb_devc * VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 unsigned char VAR_9;

 VAR_7 = VAR_6 & VAR_5->supported_out_devices;

 switch (VAR_5->model)
 {
  case 128:
   if (VAR_5->submodel == VAR_2)
    break;
   else
   {
    VAR_9 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
    {
     if ((1 << VAR_8) & VAR_7)
     {
      VAR_9 |= (VAR_3[VAR_8] | VAR_4[VAR_8]);
     }
     FUNC_0 (VAR_5, VAR_0, VAR_9);
    }
   }
   break;
  default:
   break;
 }

 VAR_5->outmask = VAR_7;
 return VAR_5->outmask;
}
