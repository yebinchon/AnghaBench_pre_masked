
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int teken_color_t ;
struct TYPE_3__ {int ta_format; int ta_bgcolor; int ta_fgcolor; } ;
typedef TYPE_1__ teken_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(const teken_attr_t *VAR_5)
{
 int VAR_6;
 teken_color_t VAR_7, VAR_8;

 if (VAR_5->ta_format & VAR_2) {
  VAR_7 = VAR_5->ta_bgcolor;
  VAR_8 = VAR_5->ta_fgcolor;
 } else {
  VAR_7 = VAR_5->ta_fgcolor;
  VAR_8 = VAR_5->ta_bgcolor;
 }
 if (VAR_7 >= 16)
  VAR_7 = FUNC_0(VAR_7);
 if (VAR_8 >= 16)
  VAR_8 = FUNC_0(VAR_8);
 VAR_6 = VAR_4[VAR_7 & 7] | (VAR_7 & 8) |
     ((VAR_4[VAR_8 & 7] | (VAR_8 & 8)) << 4);


 if (VAR_5->ta_format & (VAR_1 | VAR_3))
  VAR_6 ^= 8;
 if (VAR_5->ta_format & VAR_0)
  VAR_6 ^= 0x80;

 return (VAR_6);
}
