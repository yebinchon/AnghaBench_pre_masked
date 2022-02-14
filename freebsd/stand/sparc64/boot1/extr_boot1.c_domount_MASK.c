
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_3)
{

 if ((VAR_1 = FUNC_1(VAR_3)) == -1) {
  FUNC_2("domount: can't open device\n");
  return (-1);
 }

 VAR_2 = &VAR_0;
 if (FUNC_0(0, ((void*)0), 0)) {
  FUNC_2("domount: can't read superblock\n");
  return (-1);
 }

 return (0);
}
