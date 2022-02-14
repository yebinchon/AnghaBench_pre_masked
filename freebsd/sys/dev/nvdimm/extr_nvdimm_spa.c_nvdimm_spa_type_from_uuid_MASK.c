
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uuid {int dummy; } ;
typedef enum SPA_mapping_type { ____Placeholder_SPA_mapping_type } SPA_mapping_type ;
struct TYPE_3__ {int u_id; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (struct uuid*,int *) ;

enum SPA_mapping_type
FUNC_2(struct uuid *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  if (FUNC_1(VAR_2, &VAR_1[VAR_3].u_id) != 0)
   continue;
  return (VAR_3);
 }
 return (VAR_0);
}
