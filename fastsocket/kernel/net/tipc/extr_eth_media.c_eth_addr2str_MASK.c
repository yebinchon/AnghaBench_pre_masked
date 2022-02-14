
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unchar ;
struct tipc_media_addr {int dev_addr; } ;


 int FUNC_0 (char*,char*,int *) ;

__attribute__((used)) static char *FUNC_1(struct tipc_media_addr *VAR_0, char *VAR_1, int VAR_2)
{
 unchar *VAR_3 = (unchar *)&VAR_0->dev_addr;

 if (VAR_2 < 18)
  *VAR_1 = '\0';
 else
  FUNC_0(VAR_1, "%pM", VAR_3);
 return VAR_1;
}
