
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ttls_avp_vendor {void* avp_length; void* avp_code; void* vendor_id; } ;
struct ttls_avp {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static u8 * FUNC_1(u8 *VAR_2, u32 VAR_3, u32 VAR_4,
        int VAR_5, size_t VAR_6)
{
 struct ttls_avp_vendor *VAR_7;
 u8 VAR_8;
 size_t VAR_9;

 VAR_7 = (struct ttls_avp_vendor *) VAR_2;
 VAR_8 = VAR_5 ? VAR_0 : 0;
 if (VAR_4) {
  VAR_8 |= VAR_1;
  VAR_9 = sizeof(*VAR_7);
  VAR_7->vendor_id = FUNC_0(VAR_4);
 } else {
  VAR_9 = sizeof(struct ttls_avp);
 }

 VAR_7->avp_code = FUNC_0(VAR_3);
 VAR_7->avp_length = FUNC_0(((u32) VAR_8 << 24) |
           ((u32) (VAR_9 + VAR_6)));

 return VAR_2 + VAR_9;
}
