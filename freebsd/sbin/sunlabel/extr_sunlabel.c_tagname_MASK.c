
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tags {unsigned int id; char const* name; } ;


 struct tags* VAR_0 ;
 size_t FUNC_0 (struct tags*) ;
 int FUNC_1 (char*,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_2(unsigned int VAR_1)
{
 static char VAR_2[32];
 size_t VAR_3;
 struct tags *VAR_4;

 for (VAR_3 = 0, VAR_4 = VAR_0; VAR_3 < FUNC_0(VAR_0); VAR_3++, VAR_4++)
  if (VAR_4->id == VAR_1)
   return (VAR_4->name);

 FUNC_1(VAR_2, "%u", VAR_1);

 return (VAR_2);
}
