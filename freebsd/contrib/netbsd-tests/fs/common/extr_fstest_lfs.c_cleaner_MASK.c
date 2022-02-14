
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lfstestargs {char* ta_devpath; char ta_cleanerloop; char* ta_mntpath; int ta_hostpath; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const**) ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static void *
FUNC_4(void *VAR_4)
{
 char VAR_5[VAR_0];
 struct lfstestargs *VAR_6 = VAR_4;
 const char *VAR_7[7];
 char VAR_8[64];


 FUNC_3(VAR_5, "/dev/r%s", VAR_6->ta_devpath+5);
 FUNC_2(VAR_5, VAR_6->ta_hostpath, VAR_1);
 FUNC_3(VAR_8, "%p", &VAR_6->ta_cleanerloop);

 VAR_7[0] = "megamaid";
 VAR_7[1] = "-D";
 VAR_7[2] = "-S";
 VAR_7[3] = VAR_8;
 VAR_7[4] = VAR_6->ta_mntpath;
 VAR_7[5] = ((void*)0);


 VAR_3 = 1;
 VAR_2 = 1;

 FUNC_1(5, FUNC_0(VAR_7));

 return ((void*)0);
}
