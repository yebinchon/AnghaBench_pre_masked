
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct amdvi_softc {int cmp_data; } ;
struct amdvi_cmd {int word0; int word1; int addr; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct amdvi_cmd* FUNC_1 (struct amdvi_softc*) ;
 int FUNC_2 (struct amdvi_softc*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct amdvi_softc *VAR_2, const uint64_t VAR_3)
{
 struct amdvi_cmd *VAR_4;
 uint64_t VAR_5;

 VAR_4 = FUNC_1(VAR_2);
 FUNC_0(VAR_4 != ((void*)0), ("Cmd is NULL"));

 VAR_5 = FUNC_3(&VAR_2->cmp_data);
 VAR_4->opcode = VAR_0;
 VAR_4->word0 = (VAR_5 & 0xFFFFFFF8) |
     (VAR_1);

 VAR_4->word1 = (VAR_5 >> 32) & 0xFFFFF;
 VAR_4->addr = VAR_3;

 FUNC_2(VAR_2);
}
