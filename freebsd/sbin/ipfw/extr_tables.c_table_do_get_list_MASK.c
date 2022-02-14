
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {size_t size; } ;
typedef TYPE_1__ ipfw_xtable_info ;
struct TYPE_12__ {int version; } ;
struct TYPE_11__ {TYPE_8__ opheader; } ;
typedef TYPE_2__ ipfw_obj_header ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int,size_t) ;
 scalar_t__ FUNC_1 (int ,TYPE_8__*,size_t*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(ipfw_xtable_info *VAR_3, ipfw_obj_header **VAR_4)
{
 ipfw_obj_header *VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_6 = 0;
 VAR_5 = ((void*)0);
 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  if (VAR_6 < VAR_3->size)
   VAR_6 = VAR_3->size + 44;
  if (VAR_5 != ((void*)0))
   FUNC_2(VAR_5);
  if ((VAR_5 = FUNC_0(1, VAR_6)) == ((void*)0))
   continue;
  FUNC_3(VAR_5, VAR_3);
  VAR_5->opheader.version = 1;
  if (FUNC_1(VAR_1, &VAR_5->opheader, &VAR_6) == 0) {
   *VAR_4 = VAR_5;
   return (0);
  }

  if (VAR_2 != VAR_0)
   break;
 }
 FUNC_2(VAR_5);

 return (VAR_2);
}
