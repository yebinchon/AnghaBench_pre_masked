
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {char* tablename; int set; scalar_t__ count; } ;
typedef TYPE_2__ ipfw_xtable_info ;
struct TYPE_6__ {scalar_t__ length; } ;
struct TYPE_8__ {TYPE_1__ head; } ;
typedef TYPE_3__ ipfw_obj_tentry ;
typedef int ipfw_obj_header ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(ipfw_obj_header *VAR_0, int VAR_1)
{
 ipfw_obj_tentry *VAR_2;
 uint32_t VAR_3;
 ipfw_xtable_info *VAR_4;

 VAR_4 = (ipfw_xtable_info *)(VAR_0 + 1);
 VAR_2 = (ipfw_obj_tentry *)(VAR_4 + 1);

 if (VAR_1)
  FUNC_0("--- table(%s), set(%u) ---\n", VAR_4->tablename, VAR_4->set);

 VAR_3 = VAR_4->count;
 while (VAR_3 > 0) {
  FUNC_1(VAR_4, VAR_2);
  VAR_2 = (ipfw_obj_tentry *)((caddr_t)VAR_2 + VAR_2->head.length);
  VAR_3--;
 }
}
