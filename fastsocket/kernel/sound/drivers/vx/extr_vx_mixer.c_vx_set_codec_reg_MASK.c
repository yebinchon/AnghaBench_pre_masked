
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union vx_codec_data {int l; } ;
struct vx_core {int dummy; } ;


 int FUNC_0 (union vx_codec_data) ;
 int FUNC_1 (union vx_codec_data,int) ;
 int FUNC_2 (union vx_codec_data,int) ;
 int FUNC_3 (struct vx_core*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct vx_core *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 union vx_codec_data VAR_4;

 FUNC_0(VAR_4);
 FUNC_1(VAR_4, VAR_2);
 FUNC_2(VAR_4, VAR_3);
 FUNC_3(VAR_0, VAR_1, VAR_4.l);
}
