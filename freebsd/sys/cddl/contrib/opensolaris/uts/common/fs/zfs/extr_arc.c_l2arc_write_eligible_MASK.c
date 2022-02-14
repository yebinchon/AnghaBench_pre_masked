
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int boolean_t ;
struct TYPE_6__ {scalar_t__ b_spa; } ;
typedef TYPE_1__ arc_buf_hdr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static boolean_t
FUNC_4(uint64_t VAR_6, arc_buf_hdr_t *VAR_7)
{







 if (VAR_7->b_spa != VAR_6) {
  FUNC_0(VAR_5);
  return (VAR_0);
 }
 if (FUNC_1(VAR_7)) {
  FUNC_0(VAR_3);
  return (VAR_0);
 }
 if (FUNC_2(VAR_7)) {
  FUNC_0(VAR_2);
  return (VAR_0);
 }
 if (!FUNC_3(VAR_7)) {
  FUNC_0(VAR_4);
  return (VAR_0);
 }

 return (VAR_1);
}
