
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xbuf ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int ipfw_xtable_info ;
struct TYPE_11__ {int length; } ;
struct TYPE_13__ {int idx; TYPE_1__ head; } ;
typedef TYPE_3__ ipfw_obj_tentry ;
struct TYPE_12__ {int type; } ;
struct TYPE_14__ {int opheader; TYPE_2__ ntlv; } ;
typedef TYPE_4__ ipfw_obj_header ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,size_t*) ;
 int VAR_2 ;
 int FUNC_1 (char*,TYPE_4__*,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,char*,int ,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_4(ipfw_obj_header *VAR_3, char *VAR_4, ipfw_xtable_info *VAR_5,
    ipfw_obj_tentry *VAR_6)
{
 char VAR_7[sizeof(ipfw_obj_header) + sizeof(ipfw_obj_tentry)];
 ipfw_obj_tentry *VAR_8;
 uint8_t VAR_9;
 uint32_t VAR_10;
 size_t VAR_11;

 FUNC_1(VAR_7, VAR_3, sizeof(*VAR_3));
 VAR_3 = (ipfw_obj_header *)VAR_7;
 VAR_8 = (ipfw_obj_tentry *)(VAR_3 + 1);

 FUNC_2(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->head.length = sizeof(*VAR_8);
 VAR_8->idx = 1;

 FUNC_3(VAR_3, VAR_8, VAR_4, 0, &VAR_9, &VAR_10, VAR_5);
 VAR_3->ntlv.type = VAR_9;

 VAR_11 = sizeof(VAR_7);
 if (FUNC_0(VAR_1, &VAR_3->opheader, &VAR_11) != 0)
  return (VAR_2);

 if (VAR_11 < sizeof(VAR_7))
  return (VAR_0);

 *VAR_6 = *VAR_8;

 return (0);
}
