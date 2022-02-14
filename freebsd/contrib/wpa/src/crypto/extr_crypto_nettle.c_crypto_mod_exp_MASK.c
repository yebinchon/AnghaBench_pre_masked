
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int mpz_t ;


 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int *,size_t*,int,int,int,int ,int ) ;
 int FUNC_2 (int ,size_t,int,int,int,int ,int const*) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 size_t FUNC_5 (int ,int) ;

int FUNC_6(const u8 *VAR_0, size_t VAR_1,
     const u8 *VAR_2, size_t VAR_3,
     const u8 *VAR_4, size_t VAR_5,
     u8 *VAR_6, size_t *VAR_7)
{
 mpz_t VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12 = -1;
 size_t VAR_13;

 FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11, ((void*)0));
 FUNC_2(VAR_8, VAR_1, 1, 1, 1, 0, VAR_0);
 FUNC_2(VAR_9, VAR_3, 1, 1, 1, 0, VAR_2);
 FUNC_2(VAR_10, VAR_5, 1, 1, 1, 0, VAR_4);

 FUNC_4(VAR_11, VAR_8, VAR_9, VAR_10);
 VAR_13 = FUNC_5(VAR_11, 2);
 VAR_13 = (VAR_13 + 7) / 8;
 if (*VAR_7 < VAR_13)
  goto error;
 FUNC_1(VAR_6, VAR_7, 1, 1, 1, 0, VAR_11);
 VAR_12 = 0;

error:
 FUNC_0(VAR_8, VAR_9, VAR_10, VAR_11, ((void*)0));
 return VAR_12;
}
