
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct yenta_chipinfo {scalar_t__ yc_id; char* yc_name; int yc_chiptype; } ;


 struct yenta_chipinfo* VAR_0 ;

__attribute__((used)) static int
FUNC_0(uint32_t VAR_1, const char **VAR_2)
{
 struct yenta_chipinfo *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->yc_id != 0 && VAR_1 != VAR_3->yc_id; ++VAR_3)
  continue;
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_3->yc_name;
 return (VAR_3->yc_chiptype);
}
