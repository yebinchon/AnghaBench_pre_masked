
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mulaw_priv {int copy_ofs; int native_ofs; scalar_t__ flip; scalar_t__ cvt_endian; int copy_bytes; } ;


 int FUNC_0 (char*,unsigned char*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline signed short FUNC_2(struct mulaw_priv *VAR_0,
          unsigned char *VAR_1)
{
 u16 VAR_2 = 0;
 FUNC_0((char *)&VAR_2 + VAR_0->copy_ofs, VAR_1 + VAR_0->native_ofs,
        VAR_0->copy_bytes);
 if (VAR_0->cvt_endian)
  VAR_2 = FUNC_1(VAR_2);
 VAR_2 ^= VAR_0->flip;
 return (signed short)VAR_2;
}
