
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct sflow_ethernet_frame_t {int type; int length; } ;
typedef int netdissect_options ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sflow_ethernet_frame_t const) ;

__attribute__((used)) static int
FUNC_3(netdissect_options *VAR_0,
                           const u_char *VAR_1, u_int VAR_2)
{
    const struct sflow_ethernet_frame_t *VAR_3;

    if (VAR_2 < sizeof(struct sflow_ethernet_frame_t))
 return 1;

    VAR_3 = (const struct sflow_ethernet_frame_t *)VAR_1;
    FUNC_2(*VAR_3);

    FUNC_1((VAR_0, "\n\t      frame len %u, type %u",
    FUNC_0(VAR_3->length),
    FUNC_0(VAR_3->type)));

    return 0;

trunc:
    return 1;
}
