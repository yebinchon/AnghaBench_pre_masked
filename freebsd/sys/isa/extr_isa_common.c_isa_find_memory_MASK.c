
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct resource {int dummy; } ;
struct isa_config {int ic_nmem; TYPE_1__* ic_mem; } ;
typedef int device_t ;
struct TYPE_2__ {int ir_size; int ir_start; int ir_end; int ir_align; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 struct resource* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,struct resource*) ;
 int FUNC_4 (int ,int ,int,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, struct isa_config *VAR_3,
    struct isa_config *VAR_4)
{
 int VAR_5, VAR_6;
 struct resource *VAR_7[VAR_0];




 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_2(VAR_2, VAR_1, VAR_6);
  VAR_7[VAR_6] = ((void*)0);
 }

 VAR_5 = 1;
 VAR_4->ic_nmem = VAR_3->ic_nmem;
 for (VAR_6 = 0; VAR_6 < VAR_3->ic_nmem; VAR_6++) {
  uint32_t VAR_8, VAR_9, VAR_10, VAR_11;

  VAR_10 = VAR_3->ic_mem[VAR_6].ir_size;


  if (VAR_10 == 0) {
   VAR_4->ic_mem[VAR_6].ir_start = 0;
   VAR_4->ic_mem[VAR_6].ir_end = 0;
   VAR_4->ic_mem[VAR_6].ir_size = 0;
   VAR_4->ic_mem[VAR_6].ir_align = 0;
   continue;
  }

  for (VAR_8 = VAR_3->ic_mem[VAR_6].ir_start,
        VAR_9 = VAR_3->ic_mem[VAR_6].ir_end,
        VAR_11 = VAR_3->ic_mem[VAR_6].ir_align;
       VAR_8 + VAR_10 - 1 <= VAR_9 && VAR_8 + VAR_10 > VAR_8;
       VAR_8 += FUNC_0(VAR_11, 1)) {
   FUNC_4(VAR_2, VAR_1, VAR_6,
      VAR_8, VAR_10);
   VAR_7[VAR_6] = FUNC_1(VAR_2,
       VAR_1, &VAR_6,
       FUNC_5(VAR_11) );
   if (VAR_7[VAR_6]) {
    VAR_4->ic_mem[VAR_6].ir_start = VAR_8;
    VAR_4->ic_mem[VAR_6].ir_end = VAR_8 + VAR_10 - 1;
    VAR_4->ic_mem[VAR_6].ir_size = VAR_10;
    VAR_4->ic_mem[VAR_6].ir_align = VAR_11;
    break;
   }
  }





  if (!VAR_7[VAR_6]) {
   VAR_5 = 0;
   break;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_7[VAR_6])
   FUNC_3(VAR_2, VAR_1,
          VAR_6, VAR_7[VAR_6]);
 }

 return (VAR_5);
}
