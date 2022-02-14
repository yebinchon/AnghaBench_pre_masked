
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {char** dts_formats; int dts_nformats; } ;
typedef TYPE_1__ dtrace_state_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(dtrace_state_t *VAR_0, uint16_t VAR_1)
{
 char *VAR_2;

 FUNC_0(VAR_0->dts_formats != ((void*)0));
 FUNC_0(VAR_1 <= VAR_0->dts_nformats);
 FUNC_0(VAR_0->dts_formats[VAR_1 - 1] != ((void*)0));

 VAR_2 = VAR_0->dts_formats[VAR_1 - 1];
 FUNC_1(VAR_2, FUNC_2(VAR_2) + 1);
 VAR_0->dts_formats[VAR_1 - 1] = ((void*)0);
}
