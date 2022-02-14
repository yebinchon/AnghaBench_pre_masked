
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int size; } ;
typedef TYPE_1__ binary_heap_t ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int) ;

__attribute__((used)) static uint32_t FUNC_2(binary_heap_t * VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2 = VAR_1;
 uint32_t VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;
 uint32_t VAR_6 = 0;

 do {
  VAR_3 = ((VAR_2 + 1) << 1) - 1;
  VAR_4 = (VAR_2 + 1) << 1;
  VAR_6 = 0;


  if (VAR_3 < VAR_0->size && VAR_4 < VAR_0->size) {
   if (FUNC_1(VAR_0, VAR_3, VAR_4))
    VAR_5 = VAR_3;
   else
    VAR_5 = VAR_4;
  } else if (VAR_3 < VAR_0->size) {

   VAR_5 = VAR_3;
  } else {

   break;
  }


  if (FUNC_1(VAR_0, VAR_5, VAR_2)) {
   FUNC_0(VAR_0, VAR_2, VAR_5);
   VAR_6 = 1;
   VAR_2 = VAR_5;
  }
 } while (VAR_6);

 return VAR_2;
}
