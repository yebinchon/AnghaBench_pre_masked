
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int leb_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int ,int,int,void*,int,int) ;
 int FUNC_2 (char*,int,int) ;

void FUNC_3(const struct ubifs_info *VAR_3, int VAR_4, int VAR_5,
         void *VAR_6)
{
 int VAR_7;

 FUNC_2("corruption at LEB %d:%d", VAR_4, VAR_5);
 if (VAR_2)
  return;
 VAR_7 = VAR_3->leb_size - VAR_5;
 if (VAR_7 > 8192)
  VAR_7 = 8192;
 FUNC_0("first %d bytes from LEB %d:%d", VAR_7, VAR_4, VAR_5);
 FUNC_1(VAR_1, "", VAR_0, 32, 4, VAR_6, VAR_7, 1);
}
