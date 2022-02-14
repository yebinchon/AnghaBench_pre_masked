
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,int *,int ,unsigned long) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,char const*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(const char* VAR_5, X509* VAR_6)
{
 if(VAR_4 == 0 || VAR_4 == 1) return;
 if(VAR_4 == 2) {
  if(VAR_5) FUNC_2("%s\n", VAR_5);
  FUNC_0(VAR_3, VAR_6, 0, (unsigned long)-1
   ^(VAR_1
   |VAR_0|VAR_2));
  return;
 }
 if(VAR_5) FUNC_2("%s\n", VAR_5);
 FUNC_1(VAR_3, VAR_6);
}
