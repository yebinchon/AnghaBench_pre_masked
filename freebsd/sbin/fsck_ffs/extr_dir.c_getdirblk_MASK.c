
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ufs2_daddr_t ;
struct bufarea {int b_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bufarea* FUNC_0 (int ,long,int ) ;
 struct bufarea* VAR_2 ;

__attribute__((used)) static struct bufarea *
FUNC_1(ufs2_daddr_t VAR_3, long VAR_4)
{

 if (VAR_2 != ((void*)0))
  VAR_2->b_flags &= ~VAR_1;
 VAR_2 = FUNC_0(VAR_3, VAR_4, VAR_0);
 return (VAR_2);
}
