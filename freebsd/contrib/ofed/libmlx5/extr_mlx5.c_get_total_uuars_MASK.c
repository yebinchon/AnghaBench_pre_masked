
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(int VAR_6)
{
 int VAR_7 = VAR_3;
 int VAR_8;
 char *VAR_9;

 VAR_9 = FUNC_2("MLX5_TOTAL_UUARS");
 if (VAR_9)
  VAR_7 = FUNC_1(VAR_9);

 if (VAR_7 < 1)
  return -VAR_0;

 VAR_8 = VAR_6 / VAR_2 * VAR_5;
 VAR_7 = FUNC_3(VAR_8, VAR_7);
 VAR_7 = FUNC_0(VAR_7, VAR_5);
 if (VAR_7 > VAR_4)
  return -VAR_1;

 return VAR_7;
}
