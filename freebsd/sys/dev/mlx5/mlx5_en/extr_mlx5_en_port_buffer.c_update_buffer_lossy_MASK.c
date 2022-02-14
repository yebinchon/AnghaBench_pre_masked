
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5e_priv {int dummy; } ;
struct mlx5e_port_buffer {TYPE_1__* buffer; } ;
struct TYPE_2__ {int lossy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5e_priv*,struct mlx5e_port_buffer*,int ) ;

__attribute__((used)) static int FUNC_1(struct mlx5e_priv *VAR_2, unsigned int VAR_3,
          u8 VAR_4, u8 *VAR_5, u32 VAR_6,
          struct mlx5e_port_buffer *VAR_7,
          bool *VAR_8)
{
 bool VAR_9 = 0;
 u8 VAR_10;
 u8 VAR_11;
 u8 VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  VAR_11 = 0;
  VAR_10 = 0;

  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   if (VAR_5[VAR_13] != VAR_15)
    continue;

   VAR_11++;
   VAR_10 += !(VAR_4 & (1 << VAR_13));
  }

  if (VAR_10 == VAR_11)
   VAR_12 = 1;
  else
   VAR_12 = 0;

  if (VAR_12 != VAR_7->buffer[VAR_15].lossy) {
   VAR_7->buffer[VAR_15].lossy = VAR_12;
   VAR_9 = 1;
  }
 }

 if (VAR_9) {
  VAR_14 = FUNC_0(VAR_2, VAR_7, VAR_6);
  if (VAR_14)
   return VAR_14;

  *VAR_8 = 1;
 }

 return 0;
}
