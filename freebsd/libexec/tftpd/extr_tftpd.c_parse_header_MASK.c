
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct formats {int * f_mode; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct formats* VAR_4 ;
 int FUNC_1 (int,char*,int ) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,char*,...) ;
 char FUNC_6 (char) ;

__attribute__((used)) static char *
FUNC_7(int VAR_5, char *VAR_6, ssize_t VAR_7,
 char **VAR_8, char **VAR_9)
{
 char *VAR_10;
 int VAR_11;
 struct formats *VAR_12;

 *VAR_9 = ((void*)0);
 VAR_10 = VAR_6;

 VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_7);
 if (VAR_11 >= VAR_3) {
  FUNC_5(VAR_1, "Bad option - filename too long");
  FUNC_3(VAR_5, VAR_0);
  FUNC_0(1);
 }
 *VAR_8 = VAR_6;
 FUNC_5(VAR_2, "Filename: '%s'", *VAR_8);
 VAR_10 += VAR_11;

 VAR_11 = FUNC_1(VAR_5, VAR_10, VAR_7);
 *VAR_9 = VAR_10;
 VAR_10 += VAR_11;


 for (VAR_10 = *VAR_9; *VAR_10; VAR_10++)
  if (FUNC_2(*VAR_10))
   *VAR_10 = FUNC_6(*VAR_10);
 for (VAR_12 = VAR_4; VAR_12->f_mode; VAR_12++)
  if (FUNC_4(VAR_12->f_mode, *VAR_9) == 0)
   break;
 if (VAR_12->f_mode == ((void*)0)) {
  FUNC_5(VAR_1,
      "Bad option - Unknown transfer mode (%s)", *VAR_9);
  FUNC_3(VAR_5, VAR_0);
  FUNC_0(1);
 }
 FUNC_5(VAR_2, "Mode: '%s'", *VAR_9);

 return (VAR_10 + 1);
}
