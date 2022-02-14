
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kv {char const* name; int v; } ;
typedef int buffer ;


 struct kv* VAR_0 ;
 int FUNC_0 (char*,int,char*,int) ;

const char *
FUNC_1(uint32_t VAR_1)
{
 static char VAR_2[32];
 struct kv *VAR_3 = VAR_0;

 while (VAR_3->name != ((void*)0)) {
  if (VAR_3->v == VAR_1)
   return (VAR_3->name);
  VAR_3++;
 }

 FUNC_0(VAR_2, sizeof(VAR_2), "%#x", VAR_1);
 return (VAR_2);
}
