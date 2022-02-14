
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * buffer; } ;
typedef TYPE_1__ LineInfo ;
typedef int EditLine ;


 TYPE_1__* FUNC_0 (int *) ;
 char* FUNC_1 (int *,int ,size_t) ;

__attribute__((used)) static void
FUNC_2(EditLine *VAR_0, void *VAR_1)
{
 const LineInfo *VAR_2;
 char **VAR_3 = VAR_1;

 VAR_2 = FUNC_0(VAR_0);

 *VAR_3 = FUNC_1(VAR_2->buffer, *VAR_2->buffer, (size_t)1);
}
