
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buffer; scalar_t__ lastchar; scalar_t__ cursor; } ;
typedef TYPE_1__ LineInfo ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 size_t VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(void)
{
 const LineInfo *VAR_4 = FUNC_0(VAR_0);

 VAR_3 = (int)(VAR_4->cursor - VAR_4->buffer);
 VAR_1 = (int)(VAR_4->lastchar - VAR_4->buffer);
 VAR_2[VAR_1] = '\0';
}
