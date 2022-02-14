
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsi_priv {int chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsi_priv*,int) ;

__attribute__((used)) static int FUNC_1(struct fsi_priv *VAR_2, int VAR_3)
{
 u32 VAR_4;
 u32 VAR_5 = VAR_3 ? VAR_1 : VAR_0;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_2, VAR_5);
 VAR_6 = 0x1ff & (VAR_4 >> 8);
 VAR_6 *= VAR_2->chan;

 return VAR_6;
}
