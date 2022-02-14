
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned char) ;
 int * FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (unsigned int,int *) ;
 int VAR_2 ;
 char* FUNC_8 (int ) ;
 char* FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char**,int ) ;
 long FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(char *VAR_3)
{
 gid_t *VAR_4;
 long VAR_5;
 char *VAR_6, *VAR_7;
 unsigned VAR_8;

 VAR_5 = FUNC_11(VAR_0);
 FUNC_0(VAR_5 > 0);
 VAR_4 = FUNC_5(sizeof(*VAR_4) * VAR_5);
 FUNC_0(VAR_4 != ((void*)0));
 for (VAR_8 = 0, VAR_6 = FUNC_9(VAR_3, ","); VAR_6 != ((void*)0);
     VAR_6 = FUNC_9(((void*)0), ","), VAR_8++) {
  if ((long)VAR_8 >= VAR_5) {
   FUNC_2(VAR_2, "too many gids\n");
   FUNC_1(1);
  }
  VAR_4[VAR_8] = FUNC_10(VAR_6, &VAR_7, 0);
  if (*VAR_7 != '\0' && !FUNC_4((unsigned char)*VAR_7)) {
   FUNC_2(VAR_2, "invalid gid '%s' - number expected\n",
       VAR_6);
   FUNC_1(1);
  }
 }
 if (FUNC_7(VAR_8, VAR_4) < 0) {
  FUNC_2(VAR_2, "cannot change groups: %s\n", FUNC_8(VAR_1));
  FUNC_1(1);
 }
 if (FUNC_6(VAR_4[0]) < 0) {
  FUNC_2(VAR_2, "cannot change effective gid: %s\n",
      FUNC_8(VAR_1));
  FUNC_1(1);
 }
 FUNC_3(VAR_4);
}
