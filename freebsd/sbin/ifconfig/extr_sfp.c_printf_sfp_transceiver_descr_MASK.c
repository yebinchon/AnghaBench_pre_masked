
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (int ,char,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (struct i2c_info*,int ,int ,int,char*) ;

__attribute__((used)) static void
FUNC_3(struct i2c_info *VAR_8, char *VAR_9, size_t VAR_10)
{
 char VAR_11[12];
 const char *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16;

 VAR_12 = ((void*)0);
 VAR_13 = ((void*)0);
 VAR_14 = ((void*)0);
 VAR_15 = ((void*)0);
 VAR_16 = ((void*)0);


 FUNC_2(VAR_8, VAR_0, VAR_1, 8, &VAR_11[3]);


 VAR_12 = FUNC_0(VAR_3, VAR_11[3], 1);
 if (VAR_12 == ((void*)0)) {

  VAR_12 = FUNC_0(VAR_4, VAR_11[6], 1);
 }

 VAR_13 = FUNC_0(VAR_5, VAR_11[7], 1);
 VAR_14 = FUNC_0(VAR_2, VAR_11[7] << 8 | VAR_11[8], 2);
 VAR_15 = FUNC_0(VAR_6, VAR_11[9], 1);
 VAR_16 = FUNC_0(VAR_7, VAR_11[10], 1);

 FUNC_1("Class: %s\n", VAR_12);
 FUNC_1("Length: %s\n", VAR_13);
 FUNC_1("Tech: %s\n", VAR_14);
 FUNC_1("Media: %s\n", VAR_15);
 FUNC_1("Speed: %s\n", VAR_16);
}
