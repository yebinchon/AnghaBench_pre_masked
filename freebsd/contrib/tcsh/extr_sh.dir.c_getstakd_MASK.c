
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct directory {int const* di_name; struct directory* di_prev; struct directory* di_next; } ;
typedef int Char ;


 struct directory* VAR_0 ;
 struct directory VAR_1 ;

const Char *
FUNC_0(int VAR_2)
{
    struct directory *VAR_3;

    VAR_3 = VAR_0;
    if (VAR_2 < 0) {
 VAR_3 = VAR_3->di_next;
 if (VAR_3 == &VAR_1)
     VAR_3 = VAR_3->di_next;
    }
    else {
 while (VAR_2-- > 0) {
     VAR_3 = VAR_3->di_prev;
     if (VAR_3 == &VAR_1)
  VAR_3 = VAR_3->di_prev;
     if (VAR_3 == VAR_0)
  return ((void*)0);
 }
    }
    return VAR_3->di_name;
}
