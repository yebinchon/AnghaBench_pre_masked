
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int local_conversion; int format_mask; int local_format; TYPE_1__* d; int audio_format; } ;
struct TYPE_3__ {int (* set_bits ) (int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__** VAR_4 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_5, int VAR_6)
{
 if (VAR_6 != VAR_1)
 {
  VAR_4[VAR_5]->local_conversion = 0;

  if (!(VAR_4[VAR_5]->format_mask & VAR_6))
  {
   if (VAR_6 == VAR_0)
   {
    VAR_6 = VAR_2;
    VAR_4[VAR_5]->local_conversion = VAR_3;
   }
   else
    VAR_6 = VAR_2;
  }
  VAR_4[VAR_5]->audio_format = VAR_4[VAR_5]->d->set_bits(VAR_5, VAR_6);
  VAR_4[VAR_5]->local_format = VAR_6;
 }
 else
  return VAR_4[VAR_5]->local_format;

 if (VAR_4[VAR_5]->local_conversion)
  return VAR_4[VAR_5]->local_conversion;
 else
  return VAR_4[VAR_5]->local_format;
}
