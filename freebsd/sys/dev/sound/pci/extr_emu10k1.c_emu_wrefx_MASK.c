
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {scalar_t__ audigy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sc_info*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct sc_info *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 VAR_3 += VAR_2->audigy ? VAR_0 : VAR_1;
 FUNC_0(VAR_2, 0, VAR_3, VAR_4);
}
