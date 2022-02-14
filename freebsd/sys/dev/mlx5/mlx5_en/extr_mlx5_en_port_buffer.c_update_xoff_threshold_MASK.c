
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlx5e_priv {int ifp; } ;
struct mlx5e_port_buffer {TYPE_1__* buffer; } ;
struct TYPE_2__ {scalar_t__ xoff; scalar_t__ size; scalar_t__ xon; scalar_t__ lossy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct mlx5e_priv *VAR_4,
    struct mlx5e_port_buffer *VAR_5, u32 VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_5->buffer[VAR_7].lossy) {
   VAR_5->buffer[VAR_7].xoff = 0;
   VAR_5->buffer[VAR_7].xon = 0;
   continue;
  }

  if (VAR_5->buffer[VAR_7].size <
      (VAR_6 + VAR_3 + (1 << VAR_1))) {
   FUNC_0(VAR_4->ifp,
 "non-lossy buffer %d size %d less than xoff threshold %d\n",
       VAR_7, VAR_5->buffer[VAR_7].size,
       VAR_6 + VAR_3 +
       (1 << VAR_1));
   return -VAR_0;
  }

  VAR_5->buffer[VAR_7].xoff = VAR_5->buffer[VAR_7].size - VAR_6;
  VAR_5->buffer[VAR_7].xon =
   VAR_5->buffer[VAR_7].xoff - VAR_3;
 }

 return 0;
}
