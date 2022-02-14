
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int* z; } ;
typedef TYPE_1__ p256_jacobian ;


 int FUNC_0 (int,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,unsigned char const*,size_t) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (unsigned char*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,unsigned char const*,size_t) ;
 int FUNC_7 (TYPE_1__*,unsigned char const*,size_t) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int*) ;

__attribute__((used)) static uint32_t
FUNC_10(unsigned char *VAR_0, const unsigned char *VAR_1, size_t VAR_2,
 const unsigned char *VAR_3, size_t VAR_4,
 const unsigned char *VAR_5, size_t VAR_6, int VAR_7)
{
 p256_jacobian VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11, VAR_12;
 int VAR_13;

 (void)VAR_7;
 VAR_10 = FUNC_3(&VAR_8, VAR_0, VAR_2);
 FUNC_6(&VAR_8, VAR_3, VAR_4);
 if (VAR_1 == ((void*)0)) {
  FUNC_7(&VAR_9, VAR_5, VAR_6);
 } else {
  VAR_10 &= FUNC_3(&VAR_9, VAR_1, VAR_2);
  FUNC_6(&VAR_9, VAR_5, VAR_6);
 }




 VAR_11 = FUNC_2(&VAR_8, &VAR_9);
 FUNC_9(VAR_8.z);
 VAR_12 = 0;
 for (VAR_13 = 0; VAR_13 < 20; VAR_13 ++) {
  VAR_12 |= VAR_8.z[VAR_13];
 }
 VAR_12 = FUNC_1(VAR_12, 0);
 FUNC_4(&VAR_9);
 FUNC_0(VAR_12 & ~VAR_11, &VAR_8, &VAR_9, sizeof VAR_9);
 FUNC_8(&VAR_8);
 FUNC_5(VAR_0, &VAR_8);
 VAR_10 &= ~(VAR_12 & VAR_11);
 return VAR_10;
}
