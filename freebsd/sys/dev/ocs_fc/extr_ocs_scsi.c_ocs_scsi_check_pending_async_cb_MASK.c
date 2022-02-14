
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int hio; int (* hw_cb ) (int ,int *,int ,int ,int ,TYPE_1__*) ;} ;
typedef TYPE_1__ ocs_io_t ;
typedef int ocs_hw_t ;
typedef int (* ocs_hw_done_t ) (int ,int *,int ,int ,int ,TYPE_1__*) ;
typedef int int32_t ;


 int VAR_0 ;

__attribute__((used)) static int32_t
FUNC_0(ocs_hw_t *VAR_1, int32_t VAR_2, uint8_t *VAR_3, void *VAR_4)
{
 ocs_io_t *VAR_5 = VAR_4;

 if (VAR_5 != ((void*)0)) {
  if (VAR_5->hw_cb != ((void*)0)) {
   ocs_hw_done_t VAR_6 = VAR_5->hw_cb;

   VAR_5->hw_cb = ((void*)0);
   VAR_6(VAR_5->hio, ((void*)0), 0, VAR_0, 0, VAR_5);
  }
 }
 return 0;
}
