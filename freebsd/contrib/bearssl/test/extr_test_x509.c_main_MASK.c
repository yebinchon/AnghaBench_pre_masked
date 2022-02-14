
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 char* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char*,unsigned int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int VAR_8 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 () ;
 int VAR_9 ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (size_t) ;

int
FUNC_13(int VAR_10, const char *VAR_11[])
{
 size_t VAR_12;
 (void)VAR_10;
 (void)VAR_11;


 FUNC_7(VAR_0);

 VAR_6 = 0;
 VAR_7 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12 ++) {
  FUNC_8(&VAR_1[VAR_12]);
 }
 FUNC_10();

 FUNC_6("Maximum data stack usage:    %u\n", (unsigned)VAR_6);
 FUNC_6("Maximum return stack usage:  %u\n", (unsigned)VAR_7);

 FUNC_0(VAR_5, VAR_3);
 FUNC_0(VAR_9, VAR_4);
 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12 ++) {
  FUNC_4(&VAR_1[VAR_12]);
 }
 FUNC_11(VAR_1);

 return 0;
}
