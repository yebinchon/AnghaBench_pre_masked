
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sftp_conn {int dummy; } ;
typedef int Attrib ;


 char* FUNC_0 (struct sftp_conn*,char const*) ;
 int FUNC_1 (struct sftp_conn*,char*,char const*,int ,int *,int,int,int,int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;

int
FUNC_4(struct sftp_conn *VAR_0, const char *VAR_1, const char *VAR_2,
    Attrib *VAR_3, int VAR_4, int VAR_5, int VAR_6,
    int VAR_7)
{
 char *VAR_8;
 int VAR_9;

 if ((VAR_8 = FUNC_0(VAR_0, VAR_1)) == ((void*)0)) {
  FUNC_2("Unable to canonicalize path \"%s\"", VAR_1);
  return -1;
 }

 VAR_9 = FUNC_1(VAR_0, VAR_8, VAR_2, 0,
     VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_3(VAR_8);
 return VAR_9;
}
