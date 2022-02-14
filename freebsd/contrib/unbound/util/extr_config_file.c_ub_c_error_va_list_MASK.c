
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_2__ {char* filename; int line; int errors; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,char const*,int ) ;

__attribute__((used)) static void FUNC_2(const char *VAR_2, va_list VAR_3)
{
 VAR_0->errors++;
 FUNC_0(VAR_1, "%s:%d: error: ", VAR_0->filename,
 VAR_0->line);
 FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_1, "\n");
}
