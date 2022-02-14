
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {int * s; scalar_t__ buffer_length; scalar_t__ length; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct archive_string *VAR_0)
{
 VAR_0->length = 0;
 VAR_0->buffer_length = 0;
 FUNC_0(VAR_0->s);
 VAR_0->s = ((void*)0);
}
