
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int x ;
typedef int u64 ;
typedef int u32 ;
typedef int t2 ;
typedef int r1 ;
typedef int i64 ;
struct TYPE_4__ {int r; int i; } ;
struct TYPE_5__ {int flags; TYPE_1__ u; } ;
typedef TYPE_2__ Mem ;


 int FUNC_0 (unsigned char const*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (double const*,int*,int) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static u32 FUNC_7(
  const unsigned char *VAR_3,
  u32 VAR_4,
  Mem *VAR_5
){
  u64 VAR_6 = FUNC_0(VAR_3);
  u32 VAR_7 = FUNC_0(VAR_3+4);
  VAR_6 = (VAR_6<<32) + VAR_7;
  if( VAR_4==6 ){


    VAR_5->u.i = *(i64*)&VAR_6;
    VAR_5->flags = VAR_0;
    FUNC_6( VAR_5->u.i<0 );
  }else{
    static const u64 VAR_8 = ((u64)0x3ff00000)<<32;
    static const double VAR_9 = 1.0;
    u64 VAR_10 = VAR_8;
    FUNC_5(VAR_10);
    FUNC_2( sizeof(VAR_9)==sizeof(VAR_10) && FUNC_3(&VAR_9, &VAR_10, sizeof(VAR_9))==0 );

    FUNC_2( sizeof(VAR_6)==8 && sizeof(VAR_5->u.r)==8 );
    FUNC_5(VAR_6);
    FUNC_4(&VAR_5->u.r, &VAR_6, sizeof(VAR_6));
    VAR_5->flags = FUNC_1(VAR_6) ? VAR_1 : VAR_2;
  }
  return 8;
}
