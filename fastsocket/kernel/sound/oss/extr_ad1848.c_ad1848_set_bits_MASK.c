
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int format2bits ;
struct TYPE_4__ {unsigned int audio_format; unsigned char format_bits; } ;
typedef TYPE_1__ ad1848_port_info ;
struct TYPE_5__ {size_t model; } ;
typedef TYPE_2__ ad1848_info ;
struct TYPE_6__ {scalar_t__ portc; scalar_t__ devc; } ;
 unsigned int* VAR_0 ;
 TYPE_3__** VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(int VAR_2, unsigned int VAR_3)
{
 ad1848_info *VAR_4 = (ad1848_info *) VAR_1[VAR_2]->devc;
 ad1848_port_info *VAR_5 = (ad1848_port_info *) VAR_1[VAR_2]->portc;

 static struct format_tbl
 {
    int format;
    unsigned char bits;
 }
 VAR_6[] =
 {
  {
   0, 0
  }
  ,
  {
   134, 1
  }
  ,
  {
   136, 3
  }
  ,
  {
   135, 5
  }
  ,
  {
   128, 0
  }
  ,
  {
   132, 2
  }
  ,
  {
   133, 6
  }
  ,
  {
   131, 0
  }
  ,
  {
   129, 0
  }
  ,
  {
   130, 0
  }
 };
 int VAR_7, VAR_8 = sizeof(VAR_6) / sizeof(struct format_tbl);

 if (VAR_3 == 0)
  return VAR_5->audio_format;

 if (!(VAR_3 & VAR_0[VAR_4->model]))
  VAR_3 = 128;

 VAR_5->audio_format = VAR_3;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  if (VAR_6[VAR_7].format == VAR_3)
  {
   if ((VAR_5->format_bits = VAR_6[VAR_7].bits) == 0)
    return VAR_5->audio_format = 128;

   return VAR_3;
  }

 VAR_5->format_bits = 0;
 return VAR_5->audio_format = 128;
}
