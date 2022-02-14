
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int va_flags; int va_mode; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int,int,int *,int *,int *,int) ;

__attribute__((used)) static int
FUNC_6(video_adapter_t *VAR_3, int VAR_4, int VAR_5,
     u_char *VAR_6, u_char *VAR_7, u_char *VAR_8, u_char *VAR_9)
{
 u_char *VAR_10;
 u_char *VAR_11;
 u_char *VAR_12;
 int VAR_13;
 int VAR_14;

 if (VAR_4 < 0 || VAR_4 >= 256 || VAR_5 < 0 || VAR_5 > 256)
  return (1);
 if ((VAR_4 + VAR_5) > 256)
  return (1);
 if (!FUNC_0(VAR_3->va_mode))
  return (1);

 VAR_13 = (VAR_3->va_flags & VAR_2) != 0 ? 8 : 6;
 VAR_10 = FUNC_4(VAR_5 * 3, VAR_0, VAR_1);
 VAR_11 = VAR_10 + VAR_5;
 VAR_12 = VAR_11 + VAR_5;
 VAR_14 = FUNC_5(VAR_4, VAR_5, VAR_10, VAR_11, VAR_12, VAR_13);
 if (VAR_14 == 0) {
  FUNC_2(VAR_10, VAR_6, VAR_5);
  FUNC_2(VAR_11, VAR_7, VAR_5);
  FUNC_2(VAR_12, VAR_8, VAR_5);
  if (VAR_9 != ((void*)0)) {
   FUNC_1(VAR_10, VAR_5);
   FUNC_2(VAR_10, VAR_9, VAR_5);
  }
 }
 FUNC_3(VAR_10, VAR_0);

 return (VAR_14);
}
