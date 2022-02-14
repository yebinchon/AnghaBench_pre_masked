
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct dos_partition {scalar_t__ dp_typ; int dp_flag; int dp_start; } ;
struct disklabel {TYPE_1__* d_partitions; int d_npartitions; int d_type; int d_magic2; int d_magic; } ;
struct TYPE_6__ {char* secbuf; } ;
struct TYPE_5__ {scalar_t__ start; scalar_t__ slice; size_t part; int init; int type; } ;
struct TYPE_4__ {int p_offset; int p_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_3__* VAR_13 ;
 int FUNC_0 (void*,unsigned int,unsigned int) ;
 TYPE_2__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_16, unsigned VAR_17, unsigned VAR_18)
{
    return FUNC_0(VAR_16, VAR_17, VAR_18);

}
