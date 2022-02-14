
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int output; } ;


 TYPE_1__ VAR_0 ;
 char const* FUNC_0 () ;
 int FUNC_1 (int ,char const* const,char const*) ;
 int FUNC_2 (char,int ) ;
 char* VAR_1 ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static void
FUNC_4(const char *const *VAR_2)
{
    const char *VAR_3 = FUNC_3(VAR_1, '/');
    unsigned VAR_4 = 0;

    if (VAR_3 != 0)
 VAR_3++;
    else
 VAR_3 = VAR_1;

    while (*VAR_2 != 0) {
 FUNC_1(VAR_0.output, *VAR_2, VAR_4 ? VAR_3 : FUNC_0());
 (void) FUNC_2('\n', VAR_0.output);
 VAR_4 = 1;
 VAR_2++;
    }
}
