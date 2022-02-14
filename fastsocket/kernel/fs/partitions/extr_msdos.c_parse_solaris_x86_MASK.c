
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solaris_x86_vtoc {scalar_t__ v_sanity; scalar_t__ v_version; struct solaris_x86_slice* v_slice; int v_nparts; } ;
struct solaris_x86_slice {scalar_t__ s_size; scalar_t__ s_start; } ;
struct parsed_partitions {scalar_t__ next; scalar_t__ limit; int name; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;
typedef int Sector ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct parsed_partitions*,int ,int,int) ;
 scalar_t__ FUNC_5 (struct block_device*,int,int *) ;

__attribute__((used)) static void
FUNC_6(struct parsed_partitions *VAR_2, struct block_device *VAR_3,
   sector_t VAR_4, sector_t VAR_5, int VAR_6)
{
}
