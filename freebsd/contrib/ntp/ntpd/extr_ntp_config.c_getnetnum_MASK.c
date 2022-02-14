
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int sa_len; } ;
struct TYPE_10__ {TYPE_1__ sa; } ;
typedef TYPE_2__ sockaddr_u ;
typedef enum gnn_type { ____Placeholder_gnn_type } gnn_type ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_6 (char const*,scalar_t__,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_8(
 const char *VAR_5,
 sockaddr_u *VAR_6,
 int VAR_7,
 enum gnn_type VAR_8
 )
{
 FUNC_3(VAR_2 == FUNC_0(VAR_6) ||
  VAR_0 == FUNC_0(VAR_6) ||
  VAR_1 == FUNC_0(VAR_6));

 if (!FUNC_6(VAR_5, FUNC_0(VAR_6), VAR_6))
  return 0;

 if (FUNC_2(VAR_6) && !VAR_4)
  return -1;




 FUNC_4(VAR_6, VAR_3);

 FUNC_1(2, ("getnetnum given %s, got %s\n", VAR_5, FUNC_7(VAR_6)));

 return 1;
}
