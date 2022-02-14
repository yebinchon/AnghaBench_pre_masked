
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ ssize_t ;
typedef int buf ;


 int FUNC_0 (int ,char*,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,char*,size_t) ;

ssize_t
FUNC_2(int VAR_1, vm_offset_t VAR_2, size_t VAR_3)
{
 ssize_t VAR_4, VAR_5;
 size_t VAR_6;
 char VAR_7[4096];

 VAR_4 = 0;
 while (VAR_3 > 0) {
  VAR_6 = VAR_3;
  if (VAR_6 > sizeof(VAR_7))
   VAR_6 = sizeof(VAR_7);
  VAR_5 = FUNC_1(VAR_1, VAR_7, VAR_6);
  if (VAR_5 == 0)
   break;
  if (VAR_5 < 0)
   return (VAR_5);
  FUNC_0(VAR_0, VAR_7, VAR_2, VAR_5);
  VAR_3 -= VAR_5;
  VAR_4 += VAR_5;
  VAR_2 += VAR_5;
 }
 return (VAR_4);
}
