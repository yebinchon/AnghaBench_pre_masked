
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct sflow_expanded_flow_raw_t {int header_size; int stripped_bytes; int length; int protocol; } ;
typedef int netdissect_options ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sflow_expanded_flow_raw_t const) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_1,
                       const u_char *VAR_2, u_int VAR_3)
{
    const struct sflow_expanded_flow_raw_t *VAR_4;

    if (VAR_3 < sizeof(struct sflow_expanded_flow_raw_t))
 return 1;

    VAR_4 = (const struct sflow_expanded_flow_raw_t *)VAR_2;
    FUNC_2(*VAR_4);
    FUNC_1((VAR_1, "\n\t      protocol %s (%u), length %u, stripped bytes %u, header_size %u",
    FUNC_3(VAR_0,"Unknown",FUNC_0(VAR_4->protocol)),
    FUNC_0(VAR_4->protocol),
    FUNC_0(VAR_4->length),
    FUNC_0(VAR_4->stripped_bytes),
    FUNC_0(VAR_4->header_size)));




    return 0;

trunc:
    return 1;
}
