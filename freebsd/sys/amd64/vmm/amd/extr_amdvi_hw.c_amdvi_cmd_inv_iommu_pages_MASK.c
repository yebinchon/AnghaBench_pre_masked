
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
struct amdvi_softc {int dummy; } ;
struct amdvi_cmd {int addr; int word1; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct amdvi_cmd* FUNC_1 (struct amdvi_softc*) ;
 int FUNC_2 (struct amdvi_softc*) ;

__attribute__((used)) static void
FUNC_3(struct amdvi_softc *VAR_3, uint16_t VAR_4,
     uint64_t VAR_5, bool VAR_6,
     bool VAR_7, bool VAR_8)
{
 struct amdvi_cmd *VAR_9;

 VAR_9 = FUNC_1(VAR_3);
 FUNC_0(VAR_9 != ((void*)0), ("Cmd is NULL"));


 VAR_9->opcode = VAR_0;
 VAR_9->word1 = VAR_4;



 VAR_9->addr = VAR_5;
 VAR_9->addr |= VAR_7 ? VAR_1 : 0;
 VAR_9->addr |= VAR_8 ? VAR_2 : 0;

 FUNC_2(VAR_3);
}
