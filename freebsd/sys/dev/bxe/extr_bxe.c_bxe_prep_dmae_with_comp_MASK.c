
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct dmae_cmd {int comp_val; int comp_addr_hi; int comp_addr_lo; int opcode; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bxe_softc*,int ,int ,int ,int ) ;
 int FUNC_4 (struct dmae_cmd*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct bxe_softc *VAR_4,
                        struct dmae_cmd *VAR_5,
                        uint8_t VAR_6,
                        uint8_t VAR_7)
{
    FUNC_4(VAR_5, 0, sizeof(struct dmae_cmd));


    VAR_5->opcode = FUNC_3(VAR_4, VAR_6, VAR_7,
                                   VAR_2, VAR_0);


    VAR_5->comp_addr_lo = FUNC_2(FUNC_0(VAR_4, VAR_3));
    VAR_5->comp_addr_hi = FUNC_1(FUNC_0(VAR_4, VAR_3));
    VAR_5->comp_val = VAR_1;
}
