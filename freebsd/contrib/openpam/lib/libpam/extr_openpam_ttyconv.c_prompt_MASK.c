
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (int,int,char const*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(const char *VAR_5, char *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 if (FUNC_3(VAR_1)) {
  FUNC_1(VAR_4);



  VAR_8 = VAR_1;
  VAR_9 = VAR_2;
 } else {
  if ((VAR_8 = FUNC_4("/dev/tty", VAR_0)) < 0)

   return (FUNC_5(VAR_5, VAR_6));
  VAR_9 = VAR_8;
 }
 VAR_10 = FUNC_6(VAR_8, VAR_9, VAR_5, VAR_6, VAR_7);
 if (VAR_8 != VAR_1)
  FUNC_0(VAR_8);
 return (VAR_10);
}
