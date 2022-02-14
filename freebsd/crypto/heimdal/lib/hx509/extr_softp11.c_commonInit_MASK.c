
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_object {int dummy; } ;
struct TYPE_3__ {scalar_t__ const mechanism; } ;
typedef int CK_RV ;
typedef int CK_OBJECT_HANDLE ;
typedef scalar_t__ CK_MECHANISM_TYPE ;
typedef TYPE_1__* CK_MECHANISM_PTR ;
typedef int CK_ATTRIBUTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct st_object*,int *,int) ;
 int FUNC_2 (int ,struct st_object**) ;

__attribute__((used)) static CK_RV
FUNC_3(CK_ATTRIBUTE *VAR_2, int VAR_3,
    const CK_MECHANISM_TYPE *VAR_4, int VAR_5,
    const CK_MECHANISM_PTR VAR_6, CK_OBJECT_HANDLE VAR_7,
    struct st_object **VAR_8)
{
    CK_RV VAR_9;
    int VAR_10;

    *VAR_8 = ((void*)0);
    if ((VAR_9 = FUNC_2(VAR_7, VAR_8)) != VAR_1)
 return VAR_9;

    VAR_9 = FUNC_1(*VAR_8, VAR_2, VAR_3);
    if (!VAR_9) {
 FUNC_0("called commonInit on key that doesn't "
     "support required attr");
 return VAR_0;
    }

    for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
 if (VAR_4[VAR_10] == VAR_6->mechanism)
     break;
    if (VAR_10 == VAR_5) {
 FUNC_0("called mech (%08lx) not supported\n",
     VAR_6->mechanism);
 return VAR_0;
    }
    return VAR_1;
}
