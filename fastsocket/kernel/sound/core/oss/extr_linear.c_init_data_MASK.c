
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linear_priv {int dst_bytes; int cvt_endian; int copy_bytes; int copy_ofs; int src_ofs; int dst_ofs; int flip; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct linear_priv *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_5 = FUNC_5(VAR_1) / 8;
 VAR_6 = FUNC_5(VAR_2) / 8;
 VAR_3 = FUNC_2(VAR_1) > 0;
 VAR_4 = FUNC_2(VAR_2) > 0;

 VAR_0->dst_bytes = VAR_6;
 VAR_0->cvt_endian = VAR_3 != VAR_4;
 VAR_0->copy_bytes = VAR_5 < VAR_6 ? VAR_5 : VAR_6;
 if (VAR_3) {
  VAR_0->copy_ofs = 4 - VAR_0->copy_bytes;
  VAR_0->src_ofs = VAR_5 - VAR_0->copy_bytes;
 } else
  VAR_0->src_ofs = FUNC_3(VAR_1) / 8 -
   VAR_5;
 if (VAR_4)
  VAR_0->dst_ofs = 4 - VAR_0->dst_bytes;
 else
  VAR_0->dst_ofs = FUNC_3(VAR_2) / 8 -
   VAR_6;
 if (FUNC_4(VAR_1) !=
     FUNC_4(VAR_2)) {
  if (VAR_4)
   VAR_0->flip = FUNC_1(0x80000000);
  else
   VAR_0->flip = FUNC_0(0x80000000);
 }
}
