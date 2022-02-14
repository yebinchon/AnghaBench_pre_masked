
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
 int FUNC_1 (unsigned short) ;
 int VAR_5 ;
 int FUNC_2 (struct es_info*) ;
 int FUNC_3 (struct es_info*,int ,int,int) ;

__attribute__((used)) static void
FUNC_4(struct es_info *VAR_6, unsigned short VAR_7, unsigned short VAR_8)
{
 uint32_t VAR_9;

 VAR_9 = FUNC_2(VAR_6) & (VAR_3 | VAR_0 |
     VAR_1 | VAR_2);
 VAR_9 |= FUNC_0(VAR_7) | FUNC_1(VAR_8);
 FUNC_3(VAR_6, VAR_4, VAR_9 | VAR_5, 4);
}
