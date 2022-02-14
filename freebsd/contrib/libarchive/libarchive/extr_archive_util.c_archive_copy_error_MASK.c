
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s; } ;
struct archive {TYPE_1__ error_string; int error; int archive_error_number; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

void
FUNC_1(struct archive *VAR_0, struct archive *VAR_1)
{
 VAR_0->archive_error_number = VAR_1->archive_error_number;

 FUNC_0(&VAR_0->error_string, &VAR_1->error_string);
 VAR_0->error = VAR_0->error_string.s;
}
