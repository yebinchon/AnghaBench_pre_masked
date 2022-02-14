
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(char *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;

 FUNC_0(("docd(\"%s\", %d, %d) called\n", VAR_3, VAR_4, VAR_5));


 if ((VAR_5 || (VAR_6 = FUNC_1(VAR_3)) < 0) && (VAR_6 = FUNC_2(VAR_3)) < 0)
  return (-1);

 if (VAR_4 && VAR_1 && VAR_0) {
  FUNC_4("%s\n", VAR_0);






  FUNC_3(VAR_2);
  FUNC_5(VAR_2);
 }

 return (VAR_6);
}
