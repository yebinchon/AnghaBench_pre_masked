
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alias {char* name; struct alias* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct alias** VAR_4 ;
 int FUNC_0 (struct alias**) ;
 struct alias** FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct alias*) ;
 int FUNC_4 (struct alias**,int,int,int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
 int VAR_6, VAR_7;
 struct alias **VAR_8, *VAR_9;

 VAR_1;
 VAR_8 = FUNC_1(VAR_3 * sizeof(*VAR_8));
 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  for (VAR_9 = VAR_4[VAR_6]; VAR_9; VAR_9 = VAR_9->next)
   if (*VAR_9->name != '\0')
    VAR_8[VAR_7++] = VAR_9;
 FUNC_4(VAR_8, VAR_3, sizeof(*VAR_8), VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  FUNC_3(VAR_8[VAR_6]);
  if (FUNC_2())
   break;
 }
 FUNC_0(VAR_8);
 VAR_2;
}
