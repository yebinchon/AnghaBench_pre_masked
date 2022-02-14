
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbintime_t ;
typedef int cloudabi_timestamp_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static sbintime_t
FUNC_0(cloudabi_timestamp_t VAR_2)
{
 cloudabi_timestamp_t VAR_3, VAR_4;

 VAR_3 = VAR_2 / 1000000000;
 VAR_4 = VAR_2 % 1000000000;
 if (VAR_3 > VAR_0)
  return (VAR_1);
 return ((VAR_3 << 32) + (VAR_4 << 32) / 1000000000);
}
