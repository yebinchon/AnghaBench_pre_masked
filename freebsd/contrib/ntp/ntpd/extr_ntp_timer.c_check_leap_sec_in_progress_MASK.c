
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ddist; scalar_t__ tai_diff; } ;
typedef TYPE_1__ leap_result_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1( const leap_result_t *VAR_2 ) {
 int VAR_3 = VAR_0;
 VAR_0 = VAR_2->tai_diff && (VAR_2->ddist < 3);


 if (VAR_0 != VAR_3)
  FUNC_0(VAR_1);
}
