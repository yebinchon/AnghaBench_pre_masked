
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef union res_sockaddr_union {int dummy; } res_sockaddr_union ;
typedef int rrset_ns ;
struct TYPE_7__ {int name; } ;
typedef TYPE_1__ rr_ns ;
typedef int res_state ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,TYPE_1__*,union res_sockaddr_union*,int) ;
 TYPE_1__* FUNC_4 (int *,char const*) ;
 int VAR_0 ;
 int FUNC_5 (int ,char const*) ;

__attribute__((used)) static int
FUNC_6(res_state VAR_1, const char *VAR_2, rrset_ns *VAR_3,
 union res_sockaddr_union *VAR_4, int VAR_5)
{
 rr_ns *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = 0;
 VAR_6 = FUNC_4(VAR_3, VAR_2);
 if (VAR_6 != ((void*)0)) {
  VAR_8 = FUNC_3(VAR_1, VAR_6, VAR_4, VAR_5);
  VAR_4 += VAR_8;
  VAR_5 -= VAR_8;
  VAR_7 += VAR_8;
 }
 for (VAR_6 = FUNC_1(*VAR_3);
      VAR_6 != ((void*)0) && VAR_5 > 0;
      VAR_6 = FUNC_2(VAR_6, VAR_0))
  if (FUNC_5(VAR_6->name, VAR_2) != 1) {
   VAR_8 = FUNC_3(VAR_1, VAR_6, VAR_4, VAR_5);
   VAR_4 += VAR_8;
   VAR_5 -= VAR_8;
   VAR_7 += VAR_8;
  }
 FUNC_0(("satisfy(%s): %d", VAR_2, VAR_7));
 return (VAR_7);
}
