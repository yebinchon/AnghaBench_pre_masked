
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_object {int num_attributes; struct st_attr* attrs; } ;
struct TYPE_2__ {scalar_t__ ulValueLen; int * pValue; int type; } ;
struct st_attr {int secret; TYPE_1__ attribute; } ;
typedef int CK_VOID_PTR ;
typedef scalar_t__ CK_ULONG ;
typedef int CK_RV ;
typedef int CK_ATTRIBUTE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 struct st_attr* FUNC_2 (struct st_attr*,int) ;

__attribute__((used)) static CK_RV
FUNC_3(struct st_object *VAR_2,
       int VAR_3,
       CK_ATTRIBUTE_TYPE VAR_4,
       CK_VOID_PTR VAR_5,
       CK_ULONG VAR_6)
{
    struct st_attr *VAR_7;
    int VAR_8;

    VAR_8 = VAR_2->num_attributes;
    VAR_7 = FUNC_2(VAR_2->attrs, (VAR_8 + 1) * sizeof(VAR_2->attrs[0]));
    if (VAR_7 == ((void*)0))
 return VAR_0;
    VAR_2->attrs = VAR_7;
    VAR_2->attrs[VAR_8].secret = VAR_3;
    VAR_2->attrs[VAR_8].attribute.type = VAR_4;
    VAR_2->attrs[VAR_8].attribute.pValue = FUNC_0(VAR_6);
    if (VAR_2->attrs[VAR_8].attribute.pValue == ((void*)0) && VAR_6 != 0)
 return VAR_0;
    FUNC_1(VAR_2->attrs[VAR_8].attribute.pValue, VAR_5, VAR_6);
    VAR_2->attrs[VAR_8].attribute.ulValueLen = VAR_6;
    VAR_2->num_attributes++;

    return VAR_1;
}
