
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_handles; int reader_count; int event_count; int * handles; } ;
typedef int HANDLE ;


 TYPE_1__ VAR_0 ;
 int * FUNC_0 (int *,int,int) ;

__attribute__((used)) static int FUNC_1(void)
{
 HANDLE *VAR_1;

 if (VAR_0.num_handles > VAR_0.reader_count + VAR_0.event_count + 8)
  return 0;
 VAR_1 = FUNC_0(VAR_0.handles, VAR_0.num_handles * 2,
        sizeof(VAR_0.handles[0]));
 if (VAR_1 == ((void*)0))
  return -1;
 VAR_0.handles = VAR_1;
 VAR_0.num_handles *= 2;
 return 0;
}
