
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int runes; int __mb_sb_limit; int __mb_cur_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char const*) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;

int
FUNC_1(const char *VAR_7)
{
 int VAR_8 = FUNC_0(&VAR_5, VAR_7);

 if (VAR_8 != 0) {
  VAR_6 = VAR_8;
  return (VAR_1);
 }
 VAR_3 = VAR_5.__mb_cur_max;
 VAR_4 = VAR_5.__mb_sb_limit;
 VAR_0 = VAR_5.runes;
 return (VAR_2);
}
