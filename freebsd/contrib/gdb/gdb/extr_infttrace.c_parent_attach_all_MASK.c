
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int tc_magic_parent ;
typedef int tc_magic_child ;
typedef int lwpid_t ;
struct TYPE_2__ {int * child_channel; int * parent_channel; } ;
typedef int TTRACE_ARG_TYPE ;
typedef int PTRACE_ARG3_TYPE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__*,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,scalar_t__*,int) ;

int
FUNC_5 (int VAR_6, PTRACE_ARG3_TYPE VAR_7, int VAR_8)
{
  int VAR_9;






  uint64_t VAR_10 = VAR_4;
  uint64_t VAR_11 = 0;

  VAR_9 = FUNC_0 (
     VAR_3,
     (int) VAR_2,
     (lwpid_t) VAR_2,
     VAR_2,
     (TTRACE_ARG_TYPE) VAR_4,
     VAR_2);

  if (VAR_9 < 0)
    return VAR_9;


  FUNC_4 (VAR_5.child_channel[VAR_1],
  &VAR_10,
  sizeof (VAR_10));


  FUNC_2 (VAR_5.parent_channel[VAR_0],
 &VAR_11,
 sizeof (VAR_11));

  if (VAR_10 != VAR_11)
    FUNC_3 ("mismatched semaphore magic");


  (void) FUNC_1 (VAR_5.parent_channel[VAR_0]);
  (void) FUNC_1 (VAR_5.parent_channel[VAR_1]);
  (void) FUNC_1 (VAR_5.child_channel[VAR_0]);
  (void) FUNC_1 (VAR_5.child_channel[VAR_1]);

  return VAR_9;
}
