
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,char const*,int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const,int *) ;

__attribute__((used)) static void
FUNC_6(
 int VAR_0,
 size_t VAR_1,
 const char *VAR_2,
 int VAR_3,
 int VAR_4,
 FILE *VAR_5
 )
{
 const char *VAR_6;
 const char *VAR_7;




 VAR_6 = VAR_2;
 VAR_7 = VAR_2 + VAR_1;

 if (!VAR_4)
  (void) FUNC_0(VAR_5, "status=0x%04x,\n", VAR_3);

 while (VAR_6 < VAR_7) {
  if (*VAR_6 == '\r') {





   if (VAR_6 == (VAR_7 - 1) || *(VAR_6 + 1) != '\n')
       FUNC_3(1, VAR_6, VAR_5);
  } else if (FUNC_2(FUNC_4(VAR_6)) || FUNC_1(FUNC_4(VAR_6)))
   FUNC_5(*VAR_6, VAR_5);
  else
   FUNC_3(1, VAR_6, VAR_5);
  VAR_6++;
 }
}
