
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct partition {int dummy; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ __le16 ;
typedef int Sector ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct partition*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (struct block_device*,int ,int *) ;

__attribute__((used)) static bool FUNC_7 (struct block_device *VAR_2)
{
 Sector VAR_3;
 u8 *VAR_4;
 struct partition *VAR_5;
 int VAR_6;
 bool VAR_7 = 0;

 FUNC_0 (!VAR_2);

 VAR_4 = FUNC_6 (VAR_2, 0, &VAR_3);
 if (!VAR_4) {
  FUNC_3 ("Disk read failed.");
  return 0;
 }

 if (*(__le16*) (VAR_4 + 0x01FE) != FUNC_2 (VAR_1))
  goto out;

 VAR_5 = (struct partition*)(VAR_4 + 0x01BE);
 for (VAR_6 = 0; VAR_6 < 4; VAR_6++, VAR_5++)
  if (FUNC_1 (VAR_5) == VAR_0) {
   VAR_7 = 1;
   break;
  }

 if (VAR_7)
  FUNC_4 ("Found W2K dynamic disk partition type.");

out:
 FUNC_5 (VAR_3);
 return VAR_7;
}
