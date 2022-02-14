
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bearer_name {int if_name; int media_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(const char *VAR_4,
    struct bearer_name *VAR_5)
{
 char VAR_6[VAR_0];
 char *VAR_7;
 char *VAR_8;
 u32 VAR_9;
 u32 VAR_10;



 VAR_6[VAR_0 - 1] = 0;

 FUNC_3(VAR_6, VAR_4, VAR_0);
 if (VAR_6[VAR_0 - 1] != 0)
  return 0;



 VAR_7 = VAR_6;
 if ((VAR_8 = FUNC_0(VAR_7, ':')) == ((void*)0))
  return 0;
 *(VAR_8++) = 0;
 VAR_9 = VAR_8 - VAR_7;
 VAR_10 = FUNC_2(VAR_8) + 1;



 if ((VAR_9 <= 1) || (VAR_9 > VAR_2) ||
     (VAR_10 <= 1) || (VAR_10 > VAR_1) ||
     (FUNC_4(VAR_7, VAR_3) != (VAR_9 - 1)) ||
     (FUNC_4(VAR_8, VAR_3) != (VAR_10 - 1)))
  return 0;



 if (VAR_5) {
  FUNC_1(VAR_5->media_name, VAR_7);
  FUNC_1(VAR_5->if_name, VAR_8);
 }
 return 1;
}
