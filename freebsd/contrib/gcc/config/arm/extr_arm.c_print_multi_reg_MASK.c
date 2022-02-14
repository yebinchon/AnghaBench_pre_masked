
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char const*,unsigned int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (char*,int *) ;

__attribute__((used)) static void
FUNC_4 (FILE *VAR_3, const char *VAR_4, unsigned VAR_5,
   unsigned long VAR_6)
{
  unsigned VAR_7;
  bool VAR_8 = VAR_0;

  FUNC_2 ('\t', VAR_3);
  FUNC_0 (VAR_3, VAR_4, VAR_5);
  FUNC_3 (", {", VAR_3);

  for (VAR_7 = 0; VAR_7 <= VAR_1; VAR_7++)
    if (VAR_6 & (1 << VAR_7))
      {
 if (VAR_8)
   FUNC_1 (VAR_3, ", ");

 FUNC_0 (VAR_3, "%r", VAR_7);
 VAR_8 = VAR_2;
      }

  FUNC_1 (VAR_3, "}\n");
}
