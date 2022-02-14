
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_short ;
struct TYPE_3__ {int followedby; int token; int key; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (int ,int ,int ,size_t) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u_short
FUNC_2(void)
{
 u_short VAR_3;
 u_short VAR_4;

 VAR_2 = 1;
 VAR_3 = 0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  VAR_0 = VAR_1[VAR_4].key;
  VAR_3 =
      FUNC_1(
   VAR_1[VAR_4].key,
   VAR_1[VAR_4].token,
   VAR_1[VAR_4].followedby,
   VAR_3);
 }

 return VAR_3;
}
