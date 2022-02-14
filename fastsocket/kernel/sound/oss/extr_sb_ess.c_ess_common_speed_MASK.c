
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ submodel; int caps; scalar_t__ duplex; } ;
typedef TYPE_1__ sb_devc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int,int,int,int*,int*) ;
 int FUNC_1 (int,int,int*,int*) ;

__attribute__((used)) static void FUNC_2 (sb_devc *VAR_6, int *VAR_7, int *VAR_8)
{
 int VAR_9 = 0, VAR_10;

 if (VAR_6->duplex) {



  if (VAR_6->submodel == VAR_5) {
   VAR_10 = 0x80 | FUNC_1 (795500, 256, VAR_7, &VAR_9);
  } else {
   VAR_10 = 0x80 | FUNC_1 (795500, 128, VAR_7, &VAR_9);
  }
 } else if(VAR_6->caps & VAR_4) {
  if (VAR_6->submodel == VAR_5) {
   FUNC_0(397700, 128, 795500, 256,
      &VAR_10, VAR_7);
  } else {
   FUNC_0(VAR_2, 128, VAR_3, 256,
      &VAR_10, VAR_7);
  }
 } else {
  if (*VAR_7 > 22000) {
   VAR_10 = 0x80 | FUNC_1 (VAR_0, 256, VAR_7, &VAR_9);
  } else {
   VAR_10 = 0x00 | FUNC_1 (VAR_1, 128, VAR_7, &VAR_9);
  }
 }
 *VAR_8 = VAR_10;
}
