
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u8 ;
struct bnep_session {long long mc_filter; TYPE_1__* dev; } ;
struct TYPE_2__ {int * broadcast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bnep_session*,int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct bnep_session *VAR_5, u8 *VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_7 < 2)
  return -VAR_3;

 VAR_8 = FUNC_5(VAR_6);
 VAR_6 += 2; VAR_7 -= 2;

 if (VAR_7 < VAR_8)
  return -VAR_3;

 FUNC_0("filter len %d", VAR_8);
 FUNC_4(VAR_5, VAR_0, VAR_1);

 return 0;
}
