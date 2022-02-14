
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sftp_conn {int dummy; } ;


 char* FUNC_0 (struct sftp_conn*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sftp_conn*,char const*,char*,int ,int,int,int,int) ;

int
FUNC_4(struct sftp_conn *VAR_0, const char *VAR_1, const char *VAR_2,
    int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 char *VAR_7;
 int VAR_8;

 if ((VAR_7 = FUNC_0(VAR_0, VAR_2)) == ((void*)0)) {
  FUNC_1("Unable to canonicalize path \"%s\"", VAR_2);
  return -1;
 }

 VAR_8 = FUNC_3(VAR_0, VAR_1, VAR_7, 0, VAR_3,
     VAR_4, VAR_5, VAR_6);

 FUNC_2(VAR_7);
 return VAR_8;
}
