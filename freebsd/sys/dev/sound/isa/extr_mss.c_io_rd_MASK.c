
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mss_info {int bd_flags; int io_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(struct mss_info *VAR_1, int VAR_2)
{
 if (VAR_1->bd_flags & VAR_0) VAR_2 -= 4;
 return FUNC_0(VAR_1->io_base, VAR_2);
}
