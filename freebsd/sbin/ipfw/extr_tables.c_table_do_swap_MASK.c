
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tbuf ;
typedef int ipfw_obj_ntlv ;
struct TYPE_5__ {int set; } ;
struct TYPE_6__ {int opheader; TYPE_1__ ntlv; } ;
typedef TYPE_2__ ipfw_obj_header ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (char*,TYPE_2__*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int *,char*,int ,int) ;

__attribute__((used)) static int
FUNC_4(ipfw_obj_header *VAR_1, char *VAR_2)
{
 char VAR_3[sizeof(ipfw_obj_header) + sizeof(ipfw_obj_ntlv)];
 int VAR_4;

 FUNC_2(VAR_3, 0, sizeof(VAR_3));
 FUNC_1(VAR_3, VAR_1, sizeof(*VAR_1));
 VAR_1 = (ipfw_obj_header *)VAR_3;
 FUNC_3((ipfw_obj_ntlv *)(VAR_1 + 1), VAR_2, VAR_1->ntlv.set, 1);

 VAR_4 = FUNC_0(VAR_0, &VAR_1->opheader, sizeof(VAR_3));

 return (VAR_4);
}
