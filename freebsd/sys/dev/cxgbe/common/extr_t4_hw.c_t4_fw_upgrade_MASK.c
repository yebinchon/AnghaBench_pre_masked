
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fw_hdr {int magic; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct adapter*,unsigned int,int) ;
 int FUNC_2 (struct adapter*,struct fw_hdr const*) ;
 int FUNC_3 (struct adapter*,unsigned int) ;
 int FUNC_4 (struct adapter*,int const*,unsigned int) ;

int FUNC_5(struct adapter *VAR_2, unsigned int VAR_3,
    const u8 *VAR_4, unsigned int VAR_5, int VAR_6)
{
 const struct fw_hdr *VAR_7 = (const struct fw_hdr *)VAR_4;
 unsigned int VAR_8 =
     FUNC_0(VAR_7->magic) == VAR_1;
 int VAR_9;

 if (!FUNC_2(VAR_2, VAR_7))
  return -VAR_0;

 if (!VAR_8) {
  VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_6);
  if (VAR_9 < 0 && !VAR_6)
   return VAR_9;
 }

 VAR_9 = FUNC_4(VAR_2, VAR_4, VAR_5);
 if (VAR_9 < 0 || VAR_8)
  return VAR_9;

 return FUNC_3(VAR_2, VAR_3);
}
