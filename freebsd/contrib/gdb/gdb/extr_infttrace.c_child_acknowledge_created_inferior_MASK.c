
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int tc_magic_parent ;
typedef int tc_magic_child ;
struct TYPE_2__ {int * child_channel; int * parent_channel; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_6 (int ,int *,int) ;

void
FUNC_7 (int VAR_6)
{





  uint64_t VAR_7 = VAR_3;
  uint64_t VAR_8 = 0;


  FUNC_4 (VAR_5.child_channel[VAR_1],
 &VAR_8,
 sizeof (VAR_8));




  FUNC_1 ();
  FUNC_0 (FUNC_3 (VAR_6));



  FUNC_5 (VAR_6);



  VAR_4 = VAR_0;


  FUNC_6 (VAR_5.parent_channel[VAR_2],
  &VAR_7,
  sizeof (VAR_7));


  (void) FUNC_2 (VAR_5.parent_channel[VAR_1]);
  (void) FUNC_2 (VAR_5.parent_channel[VAR_2]);
  (void) FUNC_2 (VAR_5.child_channel[VAR_1]);
  (void) FUNC_2 (VAR_5.child_channel[VAR_2]);
}
