
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pc; int cause; int hi; int lo; int fp_control_status; int fp_implementation_revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (int VAR_10)
{
  return (VAR_10 < 32 ? VAR_5 + VAR_10
   : VAR_10 == FUNC_0 (VAR_9)->pc ? VAR_8
   : VAR_10 == FUNC_0 (VAR_9)->cause ? VAR_0
   : VAR_10 == FUNC_0 (VAR_9)->hi ? VAR_6
   : VAR_10 == FUNC_0 (VAR_9)->lo ? VAR_7
   : VAR_10 == FUNC_0 (VAR_9)->fp_control_status ? VAR_2
   : VAR_10 == FUNC_0 (VAR_9)->fp_implementation_revision ? VAR_3
   : VAR_10 >= VAR_1 ? VAR_4 + (VAR_10 - VAR_1)
   : 0);
}
