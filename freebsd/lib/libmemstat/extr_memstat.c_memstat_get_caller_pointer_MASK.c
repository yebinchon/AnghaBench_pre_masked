
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_type {void** mt_caller_pointer; } ;



void *
FUNC_0(const struct memory_type *VAR_0, int VAR_1)
{

 return (VAR_0->mt_caller_pointer[VAR_1]);
}
