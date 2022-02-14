
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct lwapp_transport_header {int version; int frag_id; int length; } ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct lwapp_transport_header const) ;
 int FUNC_6 (int const,int) ;
 int FUNC_7 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_8 (TYPE_1__*,int const*,char*,int) ;

void
FUNC_9(netdissect_options *VAR_2,
                 const u_char *VAR_3, u_int VAR_4)
{
    const struct lwapp_transport_header *VAR_5;
    const u_char *VAR_6;
    int VAR_7;

    VAR_6=VAR_3;


    FUNC_6(*VAR_6, 6);
    VAR_5 = (const struct lwapp_transport_header *)VAR_3;
    FUNC_5(*VAR_5);




    if (FUNC_3(VAR_5->version) != VAR_0) {
        FUNC_4((VAR_2, "LWAPP version %u packet not supported",
               FUNC_3(VAR_5->version)));
        return;
    }


    if (VAR_2->ndo_vflag < 1) {
        FUNC_4((VAR_2, "LWAPPv%u, %s frame, Flags [%s], length %u",
               FUNC_3(VAR_5->version),
               FUNC_1(VAR_5->version) ? "Control" : "Data",
               FUNC_7(VAR_1,"none",(VAR_5->version)&0x07),
               VAR_4));
        return;
    }


    VAR_7=FUNC_0(VAR_5->length);

    FUNC_4((VAR_2, "LWAPPv%u, %s frame, Radio-id  %u, Flags [%s], Frag-id  %u, length %u",
           FUNC_3(VAR_5->version),
           FUNC_1(VAR_5->version) ? "Control" : "Data",
           FUNC_2(VAR_5->version),
           FUNC_7(VAR_1,"none",(VAR_5->version)&0x07),
           VAR_5->frag_id,
           VAR_7));

    VAR_6+=sizeof(const struct lwapp_transport_header);
    VAR_7-=sizeof(const struct lwapp_transport_header);


    FUNC_8(VAR_2, VAR_6, "\n\t", VAR_7);

    return;

 trunc:
    FUNC_4((VAR_2, "\n\t\t packet exceeded snapshot"));
}
