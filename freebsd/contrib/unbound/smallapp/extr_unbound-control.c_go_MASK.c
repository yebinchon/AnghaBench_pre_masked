
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {int remote_control_enable; } ;
typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct config_file* FUNC_4 () ;
 int FUNC_5 (struct config_file*) ;
 int FUNC_6 (struct config_file*,char const*,int *) ;
 int FUNC_7 (char*,struct config_file*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int,int,int,char**) ;
 int FUNC_10 (char*) ;
 int * FUNC_11 (struct config_file*) ;
 int * FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 (struct config_file*) ;

__attribute__((used)) static int
FUNC_15(const char* VAR_0, char* VAR_1, int VAR_2, int VAR_3, char* VAR_4[])
{
 struct config_file* VAR_5;
 int VAR_6, VAR_7;
 SSL_CTX* VAR_8;
 SSL* VAR_9;


 if(!(VAR_5 = FUNC_4()))
  FUNC_8("out of memory");
 if(!FUNC_6(VAR_5, VAR_0, ((void*)0)))
  FUNC_8("could not read config file");
 if(!VAR_5->remote_control_enable)
  FUNC_10("control-enable is 'no' in the config file.");



 VAR_8 = FUNC_11(VAR_5);


 VAR_6 = FUNC_7(VAR_1, VAR_5, VAR_3>0&&FUNC_13(VAR_4[0],"status")==0);
 VAR_9 = FUNC_12(VAR_8, VAR_6);


 VAR_7 = FUNC_9(VAR_9, VAR_6, VAR_2, VAR_3, VAR_4);

 if(VAR_9) FUNC_1(VAR_9);

 FUNC_2(VAR_6);



 if(VAR_8) FUNC_0(VAR_8);
 FUNC_5(VAR_5);
 return VAR_7;
}
