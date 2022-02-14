
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct mb_args {short type; int flags; } ;


 int FUNC_0 (int) ;
 short VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mbuf*,int,short,int) ;
 int FUNC_2 (void*,int,void*,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_2, int VAR_3, void *VAR_4, int VAR_5)
{
 struct mbuf *VAR_6;
 struct mb_args *VAR_7;
 int VAR_8;
 int VAR_9;
 short VAR_10;




 VAR_7 = (struct mb_args *)VAR_4;
 VAR_10 = VAR_7->type;





 if (VAR_10 == VAR_0)
  return (0);

 VAR_6 = (struct mbuf *)VAR_2;
 VAR_9 = VAR_7->flags;
 FUNC_0((VAR_9 & VAR_1) == 0);

 VAR_8 = FUNC_1(VAR_6, VAR_5, VAR_10, VAR_9);

 return (VAR_8);
}
