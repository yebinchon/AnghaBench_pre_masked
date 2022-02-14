
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_parser_state {char* filename; int line; char const* chroot; struct config_file* cfg; scalar_t__ errors; } ;
struct config_file {int dummy; } ;


 struct config_parser_state* VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct config_file* VAR_1, char* VAR_2, const char* VAR_3)
{
 static struct config_parser_state VAR_4;
 VAR_0 = &VAR_4;
 VAR_0->filename = VAR_2;
 VAR_0->line = 1;
 VAR_0->errors = 0;
 VAR_0->cfg = VAR_1;
 VAR_0->chroot = VAR_3;
 FUNC_0();
}
