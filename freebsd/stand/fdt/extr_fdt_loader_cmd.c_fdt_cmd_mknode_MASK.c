
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,char*) ;
 scalar_t__ FUNC_1 (char**,char**,int*) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_5, char *VAR_6[])
{
 int VAR_7, VAR_8;
 char *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);

 if (VAR_5 > 2)
  VAR_9 = VAR_6[2];
 else {
  FUNC_2(VAR_3, "no node name specified");
  return (VAR_0);
 }

 if (FUNC_1(&VAR_9, &VAR_10, &VAR_7) != 0)
  return (VAR_0);

 VAR_8 = FUNC_0(VAR_4, VAR_7, VAR_10);

 if (VAR_8 < 0) {
  if (VAR_8 == -VAR_2)
   FUNC_2(VAR_3,
       "Device tree blob is too small!\n");
  else
   FUNC_2(VAR_3,
       "Could not add node!\n");
  return (VAR_0);
 }
 return (VAR_1);
}
