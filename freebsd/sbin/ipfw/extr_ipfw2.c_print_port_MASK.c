
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char const* uint16_t ;
struct servent {char const* s_name; } ;
struct protoent {int * p_name; } ;
struct buf_pr {int dummy; } ;
struct TYPE_2__ {scalar_t__ do_resolv; } ;


 int VAR_0 ;
 int FUNC_0 (struct buf_pr*,char*,char const*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 struct protoent* FUNC_1 (int) ;
 struct servent* FUNC_2 (int ,int *) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (int ,char const*) ;

__attribute__((used)) static void
FUNC_5(struct buf_pr *VAR_3, int VAR_4, uint16_t VAR_5)
{

 if (VAR_4 == VAR_0) {
  char const *VAR_6;

  if (VAR_1.do_resolv && (VAR_6 = FUNC_4(VAR_2, VAR_5)) )
   FUNC_0(VAR_3, "%s", VAR_6);
  else
   FUNC_0(VAR_3, "0x%04x", VAR_5);
 } else {
  struct servent *VAR_7 = ((void*)0);
  if (VAR_1.do_resolv) {
   struct protoent *VAR_8 = FUNC_1(VAR_4);

   VAR_7 = FUNC_2(FUNC_3(VAR_5), VAR_8 ? VAR_8->p_name : ((void*)0));
  }
  if (VAR_7)
   FUNC_0(VAR_3, "%s", VAR_7->s_name);
  else
   FUNC_0(VAR_3, "%d", VAR_5);
 }
}
