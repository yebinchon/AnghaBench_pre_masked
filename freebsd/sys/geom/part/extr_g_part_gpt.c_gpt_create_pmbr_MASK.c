
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int mediasize; int sectorsize; } ;
struct g_part_gpt_table {scalar_t__ mbr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int ,int,int,int ) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_4(struct g_part_gpt_table *VAR_6, struct g_provider *VAR_7)
{

 FUNC_1(VAR_6->mbr + VAR_2, VAR_3 * VAR_4);
 FUNC_2(VAR_6->mbr, 0, 0xee, 1,
     FUNC_0(VAR_7->mediasize / VAR_7->sectorsize - 1, VAR_5));
 FUNC_3(VAR_6->mbr + VAR_1, VAR_0);
}
