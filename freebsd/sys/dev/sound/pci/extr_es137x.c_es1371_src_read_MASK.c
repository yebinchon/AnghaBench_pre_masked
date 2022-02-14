
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct es_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned short) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (struct es_info*) ;
 int FUNC_3 (struct es_info*,int ,int,int) ;

__attribute__((used)) static unsigned int
FUNC_4(struct es_info *VAR_5, unsigned short VAR_6)
{
   uint32_t VAR_7;

   VAR_7 = FUNC_2(VAR_5) & (VAR_3 | VAR_0 |
     VAR_1 | VAR_2);
   VAR_7 |= FUNC_0(VAR_6);
   FUNC_3(VAR_5, VAR_4, VAR_7, 4);
   return (FUNC_1(FUNC_2(VAR_5)));
}
