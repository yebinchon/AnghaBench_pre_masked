
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int is_io; int qos_grp; int opcode; int did; void* mem_region; } ;
struct TYPE_11__ {int is_io; int index; int opcode; int did; void* mem_region; } ;
struct TYPE_9__ {int is_io; int coreid; int opcode; int did; void* mem_region; } ;
struct TYPE_15__ {scalar_t__ u64; TYPE_5__ sindexload_cn68xx; TYPE_3__ smemload_cn68xx; TYPE_1__ sstatus_cn68xx; } ;
typedef TYPE_7__ cvmx_pow_load_addr_t ;
struct TYPE_16__ {TYPE_6__** sindexload; TYPE_4__** smemload; TYPE_2__** sstatus; } ;
typedef TYPE_8__ __cvmx_pow_dump_t ;
struct TYPE_14__ {void* u64; } ;
struct TYPE_12__ {void* u64; } ;
struct TYPE_10__ {void* u64; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 void* FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(void *VAR_4, int VAR_5)
{
    __cvmx_pow_dump_t *VAR_6 = (__cvmx_pow_dump_t*)VAR_4;
    int VAR_7;
    int VAR_8 = FUNC_2();
    int VAR_9;
    int VAR_10;
    int VAR_11;

    if (VAR_5 < (int)sizeof(__cvmx_pow_dump_t))
    {
        FUNC_0("cvmx_pow_capture: Buffer too small\n");
        return -1;
    }

    VAR_7 = FUNC_1();


    for (VAR_9=0; VAR_9<VAR_7; VAR_9++)
    {
        cvmx_pow_load_addr_t VAR_12;
        VAR_12.u64 = 0;
        VAR_12.sstatus_cn68xx.mem_region = VAR_0;
        VAR_12.sstatus_cn68xx.is_io = 1;
        VAR_12.sstatus_cn68xx.did = VAR_3;
        VAR_12.sstatus_cn68xx.coreid = VAR_9;
        for (VAR_11=1; VAR_11<6; VAR_11++)
        {
            VAR_12.sstatus_cn68xx.opcode = VAR_11;
            VAR_6->sstatus[VAR_9][VAR_11].u64 = FUNC_3(VAR_12.u64);
        }
    }

    for (VAR_10=0; VAR_10<VAR_8; VAR_10++)
    {
        cvmx_pow_load_addr_t VAR_13;
        VAR_13.u64 = 0;
        VAR_13.smemload_cn68xx.mem_region = VAR_0;
        VAR_13.smemload_cn68xx.is_io = 1;
        VAR_13.smemload_cn68xx.did = VAR_1;
        VAR_13.smemload_cn68xx.index = VAR_10;
        for (VAR_11=1; VAR_11<5; VAR_11++)
        {
            VAR_13.smemload_cn68xx.opcode = VAR_11;
            VAR_6->smemload[VAR_10][VAR_11].u64 = FUNC_3(VAR_13.u64);
        }
    }


    for (VAR_10=0; VAR_10<64; VAR_10++)
    {
        cvmx_pow_load_addr_t VAR_14;
        VAR_14.u64 = 0;
        VAR_14.sindexload_cn68xx.mem_region = VAR_0;
        VAR_14.sindexload_cn68xx.is_io = 1;
        VAR_14.sindexload_cn68xx.did = VAR_2;
        VAR_14.sindexload_cn68xx.qos_grp = VAR_10;
        for (VAR_11=1; VAR_11<7; VAR_11++)
        {
            VAR_14.sindexload_cn68xx.opcode = VAR_11;
            VAR_6->sindexload[VAR_10][VAR_11].u64 = FUNC_3(VAR_14.u64);
        }
    }
    return 0;
}
