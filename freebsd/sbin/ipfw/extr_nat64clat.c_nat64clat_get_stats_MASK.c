
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct ipfw_nat64clat_stats {int dummy; } ;
struct TYPE_4__ {int opheader; int ntlv; } ;
typedef TYPE_1__ ipfw_obj_header ;
typedef int ipfw_obj_ctlv ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,size_t) ;
 scalar_t__ FUNC_1 (int ,int *,size_t*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ipfw_nat64clat_stats*,int *,int) ;
 int FUNC_4 (int *,char const*,int ) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_1, uint8_t VAR_2,
    struct ipfw_nat64clat_stats *VAR_3)
{
 ipfw_obj_header *VAR_4;
 ipfw_obj_ctlv *VAR_5;
 size_t VAR_6;

 VAR_6 = sizeof(*VAR_4) + sizeof(*VAR_5) + sizeof(*VAR_3);
 VAR_4 = FUNC_0(1, VAR_6);
 FUNC_4(&VAR_4->ntlv, VAR_1, VAR_2);
 if (FUNC_1(VAR_0, &VAR_4->opheader, &VAR_6) == 0) {
  VAR_5 = (ipfw_obj_ctlv *)(VAR_4 + 1);
  FUNC_3(VAR_3, VAR_5 + 1, sizeof(*VAR_3));
  FUNC_2(VAR_4);
  return (0);
 }
 FUNC_2(VAR_4);
 return (-1);
}
