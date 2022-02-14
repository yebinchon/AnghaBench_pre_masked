
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_request {int parent; } ;
struct TYPE_2__ {int flags; } ;
struct ata_channel {TYPE_1__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ata_request*,char*) ;
 int VAR_6 ;
 int FUNC_1 (struct ata_channel*,int ) ;
 int FUNC_2 (struct ata_channel*,int ,int) ;
 struct ata_channel* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct ata_request *VAR_7)
{
    struct ata_channel *VAR_8 = FUNC_3(VAR_7->parent);
    int VAR_9;

    FUNC_0(VAR_7, "dmastop");

    FUNC_2(VAR_8, VAR_0,
   FUNC_1(VAR_8, VAR_0) & ~VAR_1);
    VAR_8->dma.flags &= ~VAR_6;
    VAR_9 = FUNC_1(VAR_8, VAR_5) & VAR_4;
    FUNC_2(VAR_8, VAR_5, VAR_3 | VAR_2);
    return VAR_9;
}
