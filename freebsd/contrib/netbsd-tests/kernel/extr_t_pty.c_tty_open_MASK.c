
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int ,int*) ;
 int FUNC_3 (char const*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_4)
{
 int VAR_5;

 if ((VAR_5 = FUNC_3(VAR_4, VAR_1, 0)) == -1)
  FUNC_1(VAR_0, "Couldn't open tty(4) device");
 FUNC_0(VAR_5);

 return VAR_5;
}
