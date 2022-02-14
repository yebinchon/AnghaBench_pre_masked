
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snapshot_handle {scalar_t__ cur; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_1(struct snapshot_handle *VAR_2)
{
 return !(!VAR_0 || !FUNC_0() ||
   VAR_2->cur <= VAR_1 + VAR_0);
}
