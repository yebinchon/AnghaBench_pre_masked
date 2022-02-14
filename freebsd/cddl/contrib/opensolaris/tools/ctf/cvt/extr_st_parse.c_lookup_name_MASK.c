
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ t_type; int * t_name; struct TYPE_4__* t_next; } ;
typedef TYPE_1__ tdesc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int *,char const*) ;

__attribute__((used)) static tdesc_t *
FUNC_2(tdesc_t **VAR_5, const char *VAR_6)
{
 int VAR_7 = FUNC_0(VAR_6);
 tdesc_t *VAR_8, *VAR_9 = ((void*)0);

 for (VAR_8 = VAR_5[VAR_7]; VAR_8 != ((void*)0); VAR_8 = VAR_8->t_next) {
  if (VAR_8->t_name != ((void*)0) && FUNC_1(VAR_8->t_name, VAR_6) == 0) {
   if (VAR_8->t_type == VAR_2 || VAR_8->t_type == VAR_4 ||
       VAR_8->t_type == VAR_0 || VAR_8->t_type == VAR_1)
    return (VAR_8);
   if (VAR_8->t_type == VAR_3)
    VAR_9 = VAR_8;
  }
 }
 return (VAR_9);
}
