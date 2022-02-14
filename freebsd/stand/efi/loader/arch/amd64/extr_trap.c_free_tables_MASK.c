
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amd64tss {int dummy; } ;
struct TYPE_4__ {int (* FreePages ) (scalar_t__,int) ;} ;
struct TYPE_3__ {int rd_limit; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_5(void)
{

 if (VAR_4 != 0) {
  VAR_0->FreePages(VAR_4, FUNC_0(VAR_2.rd_limit));
  VAR_4 = 0;
 }
 if (VAR_1 != 0) {
  VAR_0->FreePages(VAR_1, 1);
  VAR_1 = 0;
 }
 if (VAR_8 != 0 && VAR_7 == 0) {
  VAR_0->FreePages(VAR_8, FUNC_0(sizeof(struct
      amd64tss)));
  VAR_8 = 0;
 }
 if (VAR_5 != 0) {
  VAR_0->FreePages(VAR_8, 2);
  VAR_5 = 0;
 }
 VAR_3 = 0;
 VAR_6 = 0;
}
