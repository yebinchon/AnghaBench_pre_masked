
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 () ;
 int FUNC_1 (char*,int,char*,char const*,char const*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(const char *VAR_6, bool VAR_7,
    bool VAR_8)
{
 char VAR_9[VAR_4];
 const char *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_0();
 if (VAR_10 == ((void*)0)) {
  FUNC_4("Debugfs is not mounted.\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_1(VAR_9, VAR_4, "%s/%s", VAR_10, VAR_6);
 if (VAR_11 >= 0) {
  FUNC_3("Opening %s write=%d\n", VAR_9, VAR_7);
  if (VAR_7 && !VAR_5)
   VAR_11 = FUNC_2(VAR_9, VAR_3, VAR_1);
  else
   VAR_11 = FUNC_2(VAR_9, VAR_2, 0);

  if (VAR_11 < 0)
   FUNC_5(VAR_9, VAR_8);
 }
 return VAR_11;
}
