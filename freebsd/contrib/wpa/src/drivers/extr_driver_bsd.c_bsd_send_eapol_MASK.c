
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bsd_driver_data {int sock_xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*,int ,int const*,size_t) ;
 int FUNC_1 (int ,char*,int const*,size_t) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2, const u8 *VAR_3, const u8 *VAR_4, size_t VAR_5,
        int VAR_6, const u8 *VAR_7, u32 VAR_8)
{
 struct bsd_driver_data *VAR_9 = VAR_2;

 FUNC_1(VAR_1, "TX EAPOL", VAR_4, VAR_5);

 return FUNC_0(VAR_9->sock_xmit, VAR_3, VAR_0, VAR_4,
         VAR_5);
}
