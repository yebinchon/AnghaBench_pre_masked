
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* filename; int line; int errors; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,char*,char*,int,char const*) ;
 int VAR_1 ;

void FUNC_1(const char *VAR_2)
{
 VAR_0->errors++;
 FUNC_0(VAR_1, "%s:%d: error: %s\n", VAR_0->filename,
  VAR_0->line, VAR_2);
}
