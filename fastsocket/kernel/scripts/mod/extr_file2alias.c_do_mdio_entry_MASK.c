
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_device_id {int phy_id_mask; int phy_id; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1,
    struct mdio_device_id *VAR_2, char *VAR_3)
{
 int VAR_4;

 VAR_3 += FUNC_0(VAR_3, VAR_0);

 for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
  if (!((VAR_2->phy_id_mask >> (31-VAR_4)) & 1))
   *(VAR_3++) = '?';
  else if ((VAR_2->phy_id >> (31-VAR_4)) & 1)
   *(VAR_3++) = '1';
  else
   *(VAR_3++) = '0';
 }


 *VAR_3 = 0;

 return 1;
}
