
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct direct {scalar_t__ d_ino; } ;
typedef scalar_t__ ino_t ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char const*) ;
 struct direct* FUNC_2 (char const*) ;
 int VAR_1 ;

ino_t
FUNC_3(const char *VAR_2)
{
 struct direct *VAR_3;
 ino_t VAR_4;

 VAR_4 = ((VAR_3 = FUNC_2(VAR_2)) == ((void*)0)) ? 0 : VAR_3->d_ino;

 if (VAR_4 == 0 || FUNC_0(VAR_4, VAR_0) == 0)
  FUNC_1(VAR_1, "%s is not on the tape\n", VAR_2);
 return (VAR_4);
}
