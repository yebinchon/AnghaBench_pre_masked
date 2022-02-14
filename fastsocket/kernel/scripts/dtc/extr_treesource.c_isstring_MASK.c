
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char*,char) ;

__attribute__((used)) static int FUNC_2(char VAR_0)
{
 return (FUNC_0(VAR_0)
  || (VAR_0 == '\0')
  || FUNC_1("\a\b\t\n\v\f\r", VAR_0));
}
