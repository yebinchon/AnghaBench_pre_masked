
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchstr {char* part1; scalar_t__ ordering; scalar_t__ validated; int live_cond; scalar_t__ args; } ;


 int VAR_0 ;
 char** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int *) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char*) ;
 int VAR_3 ;
 struct switchstr* VAR_4 ;
 struct switchstr* FUNC_3 (struct switchstr*,int) ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_5)
{
  FUNC_1 (VAR_5);
  FUNC_0 (" ", 0, ((void*)0));

  if (VAR_2 > 0)
    {
      int VAR_6, VAR_7;

      VAR_7 = VAR_3;
      VAR_3 += VAR_2;
      VAR_4 = FUNC_3 (VAR_4,
      sizeof (struct switchstr) * (VAR_3 + 1));

      VAR_4[VAR_3] = VAR_4[VAR_7];
      for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
 {
   struct switchstr *VAR_8;


   if (VAR_1[VAR_6][0] != '-')
     FUNC_2 ("switch '%s' does not start with '-'", VAR_1[VAR_6]);

   VAR_8 = &VAR_4[VAR_6 + VAR_7];
   VAR_8->part1 = &VAR_1[VAR_6][1];
   VAR_8->args = 0;
   VAR_8->live_cond = VAR_0;
   VAR_8->validated = 0;
   VAR_8->ordering = 0;
 }
    }
}
