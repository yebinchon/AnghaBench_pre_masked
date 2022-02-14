
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct magic_set {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct magic_set*,char*,...) ;

int
FUNC_1(struct magic_set *VAR_4, size_t VAR_5)
{
 if (VAR_4->flags & VAR_2) {
  if ((VAR_4->flags & VAR_3) &&
      FUNC_0(VAR_4, "application/%s",
   VAR_5 ? "octet-stream" : "x-empty") == -1)
   return -1;
  return 1;
 }
 if (VAR_4->flags & VAR_0) {
  if (FUNC_0(VAR_4, "UNKNUNKN") == -1)
   return -1;
  return 1;
 }
 if (VAR_4->flags & VAR_1) {
  if (FUNC_0(VAR_4, "???") == -1)
   return -1;
  return 1;
 }
 return 0;
}
