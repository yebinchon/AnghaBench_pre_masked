
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*,int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,char const*,char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;

void
FUNC_3(const char *VAR_8, const char *VAR_9, int VAR_10)
{
 int VAR_11 = VAR_6;
 char VAR_12[VAR_2 + VAR_0 + VAR_1 * 1024];

 FUNC_2(VAR_12, VAR_8, VAR_9);

 if (VAR_10 >= 0 && VAR_10 <= 100)
  VAR_6 = VAR_11 = VAR_10;
 VAR_5 = FUNC_0(VAR_5, VAR_7 == ((void*)0) ? "" : VAR_7,
     VAR_12, VAR_3, VAR_4, VAR_11);
 FUNC_1(VAR_5, VAR_11);
}
