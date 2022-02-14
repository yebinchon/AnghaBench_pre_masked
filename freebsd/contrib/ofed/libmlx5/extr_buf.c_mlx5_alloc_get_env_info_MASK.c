
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 int FUNC_4 (char*,char*,char const*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(int *VAR_3,
        int *VAR_4,
        const char *VAR_5)

{
 char *VAR_6;
 int VAR_7;
 char VAR_8[128];


 *VAR_3 = VAR_0;
 *VAR_4 = VAR_1;

 FUNC_3(VAR_8, sizeof(VAR_8), "%s_MAX_LOG2_CONTIG_BSIZE", VAR_5);
 VAR_6 = FUNC_2(VAR_8);
 if (VAR_6) {
  VAR_7 = FUNC_0(VAR_6);
  if (VAR_7 <= VAR_0 &&
      VAR_7 >= VAR_1)
   *VAR_3 = VAR_7;
  else
   FUNC_1(VAR_2, "Invalid value %d for %s\n",
    VAR_7, VAR_8);
 }
 FUNC_4(VAR_8, "%s_MIN_LOG2_CONTIG_BSIZE", VAR_5);
 VAR_6 = FUNC_2(VAR_8);
 if (VAR_6) {
  VAR_7 = FUNC_0(VAR_6);
  if (VAR_7 >= VAR_1 &&
      VAR_7 <= *VAR_3)
   *VAR_4 = VAR_7;
  else
   FUNC_1(VAR_2, "Invalid value %d for %s\n",
    VAR_7, VAR_8);
 }
}
