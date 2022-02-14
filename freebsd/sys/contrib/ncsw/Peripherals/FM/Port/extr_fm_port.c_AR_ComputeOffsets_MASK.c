
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef int t_PortTblEntry ;
typedef int t_OidsTblEntry ;
struct TYPE_17__ {TYPE_6__* autoResMaxSizes; } ;
struct TYPE_19__ {TYPE_7__ deepSleepVars; } ;
typedef TYPE_9__ t_FmPort ;
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
struct t_FmPortDsarParams {TYPE_8__* p_AutoResFilteringInfo; TYPE_5__* p_AutoResSnmpInfo; TYPE_4__* p_AutoResNdpInfo; TYPE_3__* p_AutoResEchoIpv6Info; TYPE_2__* p_AutoResEchoIpv4Info; TYPE_1__* p_AutoResArpInfo; } ;
struct arOffsets {int arp; int icmpv4; int icmpv6; int nd; int snmp; int filtIp; int filtUdp; int filtTcp; int stats; } ;
struct TYPE_18__ {int udpPortsTableSize; int tcpPortsTableSize; scalar_t__ ipProtTableSize; } ;
struct TYPE_16__ {scalar_t__ maxNumOfSnmpOidChar; } ;
struct TYPE_15__ {int numOfIpv4Addresses; int numOfIpv6Addresses; int oidsTblSize; } ;
struct TYPE_14__ {int tableSizeAssigned; int tableSizeTmp; } ;
struct TYPE_13__ {int tableSize; } ;
struct TYPE_12__ {int tableSize; } ;
struct TYPE_11__ {int tableSize; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static uint32_t FUNC_1(struct arOffsets* VAR_0,
                                  struct t_FmPortDsarParams *VAR_1,
                                  t_FmPort *VAR_2)
{
    uint32_t VAR_3 = sizeof(t_ArCommonDesc);

    if (VAR_1->p_AutoResArpInfo)
    {
        VAR_3 = FUNC_0(VAR_3,4);
        VAR_0->arp = VAR_3;
        VAR_3 += sizeof(t_DsarArpDescriptor);
        VAR_3 += sizeof(t_DsarArpBindingEntry)
                * VAR_1->p_AutoResArpInfo->tableSize;
        VAR_3 += sizeof(t_DsarArpStatistics);
    }

    if (VAR_1->p_AutoResEchoIpv4Info)
    {
        VAR_3 = FUNC_0(VAR_3,4);
        VAR_0->icmpv4 = VAR_3;
        VAR_3 += sizeof(t_DsarIcmpV4Descriptor);
        VAR_3 += sizeof(t_DsarIcmpV4BindingEntry)
                * VAR_1->p_AutoResEchoIpv4Info->tableSize;
        VAR_3 += sizeof(t_DsarIcmpV4Statistics);
    }

    if (VAR_1->p_AutoResEchoIpv6Info)
    {
        VAR_3 = FUNC_0(VAR_3,4);
        VAR_0->icmpv6 = VAR_3;
        VAR_3 += sizeof(t_DsarIcmpV6Descriptor);
        VAR_3 += sizeof(t_DsarIcmpV6BindingEntry)
                * VAR_1->p_AutoResEchoIpv6Info->tableSize;
        VAR_3 += sizeof(t_DsarIcmpV6Statistics);
    }

    if (VAR_1->p_AutoResNdpInfo)
    {
        VAR_3 = FUNC_0(VAR_3,4);
        VAR_0->nd = VAR_3;
        VAR_3 += sizeof(t_DsarNdDescriptor);
        VAR_3 += sizeof(t_DsarIcmpV6BindingEntry)
                * (VAR_1->p_AutoResNdpInfo->tableSizeAssigned
                        + VAR_1->p_AutoResNdpInfo->tableSizeTmp);
        VAR_3 += sizeof(t_DsarIcmpV6Statistics);
    }

    if (VAR_1->p_AutoResSnmpInfo)
    {
        VAR_3 = FUNC_0(VAR_3,4);
        VAR_0->snmp = VAR_3;
        VAR_3 += sizeof(t_DsarSnmpDescriptor);
        VAR_3 += sizeof(t_DsarSnmpIpv4AddrTblEntry)
                * VAR_1->p_AutoResSnmpInfo->numOfIpv4Addresses;
        VAR_3 += sizeof(t_DsarSnmpIpv6AddrTblEntry)
                * VAR_1->p_AutoResSnmpInfo->numOfIpv6Addresses;
        VAR_3 += sizeof(t_OidsTblEntry) * VAR_1->p_AutoResSnmpInfo->oidsTblSize;
        VAR_3 += VAR_2->deepSleepVars.autoResMaxSizes->maxNumOfSnmpOidChar;
        VAR_3 += sizeof(t_DsarIcmpV6Statistics);
    }

    VAR_3 = FUNC_0(VAR_3,4);
    if (VAR_1->p_AutoResFilteringInfo)
    {
        VAR_0->filtIp = VAR_3;
        VAR_3 += VAR_1->p_AutoResFilteringInfo->ipProtTableSize;
        VAR_3 = FUNC_0(VAR_3,4);
        VAR_0->filtUdp = VAR_3;
        VAR_3 += VAR_1->p_AutoResFilteringInfo->udpPortsTableSize
                * sizeof(t_PortTblEntry);
        VAR_3 = FUNC_0(VAR_3,4);
        VAR_0->filtTcp = VAR_3;
        VAR_3 += VAR_1->p_AutoResFilteringInfo->tcpPortsTableSize
                * sizeof(t_PortTblEntry);
    }


    VAR_3 = FUNC_0(VAR_3,4);
    VAR_0->stats = VAR_3;
    VAR_3 += sizeof(t_ArStatistics);
    return VAR_3;
}
