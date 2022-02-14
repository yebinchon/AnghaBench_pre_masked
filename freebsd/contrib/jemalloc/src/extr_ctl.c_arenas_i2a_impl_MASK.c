
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t narenas; } ;




 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static unsigned
FUNC_1(size_t VAR_2, bool VAR_3, bool VAR_4) {
 unsigned VAR_5;

 switch (VAR_2) {
 case 129:
  VAR_5 = 0;
  break;
 case 128:
  VAR_5 = 1;
  break;
 default:
  if (VAR_3 && VAR_2 == VAR_1->narenas) {






   VAR_5 = 0;
  } else if (VAR_4 && VAR_2 >= VAR_1->narenas) {
   VAR_5 = VAR_0;
  } else {





   FUNC_0(VAR_2 < VAR_1->narenas || (!VAR_4 && VAR_2 ==
       VAR_1->narenas));
   VAR_5 = (unsigned)VAR_2 + 2;
  }
  break;
 }

 return VAR_5;
}
