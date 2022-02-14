
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mulaw_priv {scalar_t__ native_bytes; scalar_t__ copy_bytes; int native_ofs; int copy_ofs; scalar_t__ cvt_endian; int flip; } ;


 int FUNC_0 (unsigned char*,char*,scalar_t__) ;
 int FUNC_1 (unsigned char*,int ,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct mulaw_priv *VAR_0,
         unsigned char *VAR_1, u16 VAR_2)
{
 VAR_2 ^= VAR_0->flip;
 if (VAR_0->cvt_endian)
  VAR_2 = FUNC_2(VAR_2);
 if (VAR_0->native_bytes > VAR_0->copy_bytes)
  FUNC_1(VAR_1, 0, VAR_0->native_bytes);
 FUNC_0(VAR_1 + VAR_0->native_ofs, (char *)&VAR_2 + VAR_0->copy_ofs,
        VAR_0->copy_bytes);
}
