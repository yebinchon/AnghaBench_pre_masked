
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 size_t FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,size_t) ;

__attribute__((used)) static bool
FUNC_6(char *VAR_2, char *VAR_3)
{
    bool VAR_4 = VAR_0;
    if (VAR_2 != 0 && VAR_3 != 0) {
 int VAR_5 = FUNC_2(VAR_2);
 int VAR_6 = FUNC_2(VAR_3);
 size_t VAR_7;
 size_t VAR_8;

 FUNC_0(VAR_1, ("similar_sgr:\n\t%s\n\t%s",
       FUNC_1(1, VAR_2),
       FUNC_1(2, VAR_3)));
 if (VAR_5 != 0 && VAR_6 != 0 && VAR_5 == VAR_6) {
     VAR_2 += VAR_5;
     VAR_3 += VAR_6;
     if (*VAR_2 != *VAR_3) {
  VAR_2 = FUNC_3(VAR_2);
  VAR_3 = FUNC_3(VAR_3);
     }
 }
 VAR_7 = FUNC_4(VAR_2);
 VAR_8 = FUNC_4(VAR_3);
 if (VAR_7 && VAR_8) {
     if (VAR_7 > VAR_8)
  VAR_4 = (FUNC_5(VAR_2, VAR_3, VAR_8) == 0);
     else
  VAR_4 = (FUNC_5(VAR_2, VAR_3, VAR_7) == 0);
 }
 FUNC_0(VAR_1, ("...similar_sgr: %d\n\t%s\n\t%s", VAR_4,
       FUNC_1(1, VAR_2),
       FUNC_1(2, VAR_3)));
    }
    return VAR_4;
}
