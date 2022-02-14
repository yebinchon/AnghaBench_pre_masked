
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int t_PortTblEntry ;
typedef int t_OidsTblEntry ;
struct TYPE_10__ {int maxNumOfArpEntries; int maxNumOfEchoIpv4Entries; int maxNumOfEchoIpv6Entries; int maxNumOfNdpEntries; int maxNumOfSnmpIPV4Entries; int maxNumOfSnmpIPV6Entries; int maxNumOfSnmpOidEntries; int maxNumOfUdpPortFiltering; int maxNumOfTcpPortFiltering; scalar_t__ maxNumOfIpProtFiltering; scalar_t__ maxNumOfSnmpOidChar; } ;
typedef TYPE_4__ t_FmPortDsarTablesSizes ;
struct TYPE_7__ {TYPE_4__* autoResMaxSizes; } ;
struct TYPE_11__ {scalar_t__ fmMuramPhysBaseAddr; TYPE_3__* p_FmPortBmiRegs; int h_FmMuram; TYPE_1__ deepSleepVars; } ;
typedef TYPE_5__ t_FmPort ;
typedef int t_Error ;
typedef int t_DsarSnmpIpv6AddrTblEntry ;
typedef int t_DsarSnmpIpv4AddrTblEntry ;
typedef int t_DsarSnmpDescriptor ;
typedef int t_DsarNdDescriptor ;
typedef int t_DsarIcmpV6Statistics ;
typedef int t_DsarIcmpV6Descriptor ;
typedef int t_DsarIcmpV6BindingEntry ;
typedef int t_DsarIcmpV4Statistics ;
typedef int t_DsarIcmpV4Descriptor ;
typedef int t_DsarIcmpV4BindingEntry ;
typedef int t_DsarArpStatistics ;
typedef int t_DsarArpDescriptor ;
typedef int t_DsarArpBindingEntry ;
typedef int t_ArStatistics ;
typedef int t_ArCommonDesc ;
struct TYPE_8__ {int fmbm_rgpr; } ;
struct TYPE_9__ {TYPE_2__ rxPortBmiRegs; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static t_Error FUNC_6(t_FmPort *VAR_1)
{
    uint32_t *VAR_2;
    t_FmPortDsarTablesSizes *VAR_3 = VAR_1->deepSleepVars.autoResMaxSizes;
    t_ArCommonDesc *VAR_4;
    uint32_t VAR_5 = sizeof(t_ArCommonDesc);


    VAR_5 = FUNC_2(VAR_5,4);
    VAR_5 += sizeof(t_DsarArpDescriptor);
    VAR_5 += sizeof(t_DsarArpBindingEntry) * VAR_3->maxNumOfArpEntries;
    VAR_5 += sizeof(t_DsarArpStatistics);

    VAR_5 = FUNC_2(VAR_5,4);
    VAR_5 += sizeof(t_DsarIcmpV4Descriptor);
    VAR_5 += sizeof(t_DsarIcmpV4BindingEntry) * VAR_3->maxNumOfEchoIpv4Entries;
    VAR_5 += sizeof(t_DsarIcmpV4Statistics);

    VAR_5 = FUNC_2(VAR_5,4);
    VAR_5 += sizeof(t_DsarIcmpV6Descriptor);
    VAR_5 += sizeof(t_DsarIcmpV6BindingEntry) * VAR_3->maxNumOfEchoIpv6Entries;
    VAR_5 += sizeof(t_DsarIcmpV6Statistics);

    VAR_5 = FUNC_2(VAR_5,4);
    VAR_5 += sizeof(t_DsarNdDescriptor);
    VAR_5 += sizeof(t_DsarIcmpV6BindingEntry) * VAR_3->maxNumOfNdpEntries;
    VAR_5 += sizeof(t_DsarIcmpV6Statistics);

    VAR_5 = FUNC_2(VAR_5,4);
    VAR_5 += sizeof(t_DsarSnmpDescriptor);
    VAR_5 += sizeof(t_DsarSnmpIpv4AddrTblEntry)
            * VAR_3->maxNumOfSnmpIPV4Entries;
    VAR_5 += sizeof(t_DsarSnmpIpv6AddrTblEntry)
            * VAR_3->maxNumOfSnmpIPV6Entries;
    VAR_5 += sizeof(t_OidsTblEntry) * VAR_3->maxNumOfSnmpOidEntries;
    VAR_5 += VAR_3->maxNumOfSnmpOidChar;
    VAR_5 += sizeof(t_DsarIcmpV6Statistics);

    VAR_5 = FUNC_2(VAR_5,4);
    VAR_5 += VAR_3->maxNumOfIpProtFiltering;
    VAR_5 = FUNC_2(VAR_5,4);
    VAR_5 += VAR_3->maxNumOfUdpPortFiltering * sizeof(t_PortTblEntry);
    VAR_5 = FUNC_2(VAR_5,4);
    VAR_5 += VAR_3->maxNumOfTcpPortFiltering * sizeof(t_PortTblEntry);




    VAR_5 = FUNC_2(VAR_5,4);
    VAR_5 += sizeof(t_ArStatistics);

    VAR_4 = FUNC_0(VAR_1->h_FmMuram, VAR_5, 0x10);

    VAR_2 =
            FUNC_4(
                    VAR_1->fmMuramPhysBaseAddr
                            + FUNC_1(VAR_1->p_FmPortBmiRegs->rxPortBmiRegs.fmbm_rgpr));
    FUNC_3(
            *VAR_2,
            (uint32_t)(FUNC_5(VAR_4) - VAR_1->fmMuramPhysBaseAddr));
    return VAR_0;
}
