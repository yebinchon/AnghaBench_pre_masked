
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dev_file ;


 int FUNC_0 (char*,char const*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,char const*,int) ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char const*,int) ;
 int VAR_9 ;
 int FUNC_3 (int,int ,int *) ;
 int VAR_10 ;
 int FUNC_4 (char*,int) ;
 char* FUNC_5 (char const*,int*) ;
 int FUNC_6 (char*,int,char*,char*,int) ;
 int FUNC_7 (int ) ;

int FUNC_8(const char *VAR_11, int VAR_12)
{
 char VAR_13[VAR_7];
 int VAR_14, VAR_15;

 FUNC_1("ca %s port %d", VAR_11, VAR_12);

 if (!(VAR_11 = FUNC_5(VAR_11, &VAR_12)))
  return -VAR_2;

 FUNC_0("opening %s port %d", VAR_11, VAR_12);

 if ((VAR_14 = FUNC_2(VAR_11, VAR_12)) < 0)
  return -VAR_0;

 FUNC_6(VAR_13, sizeof(VAR_13), "%s/umad%d",
   VAR_6, VAR_14);

 if ((VAR_15 = FUNC_4(VAR_13, VAR_5 | VAR_4)) < 0) {
  FUNC_0("open %s failed: %s", VAR_13, FUNC_7(VAR_9));
  return -VAR_1;
 }

 if (VAR_8 > 5 || !FUNC_3(VAR_15, VAR_3, ((void*)0)))
  VAR_10 = 1;
 else
  VAR_10 = 0;

 FUNC_0("opened %s fd %d portid %d", VAR_13, VAR_15, VAR_14);
 return VAR_15;
}
