
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_info {int z_size; int z_gy; int z_gx; int z_dx; int z_coeff; int z_dy; void** z_pcoeff; } ;
typedef int intmax_t ;
typedef int int64_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int,int,int,...) ;
 int FUNC_1 (void**,int ) ;
 void** FUNC_2 (int,int ,int) ;
 int VAR_9 ;
 void* FUNC_3 (int,int) ;

__attribute__((used)) static int
FUNC_4(struct z_info *VAR_10)
{
 int32_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;


 if (VAR_10->z_pcoeff != ((void*)0)) {
  FUNC_1(VAR_10->z_pcoeff, VAR_3);
  VAR_10->z_pcoeff = ((void*)0);
 }

 if (VAR_8 < 1)
  return (VAR_2);

 if (((int64_t)VAR_10->z_size * VAR_10->z_gy * 2) >
     VAR_8) {

  FUNC_0(VAR_9, "Polyphase entries exceed: [%d/%d] %d > %d\n",
      VAR_10->z_gx, VAR_10->z_gy,
      (intmax_t)VAR_10->z_size * VAR_10->z_gy * 2,
      VAR_8);

  return (VAR_0);
 }

 VAR_10->z_pcoeff = FUNC_2(sizeof(int32_t) *
     VAR_10->z_size * VAR_10->z_gy * 2, VAR_3, VAR_4 | VAR_5);
 if (VAR_10->z_pcoeff == ((void*)0))
  return (VAR_1);

 for (VAR_11 = 0; VAR_11 < VAR_10->z_gy; VAR_11++) {
  VAR_14 = VAR_11 * VAR_10->z_dx;
  VAR_12 = 0;
  for (VAR_13 = VAR_10->z_size; VAR_13 != 0; VAR_13--) {
   VAR_12 += VAR_14 >> VAR_7;
   VAR_14 &= VAR_6;
   VAR_15 = (VAR_11 * VAR_10->z_size * 2) +
       (VAR_10->z_size * 2) - VAR_13;
   VAR_10->z_pcoeff[VAR_15] =
       FUNC_3(VAR_14, VAR_10->z_coeff + VAR_12);
   VAR_14 += VAR_10->z_dy;
  }
  VAR_14 = VAR_10->z_dy - (VAR_11 * VAR_10->z_dx);
  VAR_12 = 0;
  for (VAR_13 = VAR_10->z_size; VAR_13 != 0; VAR_13--) {
   VAR_12 += VAR_14 >> VAR_7;
   VAR_14 &= VAR_6;
   VAR_15 = (VAR_11 * VAR_10->z_size * 2) + VAR_13 - 1;
   VAR_10->z_pcoeff[VAR_15] =
       FUNC_3(VAR_14, VAR_10->z_coeff + VAR_12);
   VAR_14 += VAR_10->z_dy;
  }
 }


 FUNC_0(VAR_9, "Polyphase: [%d/%d] %d entries\n",
     VAR_10->z_gx, VAR_10->z_gy, VAR_10->z_size * VAR_10->z_gy * 2);


 return (0);
}
