
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *,int,int) ;
 scalar_t__ FUNC_3 (int *,size_t) ;
 scalar_t__ FUNC_4 (int const*,int ,char const*,int *,int,int *,size_t) ;
 scalar_t__ FUNC_5 (int const*,int ,char const*,int *,int,int *,size_t) ;
 scalar_t__ FUNC_6 (int const*,int ,char const*,int *,int,int *,size_t) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(const u8 *VAR_4, const char *VAR_5, const u8 *VAR_6,
     const u8 *VAR_7, u8 *VAR_8, size_t VAR_9)
{
 u8 VAR_10[VAR_0 + VAR_3 + 8 + VAR_2];
 u8 *VAR_11;
 int VAR_12 = 0;
 FUNC_2(VAR_10, 0, sizeof(VAR_10));
 FUNC_1(VAR_10, VAR_6, VAR_0);
 FUNC_1(VAR_10 + VAR_0, VAR_7, VAR_3);
 VAR_11 = VAR_10 + VAR_0 + VAR_3;
 FUNC_7(VAR_11);



 VAR_11 += 8;
 if (FUNC_3(VAR_11, VAR_9) < 0)
  VAR_12 = -1;
 if (FUNC_4(VAR_4, VAR_1, VAR_5, VAR_10, sizeof(VAR_10),
       VAR_8, VAR_9) < 0)
  VAR_12 = -1;



 FUNC_0(VAR_10, sizeof(VAR_10));

 return VAR_12;
}
