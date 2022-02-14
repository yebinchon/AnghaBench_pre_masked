
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Error_Map {int Error_Code; char* Error_String; } ;


 struct Error_Map* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static char *
FUNC_1(int VAR_2)
{
 const struct Error_Map *VAR_3 = VAR_0;
 static char VAR_4[64];
 while (VAR_3->Error_Code >= 0) {
  if (VAR_3->Error_Code == (VAR_2 & VAR_1))
   return VAR_3->Error_String;
  VAR_3++;
 }
 FUNC_0(VAR_4, sizeof VAR_4, "Unknown (0x%08x)", VAR_2);
 return VAR_4;
}
