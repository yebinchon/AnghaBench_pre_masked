
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct publication {int dummy; } ;
struct TYPE_2__ {scalar_t__ local_publ_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct publication*) ;
 struct publication* FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,scalar_t__,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct publication *FUNC_6(u32 VAR_7, u32 VAR_8, u32 VAR_9,
        u32 VAR_10, u32 VAR_11, u32 VAR_12)
{
 struct publication *VAR_13;

 if (VAR_3.local_publ_count >= VAR_4) {
  FUNC_3("Publication failed, local publication limit reached (%u)\n",
       VAR_4);
  return ((void*)0);
 }
 if ((VAR_7 < VAR_1) && !FUNC_0(&VAR_2)) {
  FUNC_3("Publication failed, reserved name {%u,%u,%u}\n",
       VAR_7, VAR_8, VAR_9);
  return ((void*)0);
 }

 FUNC_4(&VAR_5);
 VAR_3.local_publ_count++;
 VAR_13 = FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10,
       VAR_6, VAR_11, VAR_12);
 if (VAR_13 && (VAR_10 != VAR_0)) {
  FUNC_1(VAR_13);
 }
 FUNC_5(&VAR_5);
 return VAR_13;
}
