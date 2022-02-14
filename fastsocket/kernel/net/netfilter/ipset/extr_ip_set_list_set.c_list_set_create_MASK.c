
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct set_telem {int dummy; } ;
struct set_elem {int dummy; } ;
struct nlattr {int dummy; } ;
struct ip_set {int * variant; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct ip_set*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,size_t) ;
 int FUNC_3 (struct nlattr*) ;
 int VAR_7 ;
 int FUNC_4 (struct ip_set*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct ip_set *VAR_8, struct nlattr *VAR_9[], u32 VAR_10)
{
 u32 VAR_11 = VAR_5;

 if (FUNC_5(!FUNC_2(VAR_9, VAR_1) ||
       !FUNC_2(VAR_9, VAR_2)))
  return -VAR_3;

 if (VAR_9[VAR_1])
  VAR_11 = FUNC_1(VAR_9[VAR_1]);
 if (VAR_11 < VAR_6)
  VAR_11 = VAR_6;

 if (VAR_9[VAR_2]) {
  if (!FUNC_0(VAR_8, VAR_11, sizeof(struct set_telem),
       FUNC_3(VAR_9[VAR_2])))
   return -VAR_0;

  FUNC_4(VAR_8);
 } else {
  if (!FUNC_0(VAR_8, VAR_11, sizeof(struct set_elem),
       VAR_4))
   return -VAR_0;
 }
 VAR_8->variant = &VAR_7;
 return 0;
}
