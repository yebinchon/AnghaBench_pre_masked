
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bg; int fg; } ;
struct TYPE_6__ {int fg; int bg; } ;
struct TYPE_7__ {int attr_mask; TYPE_1__ cur_color; TYPE_2__ rev_color; } ;
typedef TYPE_3__ term_stat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_0(term_stat *VAR_6)
{
 int VAR_7, VAR_8 = VAR_6->attr_mask;

 if (VAR_8 & VAR_4) {
  VAR_7 = ((VAR_8 & VAR_3) ?
   VAR_6->cur_color.bg : VAR_6->rev_color.fg) |
   (((VAR_8 & VAR_0) ?
   VAR_6->cur_color.fg : VAR_6->rev_color.bg) << 4);
 } else
  VAR_7 = VAR_6->cur_color.fg | (VAR_6->cur_color.bg << 4);


 if (VAR_8 & (VAR_2 | VAR_5))
  VAR_7 ^= 0x08;
 if (VAR_8 & VAR_1)
  VAR_7 ^= 0x80;

 return (VAR_7 << 8);
}
