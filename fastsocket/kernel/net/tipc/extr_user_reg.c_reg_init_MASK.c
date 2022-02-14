
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {size_t next; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_3(void)
{
 u32 VAR_7;

 FUNC_1(&VAR_5);
 if (!VAR_6) {
  VAR_6 = FUNC_0(VAR_3, VAR_1);
  if (VAR_6) {
   for (VAR_7 = 1; VAR_7 <= VAR_2; VAR_7++) {
    VAR_6[VAR_7].next = VAR_7 - 1;
   }
   VAR_4 = VAR_2;
  }
 }
 FUNC_2(&VAR_5);
 return VAR_6 ? 0 : -VAR_0;
}
