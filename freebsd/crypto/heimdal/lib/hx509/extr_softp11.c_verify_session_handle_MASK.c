
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct session_state {scalar_t__ session_handle; } ;
struct TYPE_2__ {struct session_state* state; } ;
typedef scalar_t__ CK_SESSION_HANDLE ;
typedef int CK_RV ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,unsigned long) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static CK_RV
FUNC_1(CK_SESSION_HANDLE VAR_4,
        struct session_state **VAR_5)
{
    size_t VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++){
 if (VAR_3.state[VAR_6].session_handle == VAR_4)
     break;
    }
    if (VAR_6 == VAR_2) {
 FUNC_0("use of invalid handle: 0x%08lx\n",
     (unsigned long)VAR_4);
 return VAR_1;
    }
    if (VAR_5)
 *VAR_5 = &VAR_3.state[VAR_6];
    return VAR_0;
}
