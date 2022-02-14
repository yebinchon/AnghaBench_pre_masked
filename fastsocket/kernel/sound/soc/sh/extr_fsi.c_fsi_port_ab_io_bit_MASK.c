
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsi_priv {int dummy; } ;


 int FUNC_0 (struct fsi_priv*) ;

__attribute__((used)) static u32 FUNC_1(struct fsi_priv *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3;

 if (VAR_2)
  VAR_3 = VAR_1 ? (1 << 0) : (1 << 4);
 else
  VAR_3 = VAR_1 ? (1 << 8) : (1 << 12);

 return VAR_3;
}
