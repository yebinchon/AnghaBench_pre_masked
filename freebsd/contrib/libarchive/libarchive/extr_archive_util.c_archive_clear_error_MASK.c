
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {scalar_t__ archive_error_number; int * error; int error_string; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct archive *VAR_0)
{
 FUNC_0(&VAR_0->error_string);
 VAR_0->error = ((void*)0);
 VAR_0->archive_error_number = 0;
}
