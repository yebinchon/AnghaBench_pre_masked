
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioc_servercs; int ioc_localcs; } ;
struct smb_ctx {TYPE_1__ ct_ssn; } ;


 int VAR_0 ;
 char* FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char const*,...) ;
 char* FUNC_3 (char const*,char) ;
 char* FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (char*) ;

int
FUNC_6(struct smb_ctx *VAR_1, const char *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5;
 int VAR_6 = sizeof(VAR_1->ct_ssn.ioc_localcs);
 int VAR_7, VAR_8, VAR_9;

 VAR_3 = FUNC_3(VAR_2, ':');
 VAR_8 = VAR_3 ? (VAR_3 - VAR_2) : 0;
 if (VAR_8 == 0 || VAR_8 >= VAR_6) {
  FUNC_2("invalid local charset specification (%s)", 0, VAR_2);
  return VAR_0;
 }
 VAR_7 = (size_t)FUNC_5(++VAR_3);
 if (VAR_7 == 0 || VAR_7 >= VAR_6) {
  FUNC_2("invalid server charset specification (%s)", 0, VAR_2);
  return VAR_0;
 }
 VAR_5 = FUNC_0(VAR_1->ct_ssn.ioc_localcs, VAR_2, VAR_8);
 VAR_5[VAR_8] = 0;
 VAR_4 = FUNC_4(VAR_1->ct_ssn.ioc_servercs, VAR_3);
 VAR_9 = FUNC_1(VAR_5, VAR_4);
 if (VAR_9 == 0)
  return 0;
 FUNC_2("can't initialize iconv support (%s:%s)",
     VAR_9, VAR_5, VAR_4);
 VAR_5[0] = 0;
 VAR_4[0] = 0;
 return VAR_9;
}
