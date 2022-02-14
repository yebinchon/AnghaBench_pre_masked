
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; scalar_t__ a_seek; scalar_t__ f_seek; } ;
struct TYPE_3__ {int type; scalar_t__ a_seek; scalar_t__ f_seek; } ;
struct whyle {TYPE_2__ w_end; TYPE_1__ w_start; struct whyle* w_next; } ;
struct Ain {int type; scalar_t__ a_seek; scalar_t__ f_seek; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Ain*) ;
 struct whyle* VAR_2 ;
 int FUNC_1 (struct whyle*) ;
 int FUNC_2 (char*,char const,scalar_t__,scalar_t__) ;

void
FUNC_3(void)
{
    struct Ain VAR_3;
    struct whyle *VAR_4;
    FUNC_0(&VAR_3);






    for (; VAR_2; VAR_2 = VAR_4) {
 struct whyle *VAR_5 = VAR_2;
 VAR_4 = VAR_5->w_next;
 if (VAR_5->w_end.type != VAR_1 && VAR_5->w_start.type == VAR_5->w_end.type &&
     VAR_5->w_start.type == VAR_3.type) {
     if (VAR_5->w_end.type == VAR_0) {
  if (VAR_3.f_seek >= VAR_5->w_start.f_seek &&
      (VAR_5->w_end.f_seek == 0 || VAR_3.f_seek < VAR_5->w_end.f_seek))
      break;
     }
     else {
  if (VAR_3.a_seek >= VAR_5->w_start.a_seek &&
      (VAR_5->w_end.a_seek == 0 || VAR_3.a_seek < VAR_5->w_end.a_seek))
      break;
     }
 }

 FUNC_1(VAR_5);
    }
}
