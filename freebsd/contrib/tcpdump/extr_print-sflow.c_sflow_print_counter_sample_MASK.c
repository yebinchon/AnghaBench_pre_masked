
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct sflow_counter_sample_t {int seqnum; int records; int typesource; } ;
typedef int netdissect_options ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sflow_counter_sample_t const) ;
 int FUNC_3 (int *,int const*,int,int) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_0,
                           const u_char *VAR_1, u_int VAR_2)
{
    const struct sflow_counter_sample_t *VAR_3;
    u_int VAR_4;
    u_int VAR_5;
    u_int VAR_6;
    u_int VAR_7;

    if (VAR_2 < sizeof(struct sflow_counter_sample_t))
 return 1;

    VAR_3 = (const struct sflow_counter_sample_t *)VAR_1;
    FUNC_2(*VAR_3);

    VAR_5 = FUNC_0(VAR_3->typesource);
    VAR_4 = FUNC_0(VAR_3->records);
    VAR_6 = VAR_5 >> 24;
    VAR_7 = VAR_5 & 0x0FFF;

    FUNC_1((VAR_0, " seqnum %u, type %u, idx %u, records %u",
    FUNC_0(VAR_3->seqnum),
    VAR_6,
    VAR_7,
    VAR_4));

    return FUNC_3(VAR_0, VAR_1 + sizeof(struct sflow_counter_sample_t),
           VAR_2 - sizeof(struct sflow_counter_sample_t),
           VAR_4);

trunc:
    return 1;
}
