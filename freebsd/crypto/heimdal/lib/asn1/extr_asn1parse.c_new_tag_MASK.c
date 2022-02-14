
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tagenv; int tagclass; int tagvalue; } ;
struct TYPE_7__ {scalar_t__ type; struct TYPE_7__* subtype; TYPE_1__ tag; } ;
typedef TYPE_2__ Type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (scalar_t__) ;

__attribute__((used)) static Type *
FUNC_1(int VAR_2, int VAR_3, int VAR_4, Type *VAR_5)
{
    Type *VAR_6;
    if(VAR_5->type == VAR_1 && VAR_5->tag.tagenv == VAR_0) {
 VAR_6 = VAR_5;
 VAR_5 = VAR_5->subtype;
    } else
 VAR_6 = FUNC_0 (VAR_1);

    VAR_6->tag.tagclass = VAR_2;
    VAR_6->tag.tagvalue = VAR_3;
    VAR_6->tag.tagenv = VAR_4;
    VAR_6->subtype = VAR_5;
    return VAR_6;
}
