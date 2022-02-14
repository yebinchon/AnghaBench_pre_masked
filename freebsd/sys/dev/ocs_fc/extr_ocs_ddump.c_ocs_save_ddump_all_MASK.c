
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int ddump_saved; } ;
typedef TYPE_1__ ocs_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int ) ;
 int FUNC_3 (int *) ;

int32_t
FUNC_4(uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 ocs_t *VAR_4;
 uint32_t VAR_5;
 int32_t VAR_6 = 0;

 for (VAR_5 = 0; (VAR_4 = FUNC_0(VAR_5)) != ((void*)0); VAR_5++) {
  if (VAR_3 && (!FUNC_3(&VAR_4->ddump_saved))) {
   VAR_6 = FUNC_2(VAR_4, &VAR_4->ddump_saved, VAR_0);
   if (VAR_6) {
    break;
   }
  }

  VAR_6 = FUNC_1(VAR_4, VAR_1, VAR_2);
  if (VAR_6 < 0) {
   break;
  }
 }
 return VAR_6;
}
