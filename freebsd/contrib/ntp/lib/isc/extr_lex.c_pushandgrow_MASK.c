
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int isc_uint8_t ;
typedef scalar_t__ isc_result_t ;
typedef int isc_region_t ;
struct TYPE_13__ {int mctx; } ;
typedef TYPE_1__ isc_lex_t ;
struct TYPE_14__ {int current; } ;
typedef TYPE_2__ isc_buffer_t ;
struct TYPE_15__ {TYPE_2__* pushback; } ;
typedef TYPE_3__ inputsource ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,TYPE_2__**,unsigned int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__**) ;
 unsigned int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int *) ;

__attribute__((used)) static isc_result_t
FUNC_8(isc_lex_t *VAR_1, inputsource *VAR_2, int VAR_3) {
 if (FUNC_2(VAR_2->pushback) == 0) {
  isc_buffer_t *VAR_4 = ((void*)0);
  unsigned int VAR_5;
  isc_region_t VAR_6;
  isc_result_t VAR_7;

  VAR_5 = FUNC_5(VAR_2->pushback);
  VAR_7 = FUNC_1(VAR_1->mctx, &VAR_4, VAR_5 * 2);
  if (VAR_7 != VAR_0)
   return (VAR_7);
  FUNC_7(VAR_2->pushback, &VAR_6);
  VAR_7 = FUNC_3(VAR_4, &VAR_6);
  FUNC_0(VAR_7 == VAR_0);
  VAR_4->current = VAR_2->pushback->current;
  FUNC_4(&VAR_2->pushback);
  VAR_2->pushback = VAR_4;
 }
 FUNC_6(VAR_2->pushback, (isc_uint8_t)VAR_3);
 return (VAR_0);
}
