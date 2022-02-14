
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static char *FUNC_5(void)
{
 char VAR_5[VAR_0];
 char *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 off_t VAR_8;
 char VAR_9;

 for (;;) {
  VAR_8 = FUNC_3(VAR_3, &VAR_9, 1);
  if (VAR_8 < 0)
   FUNC_0("reading input file");

  if (!VAR_8)
   FUNC_0("no data");

  if (VAR_4) {
   int VAR_10 = FUNC_4(VAR_1, &VAR_9, 1);

   if (VAR_10 <= 0 || VAR_10 != VAR_8)
    FUNC_0("repiping input file string");
  }

  VAR_5[VAR_7++] = VAR_9;

  if (!VAR_9)
   break;
 }

 if (VAR_2)
  VAR_2 += VAR_7;

 VAR_6 = FUNC_1(VAR_7);
 FUNC_2(VAR_6, VAR_5, VAR_7);

 return VAR_6;
}
