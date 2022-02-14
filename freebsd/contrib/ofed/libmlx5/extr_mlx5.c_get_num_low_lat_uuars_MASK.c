
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(int VAR_2)
{
 char *VAR_3;
 int VAR_4 = 4;

 VAR_3 = FUNC_1("MLX5_NUM_LOW_LAT_UUARS");
 if (VAR_3)
  VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 < 0)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_4, VAR_2 - VAR_1);
 return VAR_4;
}
