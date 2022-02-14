
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_handle {int dummy; } ;
typedef int bfd_boolean ;


 scalar_t__ FUNC_0 (struct ieee_handle*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct ieee_handle *VAR_0, int VAR_1)
{
  return (FUNC_0 (VAR_0, VAR_1 >> 8)
   && FUNC_0 (VAR_0, VAR_1 & 0xff));
}
