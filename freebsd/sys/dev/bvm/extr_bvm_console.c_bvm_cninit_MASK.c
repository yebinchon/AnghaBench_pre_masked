
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct consdev*,char const) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(struct consdev *VAR_2)
{
 int VAR_3;
 const char *VAR_4 = "Using bvm console.\n";

 if (VAR_1 & VAR_0) {
  for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_4); VAR_3++)
   FUNC_0(VAR_2, VAR_4[VAR_3]);
 }
}
