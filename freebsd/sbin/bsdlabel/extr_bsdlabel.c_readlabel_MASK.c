
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ssize_t ;
typedef int off_t ;
struct TYPE_5__ {int d_npartitions; TYPE_1__* d_partitions; } ;
struct TYPE_4__ {int p_offset; scalar_t__ p_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__,TYPE_2__*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int,int,int ) ;
 int VAR_11 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int,scalar_t__,int) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_11(int VAR_14)
{
 ssize_t VAR_15;
 uint32_t VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;

 VAR_17 = FUNC_9(VAR_13, VAR_2);
 if (VAR_17 < 0)
  FUNC_3(1, "%s", VAR_13);
 if (VAR_6)
  FUNC_7(VAR_17);
 else {
  VAR_11 = FUNC_5(VAR_17);
  VAR_12 = FUNC_6(VAR_17);
  if (VAR_12 < 0 || VAR_11 < 0)
   FUNC_3(4, "cannot get disk geometry");
 }
 if (VAR_11 > (off_t)0xffffffff * VAR_12)
  FUNC_4(1,
      "disks with more than 2^32-1 sectors are not supported");
 (void)FUNC_8(VAR_17, (off_t)0, VAR_4);
 VAR_15 = FUNC_10(VAR_17, VAR_5, VAR_0);
 if (VAR_15 == -1)
  FUNC_3(4, "%s read", VAR_13);
 if (VAR_15 != VAR_0)
  FUNC_4(4, "couldn't read %d bytes from %s", VAR_0, VAR_13);
 FUNC_2 (VAR_17);
 VAR_19 = FUNC_1(
     VAR_5 + (VAR_8 + VAR_9 * VAR_12),
     &VAR_7, VAR_1);
 if (VAR_14 && VAR_19)
  FUNC_4(1, "%s: no valid label found", VAR_13);

 if (VAR_6)
  return(0);






 VAR_16 = ~0;
 for (VAR_18 = 0; VAR_18 < VAR_7.d_npartitions; VAR_18++) {
  if (VAR_7.d_partitions[VAR_18].p_size)
   VAR_16 = FUNC_0(VAR_16, VAR_7.d_partitions[VAR_18].p_offset);
 }
 if (VAR_16 != 0 && VAR_7.d_partitions[VAR_3].p_offset == VAR_16) {
  for (VAR_18 = 0; VAR_18 < VAR_7.d_npartitions; VAR_18++) {
   if (VAR_7.d_partitions[VAR_18].p_size)
    VAR_7.d_partitions[VAR_18].p_offset -= VAR_16;
  }




  VAR_10 = VAR_16;
 }
 return (VAR_19);
}
