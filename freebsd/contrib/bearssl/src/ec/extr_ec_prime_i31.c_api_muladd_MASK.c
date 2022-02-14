
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int * c; } ;
typedef TYPE_1__ jacobian ;
typedef int curve_params ;


 int FUNC_0 (int,TYPE_1__*,TYPE_1__*,int) ;
 unsigned char* FUNC_1 (int,size_t*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int const*) ;
 int FUNC_5 (TYPE_1__*,unsigned char const*,size_t,int const*) ;
 int FUNC_6 (TYPE_1__*,int const*) ;
 int FUNC_7 (unsigned char*,TYPE_1__*,int const*) ;
 int FUNC_8 (TYPE_1__*,unsigned char const*,size_t,int const*) ;

__attribute__((used)) static uint32_t
FUNC_9(unsigned char *VAR_0, const unsigned char *VAR_1, size_t VAR_2,
 const unsigned char *VAR_3, size_t VAR_4,
 const unsigned char *VAR_5, size_t VAR_6, int VAR_7)
{
 uint32_t VAR_8, VAR_9, VAR_10;
 const curve_params *VAR_11;
 jacobian VAR_12, VAR_13;







 VAR_11 = FUNC_3(VAR_7);
 VAR_8 = FUNC_5(&VAR_12, VAR_0, VAR_2, VAR_11);
 if (VAR_1 == ((void*)0)) {
  size_t VAR_14;

  VAR_1 = FUNC_1(VAR_7, &VAR_14);
 }
 VAR_8 &= FUNC_5(&VAR_13, VAR_1, VAR_2, VAR_11);
 FUNC_8(&VAR_12, VAR_3, VAR_4, VAR_11);
 FUNC_8(&VAR_13, VAR_5, VAR_6, VAR_11);
 VAR_9 = FUNC_4(&VAR_12, &VAR_13, VAR_11);
 FUNC_6(&VAR_13, VAR_11);
 VAR_10 = FUNC_2(VAR_12.c[2]);
 FUNC_0(VAR_10 & ~VAR_9, &VAR_12, &VAR_13, sizeof VAR_13);
 FUNC_7(VAR_0, &VAR_12, VAR_11);
 VAR_8 &= ~(VAR_10 & VAR_9);

 return VAR_8;
}
